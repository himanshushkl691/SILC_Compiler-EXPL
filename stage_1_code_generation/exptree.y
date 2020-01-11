%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "exptree.h"
	#include "exptree.c"
	int yylex(void);
	FILE *ft;
%}

%union{
	struct ET_Node *node;
};

%type <node> expr NUM END start
%token NUM PLUS MINUS DIV MUL END
%left PLUS MINUS
%left MUL DIV

%%
start:	expr END {
     	$$ = $2;
	code_generator(ft,$1);
	exit(1);
     }
;
expr:	expr PLUS expr	{$$ = makeOperatorNode('+',$1,$3);}
    |	expr MINUS expr	{$$ = makeOperatorNode('-',$1,$3);}
|	expr MUL expr	{$$ = makeOperatorNode('*',$1,$3);}
|	expr DIV expr	{$$ = makeOperatorNode('/',$1,$3);}
|	'('expr')'	{$$ = $2;}
|	NUM		{$$ = $1;}
;
%%

yyerror(const char *err){
	printf("yyerror %s : ",err);
}

int main(int argc,char *argv[])
{
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
