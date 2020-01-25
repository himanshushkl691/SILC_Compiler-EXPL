/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "astree.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "astree.h"
    #include "astree.c"
    int yylex(void);
    char *yytext;
    FILE *ft;
    struct GSTNode *head, *curr;
    char *keyword[20] = {"begin", "end", "read", "write", "if", "else", "then", "endif", "while", "do", "endwhile", "repeat", "until", "int", "str", "decl", "enddecl", "break", "continue", "breakpoint"};


#line 80 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 16 "astree.y" /* yacc.c:355  */

    struct AST_Node *node;

#line 196 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 213 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   254

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  128

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,    42,     2,     2,    38,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
       2,    43,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    29,    29,    30,    32,    33,    35,    38,    42,    46,
      50,    54,    60,    68,    75,    78,    83,    86,    89,    92,
      95,    98,   101,   104,   107,   110,   114,   118,   121,   134,
     135,   137,   142,   147,   151,   155,   159,   168,   177,   186,
     195,   204,   215,   224,   233,   242,   251,   254,   255,   258,
     267
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_PLUS", "_MINUS", "_MUL", "_DIV",
  "_NUM", "_BEGIN", "_END", "_READ", "_WRITE", "_FINISHED", "_LT", "_LE",
  "_GT", "_GE", "_NE", "_EQ", "_IF", "_THEN", "_ELSE", "_ENDIF", "_WHILE",
  "_DO", "_ENDWHILE", "_BREAK", "_CONTINUE", "_BREAKPOINT", "_REPEAT",
  "_UNTIL", "_INT", "_STR", "_DECL", "_ENDDECL", "_ID", "_STRING", "';'",
  "','", "'['", "']'", "'('", "')'", "'='", "'{'", "'}'", "$accept",
  "Declarations", "DeclList", "Decl", "Varlist", "program", "Slist",
  "stmt", "Inputstmt", "Outputstmt", "Assgstmt", "stringExp", "Ifstmt",
  "Whilestmt", "RepeatUntil", "DoWhile", "boolstmt", "expr", "id", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    59,    44,    91,
      93,    40,    41,    61,   123,   125
};
# endif

#define YYPACT_NINF -45

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-45)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -29,   -11,     2,    31,     4,     4,   -45,    90,   -45,   108,
     -45,    -2,   -21,    -8,   -45,   -45,   -45,    -3,     7,    15,
      19,    22,    32,    37,    38,    24,    40,   129,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,    33,    77,   -45,    56,
     -45,    57,    52,    26,    26,   209,   -45,   -45,   -45,   209,
      26,   -45,   -45,    52,    58,    61,    64,   -45,   -45,    26,
      65,     9,   -45,    73,   236,    74,    54,    85,     3,    66,
     -45,   116,    88,    21,    89,    26,    26,    26,    26,   109,
      26,    26,    26,    26,    26,    26,   104,   110,   111,   -45,
     -45,   102,   -45,   -45,   -45,    29,    29,   -45,   -45,   209,
       9,     9,     9,     9,     9,     9,   209,   103,   105,   -45,
     149,   169,    26,    26,   209,   112,   113,   119,   120,   189,
     -45,   -45,   114,   117,   126,   -45,   -45,   -45
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     3,     0,     5,     0,
       1,    10,     0,     0,     2,     4,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,    15,    16,
      17,    18,    19,    20,    21,    22,     0,     0,     6,     0,
       7,     0,     0,     0,     0,     0,    23,    24,    25,     0,
       0,    12,    14,     0,     0,     8,     0,    47,    30,     0,
       0,    29,    48,     0,     0,     0,     0,     0,     0,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      28,     0,    26,    46,    27,    42,    43,    44,    45,     0,
      36,    37,    38,    39,    40,    41,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    35,    34,    31
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -45,   -45,   -45,   138,   142,   -45,   -44,   -25,   -45,   -45,
     -45,   121,   -45,   -45,   -45,   -45,   -41,   -31,    -9
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,     8,    12,     3,    27,    28,    29,    30,
      31,    60,    32,    33,    34,    35,    63,    64,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      36,    66,    52,    65,     1,    67,    75,    76,    77,    78,
       9,    61,    75,    76,    77,    78,    38,    39,    36,    68,
       4,     5,    61,     6,    75,    76,    77,    78,    73,    40,
      39,    10,    56,    57,    77,    78,    36,    37,    41,    11,
      36,    52,    52,    89,    95,    96,    97,    98,    42,   100,
     101,   102,   103,   104,   105,   110,    43,    36,    36,    57,
      44,    26,   111,    93,    17,    18,    45,    59,    49,    46,
     119,   117,   118,    19,    47,    48,    53,    20,    21,    50,
      22,    23,    24,    25,    54,    52,    52,    26,    58,    26,
      36,    55,    26,    59,    52,    17,    18,    36,    70,    87,
      71,    36,    36,    90,    19,    36,    72,    74,    20,    21,
      36,    22,    23,    24,    25,    79,    86,    16,    17,    18,
      26,     4,     5,    91,    14,    92,    94,    19,   106,    99,
      88,    20,    21,   107,    22,    23,    24,    25,    51,    17,
      18,   108,   109,    26,   112,    15,   113,    13,    19,   120,
     121,   125,    20,    21,   126,    22,    23,    24,    25,    17,
      18,   122,   123,   127,    26,     0,     0,     0,    19,     0,
     114,   115,    20,    21,    69,    22,    23,    24,    25,    17,
      18,     0,     0,     0,    26,     0,     0,     0,    19,     0,
       0,     0,    20,    21,   116,    22,    23,    24,    25,    17,
      18,     0,     0,     0,    26,     0,     0,     0,    19,     0,
       0,   124,    20,    21,     0,    22,    23,    24,    25,    17,
      18,     0,     0,     0,    26,     0,     0,     0,    19,     0,
       0,     0,    20,    21,     0,    22,    23,    24,    25,    75,
      76,    77,    78,     0,    26,     0,     0,     0,     0,    80,
      81,    82,    83,    84,    85
};

