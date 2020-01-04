%{
	#include <stdio.h>
	#include <stdlib.h>
%}
%token ALPHA
%token DIGIT
%%
s: 	ALPHA a	{printf("Valid Identifier\n");}
 |	ALPHA	{printf("Valid Identifier\n");}
 ;
a:	ALPHA a
 |	DIGIT a
 |	ALPHA
 |	DIGIT
;
%%
#include "lex.yy.c"
yyerror(const char *s)
{
	printf("Invalid indentifier %s\n",s);
}
int main()
{
	yyparse();
	return 0;
}
