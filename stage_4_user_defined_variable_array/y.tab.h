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
    _NUM = 262,
    _BEGIN = 263,
    _END = 264,
    _READ = 265,
    _WRITE = 266,
    _FINISHED = 267,
    _LT = 268,
    _LE = 269,
    _GT = 270,
    _GE = 271,
    _NE = 272,
    _EQ = 273,
    _IF = 274,
    _THEN = 275,
    _ELSE = 276,
    _ENDIF = 277,
    _WHILE = 278,
    _DO = 279,
    _ENDWHILE = 280,
    _BREAK = 281,
    _CONTINUE = 282,
    _BREAKPOINT = 283,
    _REPEAT = 284,
    _UNTIL = 285,
    _INT = 286,
    _STR = 287,
    _DECL = 288,
    _ENDDECL = 289,
    _ID = 290,
    _STRING = 291
  };
#endif
/* Tokens.  */
#define _PLUS 258
#define _MINUS 259
#define _MUL 260
#define _DIV 261
#define _NUM 262
#define _BEGIN 263
#define _END 264
#define _READ 265
#define _WRITE 266
#define _FINISHED 267
#define _LT 268
#define _LE 269
#define _GT 270
#define _GE 271
#define _NE 272
#define _EQ 273
#define _IF 274
#define _THEN 275
#define _ELSE 276
#define _ENDIF 277
#define _WHILE 278
#define _DO 279
#define _ENDWHILE 280
#define _BREAK 281
#define _CONTINUE 282
#define _BREAKPOINT 283
#define _REPEAT 284
#define _UNTIL 285
#define _INT 286
#define _STR 287
#define _DECL 288
#define _ENDDECL 289
#define _ID 290
#define _STRING 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "astree.y" /* yacc.c:1909  */

    struct AST_Node *node;

#line 130 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
