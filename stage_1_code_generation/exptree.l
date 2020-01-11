%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "exptree.h"
	#include "y.tab.h"
	int number;
%}

alpha [a-zA-Z]+
digit [0-9]+

%%
{digit} {number = atoi(yytext);yylval.node = makeLeafNode(number);return NUM;}
"+"	{return PLUS;}
"-"	{return MINUS;}
"/"	{return DIV;}
"*"	{return MUL;}
[\n]	{return END;}
[()]	{return *yytext;}
[ \t]	{}
.	{yyerror("unknown character\n");exit(1);}
%%

int yywrap()
{
	return 1;
}
