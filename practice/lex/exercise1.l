%option noyywrap
%{
	#include <stdio.h>
	#include <stdlib.h>
	int cnt_char,line_cnt,word_cnt;
%}

low [a-z]
upper [A-Z]
dig [0-9]
pun [,|.| |!|?|*|+|/|-]

%%
(({low}|{upper}|{dig})*) {word_cnt++;cnt_char += yyleng;}
\n {line_cnt++;}
{pun} {cnt_char++;}
%%

int main()
{
	cnt_char = line_cnt = word_cnt = 0;
	yylex();
	printf("Line count %d\n",line_cnt);
	printf("Word count %d\n",word_cnt);
	printf("Char count %d\n",cnt_char);
	return 0;
}
