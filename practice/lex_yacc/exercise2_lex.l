%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h"
%}

alpha [a-zA-Z]

%%
{alpha}* {yylval.string = strdup(yytext);return IDENTIFIER;}
\n {yylval.character = yytext[0];return NEWLINE;}
[+|*]   {yylval.character = yytext[0];return yylval.character;}
%%

int yywrap(){
    return 1;
}