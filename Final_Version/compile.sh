#!/bin/bash
yacc -d astree.y --warning=none
lex astree.l
gcc lex.yy.c y.tab.c -o astree.exe -w

