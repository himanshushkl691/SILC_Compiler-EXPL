%option noyywrap
%{
	#include <stdio.h>
	#include <stdlib.h>
%}

alpha [a-zA-Z| ]
forw [/]
star [*]
%%
({forw}{forw}({alpha}+)) {printf("%s\n",yytext);}
({forw}{star}({alpha}*){star}{forw}) {printf("%s\n",yytext);}
%%

int main()
{
	yylex();
	return 0;
}
