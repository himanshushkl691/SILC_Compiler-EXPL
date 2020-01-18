%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "astree.h"
    #include "y.tab.h"
    int number;
%}

alpha [a-z]
digit [0-9]+

%%
begin 		{return _BEGIN;}
end 		{return _END;}
read 		{return _READ;}
write 		{return _WRITE;}
if		    {return _IF;}
else		{return _ELSE;}
then		{return _THEN;}
endif		{return _ENDIF;}
while		{return _WHILE;}
do		    {return _DO;}
endwhile	{return _ENDWHILE;}
{alpha} 	{yylval.node = makeVariableLeafNode(VARIABLE,INTEGER,*yytext,yytext);return _ID;}
{digit} 	{number = atoi(yytext);yylval.node = makeConstantLeafNode(CONSTANT,INTEGER,number,yytext);return _NUM;}
";" 		{return *yytext;}
"(" 		{return *yytext;}
")" 		{return *yytext;}
"+" 		{return _PLUS;}
"-" 		{return _MINUS;}
"*" 		{return _MUL;}
"/" 		{return _DIV;}
"=" 		{return *yytext;}
"<"		{return _LT;}
([<][=])	{return _LE;}
">"		{return _GT;}
([>][=])	{return _GE;}
([=][=])	{return _EQ;}
([!][=])	{return _NE;}
[ \t]   {}
[\n]    {}
.   {yyerror("Unknown character\n");exit(1);}
%%
int yywrap(){
    return 1;
}
