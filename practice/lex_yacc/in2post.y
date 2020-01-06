%{
	#include <stdio.h>
%}
%token DIGIT NEWLINE
%left '+'
%left '*'
%%
start:		expr NEWLINE	{printf("Completed\n");exit(1);}
     ;
expr:		expr '+' expr	{printf("+ ");}
    |	expr '*' expr	{printf("* ");}
|	'('expr')'
|	DIGIT		{printf("%d ",$1);}
;	
%%
void yyerror(const char *s){
	printf("yyerror %s\n",s);
	return 1;
}

int main()
{
	yyparse();
	return 1;
}
