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
begin {return _BEGIN;}
end {return _END;}
read {return _READ;}
write {return _WRITE;}
{alpha} {yylval.node = makeVariableLeafNode(VARIABLE,INTEGER,*yytext);return _ID;}
{digit} {number = atoi(yytext);yylval.node = makeConstantLeafNode(CONSTANT,INTEGER,number);return _NUM;}
";" {return *yytext;}
"(" {return *yytext;}
")" {return *yytext;}
"+" {return _PLUS;}
"-" {return _MINUS;}
"*" {return _MUL;}
"/" {return _DIV;}
"=" {return *yytext;}
[ \t]   {}
[\n]    {return _FINISHED;}
.   {yyerror("Unknown character\n");exit(1);}
%%
int yywrap(){
    return 1;
}