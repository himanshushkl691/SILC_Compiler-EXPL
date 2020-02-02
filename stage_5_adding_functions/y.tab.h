/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _DECL = 258,
    _ENDDECL = 259,
    _PLUS = 260,
    _MINUS = 261,
    _MUL = 262,
    _DIV = 263,
    _MOD = 264,
    _NUM = 265,
    _STRING = 266,
    _ID = 267,
    _LT = 268,
    _LE = 269,
    _GT = 270,
    _GE = 271,
    _NE = 272,
    _EQ = 273,
    _INT = 274,
    _STR = 275,
    _READ = 276,
    _WRITE = 277,
    _BEGIN = 278,
    _END = 279,
    _IF = 280,
    _THEN = 281,
    _ELSE = 282,
    _ENDIF = 283,
    _WHILE = 284,
    _DO = 285,
    _ENDWHILE = 286,
    _REPEAT = 287,
    _UNTIL = 288,
    _BREAK = 289,
    _CONTINUE = 290,
    _BREAKPOINT = 291,
    _MAIN = 292
  };
#endif
/* Tokens.  */
#define _DECL 258
#define _ENDDECL 259
#define _PLUS 260
#define _MINUS 261
#define _MUL 262
#define _DIV 263
#define _MOD 264
#define _NUM 265
#define _STRING 266
#define _ID 267
#define _LT 268
#define _LE 269
#define _GT 270
#define _GE 271
#define _NE 272
#define _EQ 273
#define _INT 274
#define _STR 275
#define _READ 276
#define _WRITE 277
#define _BEGIN 278
#define _END 279
#define _IF 280
#define _THEN 281
#define _ELSE 282
#define _ENDIF 283
#define _WHILE 284
#define _DO 285
#define _ENDWHILE 286
#define _REPEAT 287
#define _UNTIL 288
#define _BREAK 289
#define _CONTINUE 290
#define _BREAKPOINT 291
#define _MAIN 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 21 "astree.y" /* yacc.c:1909  */

    struct AST_Node *node;

#line 132 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
