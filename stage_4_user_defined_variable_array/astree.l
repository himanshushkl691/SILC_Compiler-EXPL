%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "astree.h"
    #include "y.tab.h"
    int number;
%}

alpha [a-zA-Z_]+
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
repeat      {return _REPEAT;}
until       {return _UNTIL;}
int         {return _INT;}
str         {return _STR;}
decl        {return _DECL;}
enddecl     {return _ENDDECL;}
break       {yylval.node = makeCBNode(BREAK,BREAK,yytext);return _BREAK;}
continue    {yylval.node = makeCBNode(CONTINUE,CONTINUE,yytext);return _CONTINUE;}
breakpoint  {yylval.node = makeCBNode(BREAKPOINT,BREAKPOINT,yytext);return _BREAKPOINT;}
([\"](.)*[\"])  {yylval.node = makeConstantStringLeaf(CONSTANT,STRING,yytext);return _STRING;}
({alpha}({alpha}|{digit})*) 	{yylval.node = makeVariableLeafNode(VARIABLE,NONE,yytext,yytext);return _ID;}
({digit}) 	{
    number = atoi(yytext);
    yylval.node = makeConstantLeafNode(CONSTANT,INTEGER,number,yytext);
    return _NUM;
}
";" 		{return *yytext;}
"(" 		{return *yytext;}
","         {return *yytext;}
")" 		{return *yytext;}
"{"         {return *yytext;}
"}"         {return *yytext;}
"["         {return *yytext;}
"]"         {return *yytext;}
"+" 		{return _PLUS;}
"-" 		{return _MINUS;}
"*" 		{return _MUL;}
"/" 		{return _DIV;}
"%"         {return _MOD;}
"=" 		{return *yytext;}
"<"		    {return _LT;}
([<][=])	{return _LE;}
">"		    {return _GT;}
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
