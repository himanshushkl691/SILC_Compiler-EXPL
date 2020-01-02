%option noyywrap
%{
	#include <stdio.h>
	#include <stdlib.h>
%}

low [a-z]
upper [A-Z]
space [ ]
%%
(((^A)|({space}(A)))({low}|{upper})({low}|{upper})) {printf("%s\n",yytext);}
. {}
%%
int main()
{
	yylex();
	return 0;
}
