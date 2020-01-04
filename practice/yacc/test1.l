%option noyywrap
%{
	#include <stdio.h>
	#include <stdlib.h>
%}
alpha	[a-zA-Z]
digit	[0-9]
%%
if	{return IF;}
{alpha}	{return ALPHA;}
{digit} {return DIGIT;}
.	{return yytext[0];}
%%