static const yytype_int8 yycheck[] =
{
       9,    45,    27,    44,    33,    49,     3,     4,     5,     6,
       8,    42,     3,     4,     5,     6,    37,    38,    27,    50,
      31,    32,    53,    34,     3,     4,     5,     6,    59,    37,
      38,     0,    41,     7,     5,     6,    45,    39,    41,    35,
      49,    66,    67,    40,    75,    76,    77,    78,    41,    80,
      81,    82,    83,    84,    85,    99,    41,    66,    67,     7,
      41,    35,   106,    42,    10,    11,    44,    41,    44,    37,
     114,   112,   113,    19,    37,    37,    43,    23,    24,    39,
      26,    27,    28,    29,     7,   110,   111,    35,    36,    35,
      99,    35,    35,    41,   119,    10,    11,   106,    40,    45,
      39,   110,   111,    37,    19,   114,    42,    42,    23,    24,
     119,    26,    27,    28,    29,    42,    42,     9,    10,    11,
      35,    31,    32,     7,    34,    37,    37,    19,    24,    20,
      45,    23,    24,    23,    26,    27,    28,    29,     9,    10,
      11,    30,    40,    35,    41,     7,    41,     5,    19,    37,
      37,    37,    23,    24,    37,    26,    27,    28,    29,    10,
      11,    42,    42,    37,    35,    -1,    -1,    -1,    19,    -1,
      21,    22,    23,    24,    53,    26,    27,    28,    29,    10,
      11,    -1,    -1,    -1,    35,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    10,
      11,    -1,    -1,    -1,    35,    -1,    -1,    -1,    19,    -1,
      -1,    22,    23,    24,    -1,    26,    27,    28,    29,    10,
      11,    -1,    -1,    -1,    35,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    23,    24,    -1,    26,    27,    28,    29,     3,
       4,     5,     6,    -1,    35,    -1,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    33,    47,    51,    31,    32,    34,    48,    49,     8,
       0,    35,    50,    50,    34,    49,     9,    10,    11,    19,
      23,    24,    26,    27,    28,    29,    35,    52,    53,    54,
      55,    56,    58,    59,    60,    61,    64,    39,    37,    38,
      37,    41,    41,    41,    41,    44,    37,    37,    37,    44,
      39,     9,    53,    43,     7,    35,    64,     7,    36,    41,
      57,    63,    64,    62,    63,    62,    52,    52,    63,    57,
      40,    39,    42,    63,    42,     3,     4,     5,     6,    42,
      13,    14,    15,    16,    17,    18,    42,    45,    45,    40,
      37,     7,    37,    42,    37,    63,    63,    63,    63,    20,
      63,    63,    63,    63,    63,    63,    24,    23,    30,    40,
      52,    52,    41,    41,    21,    22,    25,    62,    62,    52,
      37,    37,    42,    42,    22,    37,    37,    37
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    48,    48,    49,    49,    50,    50,
      50,    50,    51,    51,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    54,    55,    56,    57,
      57,    58,    58,    59,    60,    61,    62,    62,    62,    62,
      62,    62,    63,    63,    63,    63,    63,    63,    63,    64,
      64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     3,     3,     3,     6,
       1,     4,     4,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     5,     5,     4,     1,
       1,    10,     8,     8,     9,     9,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 29 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = NULL;printGST(head);}
