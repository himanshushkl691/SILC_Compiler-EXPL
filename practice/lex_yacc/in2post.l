%option noyywrap
%{
	#include <stdio.h>
	#include "y.tab.h"
%}

%%
[0-9]+	{yylval = atoi(yytext);return DIGIT;}
[\n]	{return NEWLINE;}
[*|+]	{return *yytext;}
[()]	{return *yytext;}
%%
