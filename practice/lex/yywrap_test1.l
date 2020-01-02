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
	char *str = "input.txt";
	if(strcmp(file,str) != 0){
		file = str;
		yyin = fopen(str,"r");
		return 0;
	}
	else
		return 1;
}

int main()
{
	file = "stdin";
	yylex();
	return 0;	
}
