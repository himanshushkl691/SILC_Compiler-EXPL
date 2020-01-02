%option noyywrap
%{
	#include <stdio.h>
	#include <stdlib.h>
	int x;
%}

number [0-9]+
op [-|+|*|/|^|=]

%%

{number} {
	int a = atoi(yytext);
	if(a % 2 == 1) printf("Odd number is %d\n",a);
	else printf("Even number is %d\n",a);
}
{op} {printf("operator (%s)\n",yytext);}
. {printf("\n");}

%%

int main()
{
	yylex();
	return 1;
}
