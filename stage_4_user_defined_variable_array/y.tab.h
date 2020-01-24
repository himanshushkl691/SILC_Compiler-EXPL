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
    _PLUS = 258,
    _MINUS = 259,
    _MUL = 260,
    _DIV = 261,
    _ID = 262,
    _NUM = 263,
    _BEGIN = 264,
    _END = 265,
    _READ = 266,
    _WRITE = 267,
    _FINISHED = 268,
    _LT = 269,
    _LE = 270,
    _GT = 271,
    _GE = 272,
    _NE = 273,
    _EQ = 274,
    _IF = 275,
    _THEN = 276,
    _ELSE = 277,
    _ENDIF = 278,
    _WHILE = 279,
    _DO = 280,
    _ENDWHILE = 281,
    _BREAK = 282,
    _CONTINUE = 283,
    _BREAKPOINT = 284,
    _REPEAT = 285,
    _UNTIL = 286
  };
#endif
/* Tokens.  */
#define _PLUS 258
#define _MINUS 259
#define _MUL 260
#define _DIV 261
#define _ID 262
#define _NUM 263
#define _BEGIN 264
#define _END 265
#define _READ 266
#define _WRITE 267
#define _FINISHED 268
#define _LT 269
#define _LE 270
#define _GT 271
#define _GE 272
#define _NE 273
#define _EQ 274
#define _IF 275
#define _THEN 276
#define _ELSE 277
#define _ENDIF 278
#define _WHILE 279
#define _DO 280
#define _ENDWHILE 281
#define _BREAK 282
#define _CONTINUE 283
#define _BREAKPOINT 284
#define _REPEAT 285
#define _UNTIL 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "astree.y" /* yacc.c:1909  */

    struct AST_Node *node;

#line 120 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
