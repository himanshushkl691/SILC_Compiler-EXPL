#!/bin/bash
yacc -d $1
lex $2
gcc lex.yy.c y.tab.c -o $3
