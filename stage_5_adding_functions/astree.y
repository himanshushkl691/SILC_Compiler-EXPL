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

/**/
%type <node> _BREAK _CONTINUE _BREAKPOINT
%type <node> DeclList Decl Declarations Varlist
%type <node> program
%type <node> Slist stmt Inputstmt Outputstmt Assgstmt Ifstmt Whilestmt RepeatUntil DoWhile
%type <node> _NUM _STRING
%type <node> expr stringExp _ID id _END
/*TOKENS*/
//declaration
%token _DECL _ENDDECL
//operator
%token _PLUS _MINUS _MUL _DIV _MOD
//constants and identifiers
%token _NUM _STRING _ID
//relop
%token _LT _LE _GT _GE _NE _EQ
//data type
%token _INT _STR
//read and write
%token _READ _WRITE
//begin and end of function
%token _BEGIN _END
//if-else
%token _IF _THEN _ELSE _ENDIF
//while and do-while
%token _WHILE _DO _ENDWHILE
//repeat-until
%token _REPEAT _UNTIL
//break, continue, breakpoint
%token _BREAK _CONTINUE _BREAKPOINT
/*ASSOCIATIVITY*/
%left _LT _LE
%left _GT _GE
%left _EQ _NE
%left _PLUS _MINUS
%left _MUL _DIV _MOD
/*STARTING Non-Terminal*/
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
    if((typeCheckExp($1) && typeCheckExp($3)) || (typeCheckStr($1) && typeCheckStr($3)))
	    $$ = makeExpressionNode(EXPRESSION,ASSIGNMENT,'=',$1,$3,"=");
    else{
        printf("Invalid assignment to \"%s\"\n",$1->varname);
        exit(1);
    }
}
;
stringExp:  expr    {$$ = $1;}
|   _STRING {$$ = $1;}
;
Ifstmt:	_IF '(' expr ')' _THEN Slist _ELSE Slist _ENDIF ';'{
    if(!typeCheckBool($3)){
        printf("Invalid boolean statement\n");
        exit(1);
    }
    struct AST_Node *temp1 = makeStatementNode(STATEMENT,IF,$3,$6,"IF");
	struct AST_Node *temp2 = makeStatementNode(STATEMENT,ELSE,$8,(struct AST_Node *)NULL,"ELSE");
	$$ = makeStatementNode(STATEMENT,IF_ELSE,temp1,temp2,"IF_ELSE");
}
|	_IF '(' expr ')' _THEN Slist _ENDIF ';'{
    if(!typeCheckBool($3)){
        printf("Invalid boolean statement\n");
        exit(1);
    }
	struct AST_Node *temp1 = makeStatementNode(STATEMENT,IF,$3,$6,"IF");
	$$ = makeStatementNode(STATEMENT,IF_ELSE,temp1,(struct AST_Node *)NULL,"IF_ELSE");
}
;
Whilestmt: _WHILE '(' expr ')' _DO Slist _ENDWHILE ';'{
    if(typeCheckBool($3))
	    $$ = makeStatementNode(LOOP,WHILE,$3,$6,"WHILE");
    else{
        printf("Invalid bool statement\n");
        exit(1);
    }
}
;
RepeatUntil:    _REPEAT '{' Slist '}' _UNTIL '(' expr ')' ';'   {
    if(typeCheckBool($7))
        $$ = makeStatementNode(LOOP,REPEAT_UNTIL,$3,$7,"REPEAT_UNTIL");
    else{
        printf("Invalid bool statement\n");
        exit(1);
    }
}
;
DoWhile:    _DO '{' Slist '}' _WHILE '(' expr ')' ';'   {
    if(typeCheckBool($7))
        $$ = makeStatementNode(LOOP,DO_WHILE,$3,$7,"DO_WHILE");
    else{
        printf("Invalid bool statement\n");
        exit(1);
    }
}
;
//--------------------------Expressions-----------------------
expr:   expr _PLUS  expr    {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeExpressionNode(EXPRESSION,PLUS,'+',$1,$3,"+");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|   expr _MINUS expr     {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeExpressionNode(EXPRESSION,MINUS,'-',$1,$3,"-");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|   expr _MUL expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeExpressionNode(EXPRESSION,MUL,'*',$1,$3,"*");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|   expr _DIV expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeExpressionNode(EXPRESSION,DIV,'/',$1,$3,"/");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|   expr _MOD expr {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeExpressionNode(EXPRESSION,MOD,'%',$1,$3,"%");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
|   expr _LT expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeExpressionNode(EXPRESSION,LT,'#',$1,$3,"<");
    else{
        printf("Invalid Operator\n");
        exit(1);
    }
}
|   expr _LE expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeExpressionNode(EXPRESSION,LE,'#',$1,$3,"<=");
    else{
        printf("Invalid Operator\n");
        exit(1);
    }
}
|   expr _GT expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeExpressionNode(EXPRESSION,GT,'#',$1,$3,">");
    else{
        printf("Invalid Operator\n");
        exit(1);
    }
}
|   expr _GE expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeExpressionNode(EXPRESSION,GE,'#',$1,$3,">=");
    else{
        printf("Invalid Operator\n");
        exit(1);
    }
}
|   expr _NE expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeExpressionNode(EXPRESSION,NE,'#',$1,$3,"!=");
    else{
        printf("Invalid Operator\n");
        exit(1);
    }
}
|   expr _EQ expr   {
    if(typeCheckExp($1) && typeCheckExp($3))
        $$ = makeExpressionNode(EXPRESSION,EQ,'#',$1,$3,"==");
    else{
        printf("Invalid Operator\n");
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
    if(typeCheckBool($3)){
        printf("Invalid index\n");
        exit(1);
    }
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
