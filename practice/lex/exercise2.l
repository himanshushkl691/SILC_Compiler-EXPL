%option noyywrap
%{
	#include <stdio.h>
	#include <stdlib.h>
	int int_cnt,float_cnt,ign;
%}

sign [+|-]
dig [0-9]+
dot [.]
%%
({sign}?{dig}) {int_cnt++;}
({sign}?{dig}{dot}{dig}) {float_cnt++;}
{sign} {ign++;}
%%
int main()
{
	int_cnt = float_cnt = ign = 0;
	yylex();
	printf("Integer count %d\n",int_cnt);
	printf("Float count %d\n",float_cnt);
	return 0;
}
