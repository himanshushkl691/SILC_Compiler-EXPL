%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "astree.h"
    #include "astree.c"
    int yylex(void);
    char *yytext;
    FILE *ft;
    struct GSTNode *head, *curr;
    char *keyword[20] = {"begin", "end", "read", "write", "if", "else", "then", "endif", "while", "do", "endwhile", "repeat", "until", "int", "str", "decl", "enddecl", "break", "continue", "breakpoint"};

%}

%union{
    struct AST_Node *node;
};

%type <node> program Slist stmt Inputstmt Outputstmt Assgstmt Ifstmt id expr _FINISHED _NUM _STRING _END boolstmt Whilestmt _BREAK _CONTINUE _BREAKPOINT RepeatUntil DoWhile DeclList Decl Declarations Varlist _ID stringExp
%token _PLUS _MINUS _MUL _DIV _NUM _BEGIN _END _READ _WRITE _FINISHED _LT _LE _GT _GE _NE _EQ _IF _THEN _ELSE _ENDIF _WHILE _DO _ENDWHILE _BREAK _CONTINUE _BREAKPOINT _REPEAT _UNTIL _INT _STR _DECL _ENDDECL _ID _STRING
%left _PLUS _MINUS
%left _MUL _DIV
%start program

%%
//-------------------------Declarations-----------------------
Declarations:   _DECL DeclList _ENDDECL  {$$ = NULL;printGST(head);}
|   _DECL _ENDDECL  {}
;
DeclList:   DeclList Decl   {}
|   Decl    {}
;
Decl:   _INT Varlist  ';' {
    $$ = ASTchangeType(head,$2,INTEGER);
}
|   _STR Varlist  ';' {
    $$ = ASTchangeType(head,$2,STRING);
}
;
Varlist:    _ID{head = InstallID(head,NONE,1,yytext);$$ = $1;}
|   Varlist ',' _ID{
    head = InstallID(head,NONE,1,yytext);
    $$ = makeStatementNode(STATEMENT,STATEMENT,$1,$3,",");
}
;
//----------------------------Program---------------------
program:    Declarations _BEGIN Slist _END {
    $$ = $3;
    printf("Parsing completed\n");
    print_tree($3);
    printf("\n");
    code_generator(ft,$3,head);
    exit(1);
}
|   Declarations _BEGIN  _END   {
        $$ = $3;
        printf("Parsing Completed\n");
        exit(1);
    }
;
//-----------------------Statement List-------------------
Slist:  Slist stmt{
    $$ = makeStatementNode(STATEMENT,STATEMENT,$1,$2,"STATEMENT");
}
|   stmt  {
        $$ = $1;
    }
