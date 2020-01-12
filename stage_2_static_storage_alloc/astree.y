%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "astree.h"
    #include "astree.c"
    int yylex(void);
    FILE *ft;
%}

%union{
    struct AST_Node *node;
};

%type <node> program    Slist   stmt    Inputstmt   Outputstmt  Assgstmt    id  expr    _FINISHED   _ID _NUM _END
%token _PLUS _MINUS _MUL _DIV _ID _NUM _BEGIN _END _READ _WRITE _FINISHED
%left _PLUS _MINUS
%left _MUL _DIV

%%
program:    _BEGIN _FINISHED Slist _END {
    $$ = $4;
    printf("Parsing completed\n");
    code_generator(ft,$3);
    exit(1);
}
|   _BEGIN _FINISHED _END   {
        $$ = $3;
        printf("Parsing Completed\n");
        exit(1);
    }
;
Slist:  Slist stmt{
    $$ = makeStatementNode(STATEMENT,STATEMENT,$1,$2,"STATEMENT");
}
|   stmt  {
        $$ = $1;
    }
;
stmt:   Inputstmt {
    $$ = $1;
}
|   Outputstmt  {
    $$ = $1;
}
|   Assgstmt {
    $$ = $1;
}
;
Inputstmt:  _READ '(' _ID ')' ';'  _FINISHED{
    $$ = makeStatementNode(STATEMENT,READ,$3,(struct AST_Node *)NULL,"Read");
}
;
Outputstmt: _WRITE '(' expr ')' ';' _FINISHED {
    $$ = makeStatementNode(STATEMENT,WRITE,$3,(struct AST_Node *)NULL,"Write");
};
Assgstmt:   id '=' expr ';' _FINISHED {
    $$ = makeExpressionNode(EXPRESSION,ASSIGNMENT,'=',$1,$3,"=");
}
;
expr:   expr _PLUS  expr    {
    $$ = makeExpressionNode(EXPRESSION,PLUS,'+',$1,$3,"+");
}
|   expr _MINUS expr     {
    $$ = makeExpressionNode(EXPRESSION,MINUS,'-',$1,$3,"-");
}
|   expr _MUL expr   {
    $$ = makeExpressionNode(EXPRESSION,MUL,'*',$1,$3,"*");
}
|   expr _DIV expr   {
    $$ = makeExpressionNode(EXPRESSION,DIV,'/',$1,$3,"/");
}
|   '(' expr ')'    {
    $$ = $2;
}
|   _NUM    {$$ = $1;}
|   _ID     {$$ = $1;}
;
id: _ID {$$ = $1;}
;
%%
void yyerror(const char *err){
    printf("yyerror error: %s\n",err);
    return;
}

int main(int argc,char *argv[]){
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