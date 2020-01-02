%{
	#include <stdio.h>
	#include <stdlib.h>
	char *file;
%}

number [0-9]+

%%

{number} {printf("number\n");}
. {printf("error\n");}

%%
int yywrap()
{
	char *str = "stdin";
	if(strcmp(file,str) != 0){
		file = str;
		yyin = stdin;
		return 0;
	}
	else
		return 1;
}

int main()
{
	file = "input.txt";
	yyin = fopen(file,"r");
	yylex();
	return 0;	
}
