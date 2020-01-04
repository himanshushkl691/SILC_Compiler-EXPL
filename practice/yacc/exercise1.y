%{
	#include <stdio.h>
	#include <stdlib.h>
	int level;
%}
%token IF
%%
/**Rule Section**/
a:	IF'{'a'}'		{level++;}
 |	IF'{''}' a
 |	IF'{''}'		{level++;}
;
%%
#include "lex.yy.c"
int yyerror(const char *s){
	printf("Invalid Syntax\n");
	return 0;
}

int main()
{
	level = 0;
	yyparse();
	printf("Level of nesting is %d\n",level);
	return 0;
}
