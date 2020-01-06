%{
    #include <stdlib.h>
    #include <stdio.h>
    #include "exptree.h"    //contains all required declaration
    #include "exptree.c"    //contains function definition
    int yylex(void);        //user definition
%}

%union{
    struct tnode *node;
};

%type <node> expr NUM program END
%token NUM PLUS MINUS MUL DIV END
%left PLUS MINUS
%left MUL DIV

%%
program : expr END {
    $$ = $2;
    printf("Parsing completed\n");
    printf("Value %d\n",evaluate($1));
    exit(1);
};
expr : expr PLUS expr {
    $$ = makeOperatorNode('+',$1,$3);
}
| expr MINUS expr {
    $$ = makeOperatorNode('-',$1,$3);
}
| expr MUL expr {
    $$ = makeOperatorNode('*',$1,$3);
}
| expr DIV expr {
    $$ = makeOperatorNode('/',$1,$3);
}
| '(' expr ')' {
    $$ = $2;
}
| NUM {
    $$ = $1;
}
;
%%

void yyerror(const char *err){
    printf("yyparse syntax: %s\n",err);
    return;
}

int main()
{
    yyparse();
    return 0;
}