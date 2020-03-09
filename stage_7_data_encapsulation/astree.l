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
main        {return _MAIN;}
return      {return _RETURN;}
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
decl        {return _DECL;}
enddecl     {return _ENDDECL;}
type        {return _TYPE;}
endtype     {return _ENDTYPE;}
extends     {return _EXTENDS;}
class       {class_section = 1;return _CLASS;}
endclass    {class_section = 0;return _ENDCLASS;}
initialize  {yylval.node = makeTreeNode(INITIALIZE,TypeTableLookUp(T,"int"),NULL,NULL,-1,-1,NULL,NULL,NULL,"initialize");return _INITIALIZE;}
alloc       {yylval.node = makeTreeNode(ALLOC,NULL,NULL,NULL,-1,-1,NULL,NULL,NULL,"alloc");return _ALLOC;}
free        {yylval.node = makeTreeNode(FREE,TypeTableLookUp(T,"int"),NULL,NULL,-1,-1,NULL,NULL,NULL,"free");return _FREE;}
NULL        {yylval.node = makeTreeNode(NULL_,NULL,NULL,NULL,-1,-1,NULL,NULL,NULL,"void");return _NULL;}
null        {yylval.node = makeTreeNode(NULL_,NULL,NULL,NULL,-1,-1,NULL,NULL,NULL,"void");return _NULL;}
int         {yylval.node = makeTreeNode(INTEGER,NULL,NULL,NULL,-1,-1,NULL,NULL,NULL,"integer");return _INT;}
str         {yylval.node = makeTreeNode(STRING,NULL,NULL,NULL,-1,-1,NULL,NULL,NULL,"string");return _STR;}
break       {yylval.node = makeTreeNode(BREAK,NULL,NULL,NULL,-1,-1,NULL,NULL,NULL,yytext);return _BREAK;}
continue    {yylval.node = makeTreeNode(CONTINUE,NULL,NULL,NULL,-1,-1,NULL,NULL,NULL,yytext);return _CONTINUE;}
breakpoint  {yylval.node = makeTreeNode(BREAKPOINT,NULL,NULL,NULL,-1,-1,NULL,NULL,NULL,yytext);return _BREAKPOINT;}
([\"](.)*[\"])  {yylval.node = makeTreeNode(CONSTANT,TypeTableLookUp(T,"str"),NULL,NULL,-1,-1,NULL,NULL,NULL,yytext);return _STRING;}
({alpha}({alpha}|{digit})*) 	{yylval.node = makeTreeNode(VARIABLE,NULL,NULL,yytext,-1,-1,NULL,NULL,NULL,yytext);return _ID;}
({digit}) 	{
    number = atoi(yytext);
    yylval.node = makeTreeNode(CONSTANT,TypeTableLookUp(T,"int"),NULL,NULL,-1,number,NULL,NULL,NULL,yytext);
    return _NUM;
}
"."         {return *yytext;}
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
[\n]    {line++;}
.   {printf("Unknown character at line number %d\n",line);exit(1);}
%%
int yywrap(){
    return 1;
}
