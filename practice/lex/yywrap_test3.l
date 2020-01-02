%{
	#include <stdio.h>
	#include <stdlib.h>
	int flag;
%}

number [0-9]+

%%

{number} {printf("number\n");}
. {printf("error\n");}

%%
int yywrap()
{
	if(flag == 0){
		flag = 1;
		yyin = stdin;
		return 0;
	}
	else
		return 1;
}

int main()
{
	flag = 0;
	yylex();
	return 0;	
}