#line 1396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 30 "astree.y" /* yacc.c:1646  */
    {}
#line 1402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 32 "astree.y" /* yacc.c:1646  */
    {}
#line 1408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 33 "astree.y" /* yacc.c:1646  */
    {}
#line 1414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 35 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = ASTchangeType(head,(yyvsp[-1].node),INTEGER);
}
#line 1422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 38 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = ASTchangeType(head,(yyvsp[-1].node),STRING);
}
#line 1430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 42 "astree.y" /* yacc.c:1646  */
    {
    head = InstallID(head,NONE,VARIABLE,1,(yyvsp[0].node)->varname);
    (yyval.node) = makeStatementNode(STATEMENT,STATEMENT,(yyvsp[-2].node),(yyvsp[0].node),",");
}
#line 1439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 46 "astree.y" /* yacc.c:1646  */
    {
    head = InstallID(head,NONE,ARRAY_VARIABLE,(yyvsp[-1].node)->val,(yyvsp[-3].node)->varname);
    (yyval.node) = makeStatementNode(STATEMENT,STATEMENT,(yyvsp[-5].node),(yyvsp[-3].node),",");
}
#line 1448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 50 "astree.y" /* yacc.c:1646  */
    {
    head = InstallID(head,NONE,VARIABLE,1,(yyvsp[0].node)->varname);
    (yyval.node) = (yyvsp[0].node);
}
#line 1457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 54 "astree.y" /* yacc.c:1646  */
    {
    head = InstallID(head,NONE,ARRAY_VARIABLE,(yyvsp[-1].node)->val,(yyvsp[-3].node)->varname);
    (yyval.node) = (yyvsp[-3].node);
}
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 60 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    printf("Parsing completed\n");
    print_tree((yyvsp[-1].node));
    printf("\n");
    code_generator(ft,(yyvsp[-1].node),head);
    exit(1);
}
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 68 "astree.y" /* yacc.c:1646  */
    {
        (yyval.node) = (yyvsp[0].node);
        printf("Parsing Completed\n");
        exit(1);
    }
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 75 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = makeStatementNode(STATEMENT,STATEMENT,(yyvsp[-1].node),(yyvsp[0].node),"STATEMENT");
}
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 78 "astree.y" /* yacc.c:1646  */
    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 83 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 86 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 89 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 92 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 95 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 98 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 101 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 104 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 107 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 110 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 114 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = makeStatementNode(STATEMENT,READ,(yyvsp[-2].node),(struct AST_Node *)NULL,"Read");
}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 118 "astree.y" /* yacc.c:1646  */
    {
    	(yyval.node) = makeStatementNode(STATEMENT,WRITE,(yyvsp[-2].node),(struct AST_Node *)NULL,"Write");
}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 121 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-3].node)->type ,t2 = (yyvsp[-1].node)->type;
    if(t1 == STRING && (t2 == PLUS || t2 == MINUS || t2 == MUL || t2 == DIV || t2 == INTEGER)){
        printf("Variable \"%s\" is a string variable assigning expression\n",(yyvsp[-3].node)->varname);
        exit(1);
    }
    if(t1 == INTEGER && t2 == STRING){
        printf("Variable \"%s\" is an integer variable assigning string value\n",(yyvsp[-3].node)->varname);
        exit(1);
    }
	(yyval.node) = makeExpressionNode(EXPRESSION,ASSIGNMENT,'=',(yyvsp[-3].node),(yyvsp[-1].node),"=");
}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 134 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 135 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 137 "astree.y" /* yacc.c:1646  */
    {
    struct AST_Node *temp1 = makeStatementNode(STATEMENT,IF,(yyvsp[-7].node),(yyvsp[-4].node),"IF");
	struct AST_Node *temp2 = makeStatementNode(STATEMENT,ELSE,(yyvsp[-2].node),(struct AST_Node *)NULL,"ELSE");
	(yyval.node) = makeStatementNode(STATEMENT,IF_ELSE,temp1,temp2,"IF_ELSE");
}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 142 "astree.y" /* yacc.c:1646  */
    {
	struct AST_Node *temp1 = makeStatementNode(STATEMENT,IF,(yyvsp[-5].node),(yyvsp[-2].node),"IF");
	(yyval.node) = makeStatementNode(STATEMENT,IF_ELSE,temp1,(struct AST_Node *)NULL,"IF_ELSE");
}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 147 "astree.y" /* yacc.c:1646  */
    {
	 (yyval.node) = makeStatementNode(LOOP,WHILE,(yyvsp[-5].node),(yyvsp[-2].node),"WHILE");
}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 151 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = makeStatementNode(LOOP,REPEAT_UNTIL,(yyvsp[-6].node),(yyvsp[-2].node),"REPEAT_UNTIL");
}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 155 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = makeStatementNode(LOOP,DO_WHILE,(yyvsp[-6].node),(yyvsp[-2].node),"DO_WHILE");
}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 159 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL) && (t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeStatementNode(BOOLEAN,LT,(yyvsp[-2].node),(yyvsp[0].node),"LT");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 168 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL) && (t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeStatementNode(BOOLEAN,LE,(yyvsp[-2].node),(yyvsp[0].node),"LE");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 177 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL) && (t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeStatementNode(BOOLEAN,GT,(yyvsp[-2].node),(yyvsp[0].node),"GT");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 186 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL) && (t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeStatementNode(BOOLEAN,GE,(yyvsp[-2].node),(yyvsp[0].node),"GE");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 195 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL) && (t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeStatementNode(BOOLEAN,NE,(yyvsp[-2].node),(yyvsp[0].node),"NE");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 204 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL) && (t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeStatementNode(BOOLEAN,EQ,(yyvsp[-2].node),(yyvsp[0].node),"EQ");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 215 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL) && (t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeExpressionNode(EXPRESSION,PLUS,'+',(yyvsp[-2].node),(yyvsp[0].node),"+");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 224 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL) && (t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeExpressionNode(EXPRESSION,MINUS,'-',(yyvsp[-2].node),(yyvsp[0].node),"-");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 233 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL) && (t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeExpressionNode(EXPRESSION,MUL,'*',(yyvsp[-2].node),(yyvsp[0].node),"*");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 242 "astree.y" /* yacc.c:1646  */
    {
    int t1 = (yyvsp[-2].node)->type,t2 = (yyvsp[0].node)->type;
    if((t1 == INTEGER || t1 == PLUS || t1 == MINUS || t1 == DIV || t1 == MUL) && (t2 == INTEGER || t2 == PLUS || t2 == MINUS || t2 == DIV || t2 == MUL))
        (yyval.node) = makeExpressionNode(EXPRESSION,DIV,'/',(yyvsp[-2].node),(yyvsp[0].node),"/");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 251 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 254 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 255 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 258 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
    curr = LookUp(head,(yyval.node)->varname);
    if(!curr){
        printf("Variable \"%s\" not declared\n",(yyval.node)->varname);
        exit(1);
    }
    (yyval.node)->type = curr->type;
}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 267 "astree.y" /* yacc.c:1646  */
    {
    curr = LookUp(head,(yyvsp[-3].node)->varname);
    if(!curr){
        printf("Variable \"%s\" not declared\n",(yyvsp[-3].node)->varname);
        exit(1);
    }
    if(curr->type_of_var != ARRAY_VARIABLE){
        printf("Variable \"%s\" not of array type\n",(yyvsp[-3].node)->varname);
        exit(1);
    }
    (yyvsp[-3].node)->type = curr->type;
    (yyval.node) = makeArrVariableNode(ARRAY_VARIABLE,(yyvsp[-3].node)->type,(yyvsp[-3].node),(yyvsp[-1].node),"ARRAY_VARIABLE");
}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1869 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 281 "astree.y" /* yacc.c:1906  */

//-------------------------Auxiliary Functions--------------------------
void yyerror(const char *err){
    printf("yyerror error: %s\n",err);
    return;
}

int main(int argc,char *argv[]){
    head = init_ds(head,keyword);    
    if(argc > 1){
		printf("Generating file as %s\n",argv[1]);
		ft = fopen(argv[1],"w");
		yyparse();
	}
	else{
		printf("Generating file as code.xsm\n");
		ft = fopen("code.xsm","w");
		yyparse();
	}
    return 1;
}
