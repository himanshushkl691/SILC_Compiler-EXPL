%option noyywrap
%{
	#include <stdio.h>
	#include <stdlib.h>
%}
%%
if	{return IF;}
.	{return yytext[0];}
%%
