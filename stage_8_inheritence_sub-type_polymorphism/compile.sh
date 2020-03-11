#!/bin/bash
yacc -d astree.y
lex astree.l
gcc lex.yy.c y.tab.c -o astree.exe

