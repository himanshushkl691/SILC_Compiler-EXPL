//----------------------Auxiliary Declaration-----------------
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
%token _PLUS _MINUS _MUL _DIV _MOD _NUM _BEGIN _END _READ _WRITE _FINISHED _LT _LE _GT _GE _NE _EQ _IF _THEN _ELSE _ENDIF _WHILE _DO _ENDWHILE _BREAK _CONTINUE _BREAKPOINT _REPEAT _UNTIL _INT _STR _DECL _ENDDECL _ID _STRING
%left _PLUS _MINUS
%left _MUL _DIV _MOD
%start program

%%
//---------------------------Rules----------------------------
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
Varlist:    Varlist ',' _ID {
    head = InstallID(head,NONE,VARIABLE,1,$3->varname);
    $$ = makeStatementNode(STATEMENT,STATEMENT,$1,$3,",");
}
|   Varlist ',' _ID '[' _NUM ']'    {
    head = InstallID(head,NONE,ARRAY_VARIABLE,$5->val,$3->varname);
    $$ = makeStatementNode(STATEMENT,STATEMENT,$1,$3,",");
}
|   _ID {
    head = InstallID(head,NONE,VARIABLE,1,$1->varname);
    $$ = $1;
}
|   _ID '[' _NUM ']'    {
    head = InstallID(head,NONE,ARRAY_VARIABLE,$3->val,$1->varname);
    $$ = $1;
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
Inputstmt:  _READ '(' id ')' ';'{
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
    int t1 = $1->type,t2 = $3->type;
if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        $$ = makeStatementNode(BOOLEAN,LT,$1,$3,"LT");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|	expr _LE expr{
    int t1 = $1->type,t2 = $3->type;
if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        $$ = makeStatementNode(BOOLEAN,LE,$1,$3,"LE");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|	expr _GT expr{
    int t1 = $1->type,t2 = $3->type;
if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        $$ = makeStatementNode(BOOLEAN,GT,$1,$3,"GT");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|	expr _GE expr{
    int t1 = $1->type,t2 = $3->type;
if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        $$ = makeStatementNode(BOOLEAN,GE,$1,$3,"GE");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|	expr _NE expr{
    int t1 = $1->type,t2 = $3->type;
if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        $$ = makeStatementNode(BOOLEAN,NE,$1,$3,"NE");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|	expr _EQ expr{
    int t1 = $1->type,t2 = $3->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        $$ = makeStatementNode(BOOLEAN,EQ,$1,$3,"EQ");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
;
//--------------------------Expressions-----------------------
expr:   expr _PLUS  expr    {
    int t1 = $1->type,t2 = $3->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        $$ = makeExpressionNode(EXPRESSION,PLUS,'+',$1,$3,"+");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|   expr _MINUS expr     {
    int t1 = $1->type,t2 = $3->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        $$ = makeExpressionNode(EXPRESSION,MINUS,'-',$1,$3,"-");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|   expr _MUL expr   {
    int t1 = $1->type,t2 = $3->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        $$ = makeExpressionNode(EXPRESSION,MUL,'*',$1,$3,"*");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|   expr _DIV expr   {
    int t1 = $1->type,t2 = $3->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        $$ = makeExpressionNode(EXPRESSION,DIV,'/',$1,$3,"/");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|   expr _MOD expr {
    int t1 = $1->type,t2 = $3->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL || t1 == MOD) && (t2 == MOD || t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        $$ = makeExpressionNode(EXPRESSION,MOD,'%',$1,$3,"%");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|   '(' expr ')'    {
    $$ = $2;
}
|   _NUM    {$$ = $1;}
|   id  {$$ = $1;}
;
//----------------------------Identifiers-----------------------
id: _ID {
    $$ = $1;
    curr = LookUp(head,$$->varname);
    if(!curr){
        printf("Variable \"%s\" not declared\n",$$->varname);
        exit(1);
    }
    $$->type = curr->type;
}
|   _ID '[' expr ']' {
    curr = LookUp(head,$1->varname);
    if(!curr){
        printf("Variable \"%s\" not declared\n",$1->varname);
        exit(1);
    }
    if(curr->type_of_var != ARRAY_VARIABLE){
        printf("Variable \"%s\" not of array type\n",$1->varname);
        exit(1);
    }
    $1->type = curr->type;
    $$ = makeArrVariableNode(ARRAY_VARIABLE,$1->type,$1,$3,"ARRAY_VARIABLE");
}
;
%%
//-------------------------Auxiliary Functions--------------------------
void yyerror(const char *err){
    printf("**%s at line number %d\n",err,line);
    return;
}

int main(int argc,char *argv[]){
    head = init_ds(head,keyword);
    line = 1;
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
