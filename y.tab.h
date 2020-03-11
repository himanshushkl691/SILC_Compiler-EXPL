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
    _TYPE = 260,
    _ENDTYPE = 261,
    _CLASS = 262,
    _ENDCLASS = 263,
    _EXTENDS = 264,
    _SELF = 265,
    _PLUS = 266,
    _MINUS = 267,
    _MUL = 268,
    _DIV = 269,
    _MOD = 270,
    _NUM = 271,
    _STRING = 272,
    _ID = 273,
    _INT = 274,
    _STR = 275,
    _LT = 276,
    _LE = 277,
    _GT = 278,
    _GE = 279,
    _NE = 280,
    _EQ = 281,
    _READ = 282,
    _WRITE = 283,
    _BEGIN = 284,
    _END = 285,
    _IF = 286,
    _THEN = 287,
    _ELSE = 288,
    _ENDIF = 289,
    _WHILE = 290,
    _DO = 291,
    _ENDWHILE = 292,
    _REPEAT = 293,
    _UNTIL = 294,
    _BREAK = 295,
    _CONTINUE = 296,
    _BREAKPOINT = 297,
    _MAIN = 298,
    _RETURN = 299,
    _NULL = 300,
    _FREE = 301,
    _ALLOC = 302,
    _INITIALIZE = 303
  };
#endif
/* Tokens.  */
#define _DECL 258
#define _ENDDECL 259
#define _TYPE 260
#define _ENDTYPE 261
#define _CLASS 262
#define _ENDCLASS 263
#define _EXTENDS 264
#define _SELF 265
#define _PLUS 266
#define _MINUS 267
#define _MUL 268
#define _DIV 269
#define _MOD 270
#define _NUM 271
#define _STRING 272
#define _ID 273
#define _INT 274
#define _STR 275
#define _LT 276
#define _LE 277
#define _GT 278
#define _GE 279
#define _NE 280
#define _EQ 281
#define _READ 282
#define _WRITE 283
#define _BEGIN 284
#define _END 285
#define _IF 286
#define _THEN 287
#define _ELSE 288
#define _ENDIF 289
#define _WHILE 290
#define _DO 291
#define _ENDWHILE 292
#define _REPEAT 293
#define _UNTIL 294
#define _BREAK 295
#define _CONTINUE 296
#define _BREAKPOINT 297
#define _MAIN 298
#define _RETURN 299
#define _NULL 300
#define _FREE 301
#define _ALLOC 302
#define _INITIALIZE 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "stage_8_inheritence_sub-type_polymorphism/astree.y" /* yacc.c:1909  */

    struct AST_Node *node;

#line 154 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