;
//---------------------Type of Statements-----------------
stmt:	Inputstmt {
    $$ = $1;
}
|	Outputstmt  {
    $$ = $1;
}
|	Assgstmt {
    $$ = $1;
}
|	Ifstmt{
	$$ = $1;
}
|	Whilestmt{
	$$ = $1;
}
|   RepeatUntil{
    $$ = $1;
}
|   DoWhile{
    $$ = $1;
}
|   _BREAK ';'  {
    $$ = $1;
}
|   _CONTINUE ';'   {
    $$ = $1;
}
|   _BREAKPOINT ';' {
    $$ = $1;
}
;
Inputstmt:  _READ '(' _ID ')' ';'{
    curr = LookUp(head,$3->varname);
    if(!curr){
        printf("Variable \"%s\" not declared\n",$3->varname);
        exit(1);
    }
    $$ = makeStatementNode(STATEMENT,READ,$3,(struct AST_Node *)NULL,"Read");
}
;
Outputstmt: _WRITE '(' stringExp ')' ';' {
    	$$ = makeStatementNode(STATEMENT,WRITE,$3,(struct AST_Node *)NULL,"Write");
};
Assgstmt:   id '=' stringExp ';'{
    int t1 = $1->type ,t2 = $3->type;
    if(t1 == STRING && (t2 == PLUS || t2 == MINUS || t2 == MUL || t2 == DIV || t2 == INTEGER)){
        printf("Variable \"%s\" is a string variable assigning expression\n",$1->varname);
        exit(1);
    }
    if(t1 == INTEGER && t2 == STRING){
        printf("Variable \"%s\" is an integer variable assigning string value\n",$1->varname);
        exit(1);
    }
	$$ = makeExpressionNode(EXPRESSION,ASSIGNMENT,'=',$1,$3,"=");
}
;
stringExp:  expr    {$$ = $1;}
|   _STRING {$$ = $1;}
;
Ifstmt:	_IF '(' boolstmt ')' _THEN Slist _ELSE Slist _ENDIF ';'{
      	struct AST_Node *temp1 = makeStatementNode(STATEMENT,IF,$3,$6,"IF");
	struct AST_Node *temp2 = makeStatementNode(STATEMENT,ELSE,$8,(struct AST_Node *)NULL,"ELSE");
	$$ = makeStatementNode(STATEMENT,IF_ELSE,temp1,temp2,"IF_ELSE");
}
|	_IF '(' boolstmt ')' _THEN Slist _ENDIF ';'{
	struct AST_Node *temp1 = makeStatementNode(STATEMENT,IF,$3,$6,"IF");
	$$ = makeStatementNode(STATEMENT,IF_ELSE,temp1,(struct AST_Node *)NULL,"IF_ELSE");
}
;
Whilestmt: _WHILE '(' boolstmt ')' _DO Slist _ENDWHILE ';'{
	 $$ = makeStatementNode(LOOP,WHILE,$3,$6,"WHILE");
}
;
RepeatUntil:    _REPEAT '{' Slist '}' _UNTIL '(' boolstmt ')' ';'   {
    $$ = makeStatementNode(LOOP,REPEAT_UNTIL,$3,$7,"REPEAT_UNTIL");
}
;
DoWhile:    _DO '{' Slist '}' _WHILE '(' boolstmt ')' ';'   {
    $$ = makeStatementNode(LOOP,DO_WHILE,$3,$7,"DO_WHILE");
}
;
boolstmt:	expr _LT expr{
	$$ = makeStatementNode(BOOLEAN,LT,$1,$3,"LT");
}
|	expr _LE expr{
	$$ = makeStatementNode(BOOLEAN,LE,$1,$3,"LE");
}
|	expr _GT expr{
	$$ = makeStatementNode(BOOLEAN,GT,$1,$3,"GT");
}
|	expr _GE expr{
	$$ = makeStatementNode(BOOLEAN,GE,$1,$3,"GE");
}
|	expr _NE expr{
	$$ = makeStatementNode(BOOLEAN,NE,$1,$3,"NE");
}
|	expr _EQ expr{
	$$ = makeStatementNode(BOOLEAN,EQ,$1,$3,"EQ");
}
;
//--------------------------Expressions-----------------------
expr:   expr _PLUS  expr    {
    int t1 = $1->type,t2 = $3->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL) && (t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        $$ = makeExpressionNode(EXPRESSION,PLUS,'+',$1,$3,"+");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|   expr _MINUS expr     {
    int t1 = $1->type,t2 = $3->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL) && (t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        $$ = makeExpressionNode(EXPRESSION,MINUS,'-',$1,$3,"-");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|   expr _MUL expr   {
    int t1 = $1->type,t2 = $3->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL) && (t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        $$ = makeExpressionNode(EXPRESSION,MUL,'*',$1,$3,"*");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|   expr _DIV expr   {
    int t1 = $1->type,t2 = $3->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL) && (t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        $$ = makeExpressionNode(EXPRESSION,DIV,'/',$1,$3,"/");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|   '(' expr ')'    {
    $$ = $2;
}
|   _NUM    {$$ = $1;}
|   _ID     {
    $$ = $1;
    curr = LookUp(head,$$->varname);
    if(!curr){
        printf("Variable \"%s\" not declared\n",$$->varname);
        exit(1);
    }
    $$->type = curr->type;
}
;
id: _ID {
    $$ = $1;
    curr = LookUp(head,$$->varname);
    if(!curr){
        printf("Variable \"%s\" not declared\n",$$->varname);
        exit(1);
    }
    $$->type = curr->type;
}
;
%%
void yyerror(const char *err){
    printf("yyerror error: %s\n",err);
    return;
}

int main(int argc,char *argv[]){
    head = init_ds(head,keyword);    
    if(argc > 1){
		printf("Generating file as %s\n",argv[1]);
		ft = fopen(argv[1],"w");
		yyparse();
	}
	else{
		printf("Generating file as code.xsm\n");
		ft = fopen("code.xsm","w");
		yyparse();
	}
    return 1;
}
