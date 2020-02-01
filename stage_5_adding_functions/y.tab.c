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
#line 16 "astree.y" /* yacc.c:355  */

    struct AST_Node *node;

#line 198 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 215 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   362

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  184

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

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
      38,    39,     2,     2,    43,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    42,
       2,    46,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
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
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    66,    66,    70,    71,    75,    76,    77,    81,    82,
      84,    85,    87,    88,    90,    91,    93,    94,    95,    99,
     100,   102,   103,   107,   108,   109,   111,   112,   116,   117,
     119,   120,   122,   123,   125,   126,   129,   132,   137,   140,
     143,   146,   149,   152,   155,   158,   161,   164,   168,   172,
     175,   184,   185,   187,   196,   205,   214,   223,   233,   241,
     249,   257,   265,   273,   281,   289,   297,   305,   313,   321,
     324,   325,   328,   337
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_DECL", "_ENDDECL", "_PLUS", "_MINUS",
  "_MUL", "_DIV", "_MOD", "_NUM", "_STRING", "_ID", "_LT", "_LE", "_GT",
  "_GE", "_NE", "_EQ", "_INT", "_STR", "_READ", "_WRITE", "_BEGIN", "_END",
  "_IF", "_THEN", "_ELSE", "_ENDIF", "_WHILE", "_DO", "_ENDWHILE",
  "_REPEAT", "_UNTIL", "_BREAK", "_CONTINUE", "_BREAKPOINT", "_MAIN",
  "'('", "')'", "'{'", "'}'", "';'", "','", "'['", "']'", "'='", "$accept",
  "MainBlock", "Body", "Program", "GDeclBlock", "GDeclList", "GDecl",
  "GIdList", "GId", "FnDefBlock", "FnDef", "ParamList", "Param",
  "LDeclBlock", "LDeclList", "LDecl", "IdList", "Slist", "stmt",
  "Inputstmt", "Outputstmt", "Assgstmt", "stringExp", "Ifstmt",
  "Whilestmt", "RepeatUntil", "DoWhile", "expr", "id", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,    40,    41,
     123,   125,    59,    44,    91,    93,    61
};
# endif

#define YYPACT_NINF -99

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-99)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,     2,   -30,   -99,    14,    20,   -99,    47,    47,    54,
     -99,    23,   -99,    -9,    70,   -99,    20,   -99,   -29,    48,
     -99,    92,   -99,   -99,   -10,    28,    65,   -99,   -99,   102,
      78,   -99,    47,   -99,    68,   102,   102,   101,   136,    17,
     -99,    91,   -99,   147,    50,    61,   -99,   -99,   -99,   102,
     -99,    77,   139,   140,   157,   -99,   -99,   159,   159,    79,
     -99,   221,   158,   147,   147,   -99,   131,   133,   -99,   -99,
     120,   150,   162,   -99,   166,   167,   168,   169,   156,   165,
     170,   237,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     172,   -99,   139,   139,   -99,   207,   -99,    82,   208,     0,
      82,    82,   288,   288,   -99,   -99,   -99,   -99,   -99,     0,
     180,   184,   -99,   -99,    82,    62,   -99,   187,   -99,   189,
     320,    18,   110,   160,   181,   193,   -99,   -99,   124,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
     -99,   197,   198,   215,   214,   218,   219,   -99,   -99,   103,
     103,   -99,   -99,   -99,   334,   334,   339,   339,   353,   353,
     -99,   -99,   288,   288,   210,   216,   202,   253,    82,    82,
     288,   222,   226,   138,   152,   269,   -99,   -99,   228,   234,
     235,   -99,   -99,   -99
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     7,     0,     0,     9,     0,     0,     0,
      11,     0,     1,     0,     0,     6,     0,    20,    16,     0,
      15,     0,     8,    10,     0,     0,     0,     5,    19,    25,
       0,    12,     0,    13,     0,    25,    25,     0,     0,     0,
      24,     0,    14,     0,     0,     0,    26,    27,    18,     0,
      17,     0,     0,     0,     0,    23,    29,     0,     0,     0,
      31,     0,     0,     0,     0,    35,     0,     0,    28,    30,
      72,     0,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    38,    39,    40,    41,    42,    43,    44,
       0,     2,     0,     0,    32,     0,    33,     0,     0,     0,
       0,     0,     0,     0,    45,    46,    47,     3,    36,     0,
       0,     0,    34,    70,     0,     0,    71,     0,    52,     0,
      51,     0,     0,     0,     0,     0,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,     0,     0,     0,    50,    69,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    55,     0,     0,
       0,    57,    56,    53
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,     3,    86,   -99,   -99,   -99,   251,   255,   247,   -99,
     264,   148,   243,   123,   -99,   227,   238,   -98,   -80,   -99,
     -99,   -99,   186,   -99,   -99,   -99,   -99,   -84,   -61
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,    62,     4,     5,     9,    10,    19,    20,    16,
      17,    39,    40,    52,    59,    60,    66,    81,    82,    83,
      84,    85,   119,    86,    87,    88,    89,   120,   116
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      90,   108,     1,    25,   123,   124,     6,    11,    15,    29,
     113,   118,    70,   115,    12,    30,   121,   122,     2,    27,
      90,     7,     8,   129,   130,   131,   132,   133,    11,    34,
     128,   134,   135,   136,   137,   138,   139,   117,   114,    13,
      14,    90,    90,   108,   108,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,    48,   143,    22,    18,
      49,    24,    90,    90,   166,   167,    35,   129,   130,   131,
     132,   133,   175,     7,     8,   134,   135,   136,   137,   138,
     139,    56,    26,    68,   173,   174,   108,   108,    41,    53,
      31,    32,   113,    49,    70,   108,    57,    58,    57,    58,
      54,    90,    90,    36,    49,    90,    90,   140,    43,    90,
     131,   132,   133,    46,    90,   129,   130,   131,   132,   133,
     114,    37,    38,   134,   135,   136,   137,   138,   139,   129,
     130,   131,   132,   133,    33,    32,    50,   134,   135,   136,
     137,   138,   139,   129,   130,   131,   132,   133,    47,   144,
      51,   134,   135,   136,   137,   138,   139,   129,   130,   131,
     132,   133,    61,   148,    97,   134,   135,   136,   137,   138,
     139,    65,    70,    94,    95,    96,    95,   178,   110,   111,
      63,    71,    72,    44,    45,    74,    92,    93,    98,    75,
      76,   179,    77,    70,    78,    79,    80,    64,   104,    91,
      99,   145,    71,    72,   100,   101,    74,   105,   102,   103,
      75,    76,   106,    77,    70,    78,    79,    80,   109,   112,
      70,   126,   146,    71,    72,   127,   141,    74,   142,   170,
     171,    75,    76,    70,    77,   147,    78,    79,    80,   160,
     161,   162,    71,    72,   163,    73,    74,   164,   168,    70,
      75,    76,   165,    77,   169,    78,    79,    80,    71,    72,
      23,   107,    74,    21,   176,    70,    75,    76,   177,    77,
     181,    78,    79,    80,    71,    72,   182,   183,    74,    42,
      28,    70,    75,    76,   172,    77,    69,    78,    79,    80,
      71,    72,    55,     0,    74,   125,    67,   180,    75,    76,
      70,    77,     0,    78,    79,    80,     0,     0,     0,    71,
      72,     0,     0,    74,     0,     0,     0,    75,    76,     0,
      77,     0,    78,    79,    80,   129,   130,   131,   132,   133,
       0,     0,     0,   134,   135,   136,   137,   138,   139,   129,
     130,   131,   132,   133,   129,   130,   131,   132,   133,   136,
     137,   138,   139,     0,     0,     0,   138,   139,   129,   130,
     131,   132,   133
};

static const yytype_int16 yycheck[] =
{
      61,    81,     3,    12,   102,   103,     4,    37,     5,    38,
      10,    11,    12,    97,     0,    44,   100,   101,    19,    16,
      81,    19,    20,     5,     6,     7,     8,     9,    37,    39,
     114,    13,    14,    15,    16,    17,    18,    98,    38,    19,
      20,   102,   103,   123,   124,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,    39,    39,     4,    12,
      43,    38,   123,   124,   162,   163,    38,     5,     6,     7,
       8,     9,   170,    19,    20,    13,    14,    15,    16,    17,
      18,     4,    12,     4,   168,   169,   166,   167,    10,    39,
      42,    43,    10,    43,    12,   175,    19,    20,    19,    20,
      39,   162,   163,    38,    43,   166,   167,    45,    40,   170,
       7,     8,     9,    12,   175,     5,     6,     7,     8,     9,
      38,    19,    20,    13,    14,    15,    16,    17,    18,     5,
       6,     7,     8,     9,    42,    43,    45,    13,    14,    15,
      16,    17,    18,     5,     6,     7,     8,     9,    12,    39,
       3,    13,    14,    15,    16,    17,    18,     5,     6,     7,
       8,     9,    23,    39,    44,    13,    14,    15,    16,    17,
      18,    12,    12,    42,    43,    42,    43,    39,    92,    93,
      40,    21,    22,    35,    36,    25,    63,    64,    38,    29,
      30,    39,    32,    12,    34,    35,    36,    40,    42,    41,
      38,    41,    21,    22,    38,    38,    25,    42,    40,    40,
      29,    30,    42,    32,    12,    34,    35,    36,    46,    12,
      12,    41,    41,    21,    22,    41,    39,    25,    39,    27,
      28,    29,    30,    12,    32,    42,    34,    35,    36,    42,
      42,    26,    21,    22,    30,    24,    25,    29,    38,    12,
      29,    30,    33,    32,    38,    34,    35,    36,    21,    22,
       9,    24,    25,     8,    42,    12,    29,    30,    42,    32,
      42,    34,    35,    36,    21,    22,    42,    42,    25,    32,
      16,    12,    29,    30,    31,    32,    59,    34,    35,    36,
      21,    22,    49,    -1,    25,   109,    58,    28,    29,    30,
      12,    32,    -1,    34,    35,    36,    -1,    -1,    -1,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,     5,
       6,     7,     8,     9,     5,     6,     7,     8,     9,    15,
      16,    17,    18,    -1,    -1,    -1,    17,    18,     5,     6,
       7,     8,     9
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    19,    48,    50,    51,     4,    19,    20,    52,
      53,    37,     0,    19,    20,    48,    56,    57,    12,    54,
      55,    54,     4,    53,    38,    12,    12,    48,    57,    38,
      44,    42,    43,    42,    39,    38,    38,    19,    20,    58,
      59,    10,    55,    40,    58,    58,    12,    12,    39,    43,
      45,     3,    60,    39,    39,    59,     4,    19,    20,    61,
      62,    23,    49,    40,    40,    12,    63,    63,     4,    62,
      12,    21,    22,    24,    25,    29,    30,    32,    34,    35,
      36,    64,    65,    66,    67,    68,    70,    71,    72,    73,
      75,    41,    60,    60,    42,    43,    42,    44,    38,    38,
      38,    38,    40,    40,    42,    42,    42,    24,    65,    46,
      49,    49,    12,    10,    38,    74,    75,    75,    11,    69,
      74,    74,    74,    64,    64,    69,    41,    41,    74,     5,
       6,     7,     8,     9,    13,    14,    15,    16,    17,    18,
      45,    39,    39,    39,    39,    41,    41,    42,    39,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      42,    42,    26,    30,    29,    33,    64,    64,    38,    38,
      27,    28,    31,    74,    74,    64,    42,    42,    39,    39,
      28,    42,    42,    42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    50,    51,    51,
      52,    52,    53,    53,    54,    54,    55,    55,    55,    56,
      56,    57,    57,    58,    58,    58,    59,    59,    60,    60,
      61,    61,    62,    62,    63,    63,    64,    64,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    66,    67,
      68,    69,    69,    70,    70,    71,    72,    73,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     8,     3,     2,     3,     2,     1,     3,     2,
       2,     1,     3,     3,     3,     1,     1,     4,     4,     2,
       1,     9,     9,     3,     1,     0,     2,     2,     3,     2,
       2,     1,     3,     3,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     5,     5,
       4,     1,     1,    10,     8,     8,     9,     9,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     4
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
        case 36:
#line 129 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = makeStatementNode(STATEMENT,STATEMENT,(yyvsp[-1].node),(yyvsp[0].node),"STATEMENT");
}
#line 1450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 132 "astree.y" /* yacc.c:1646  */
    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 1458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 137 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 140 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 143 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 146 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 149 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 152 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 155 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 158 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 161 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 164 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 168 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = makeStatementNode(STATEMENT,READ,(yyvsp[-2].node),(struct AST_Node *)NULL,"Read");
}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 172 "astree.y" /* yacc.c:1646  */
    {
    	(yyval.node) = makeStatementNode(STATEMENT,WRITE,(yyvsp[-2].node),(struct AST_Node *)NULL,"Write");
}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 175 "astree.y" /* yacc.c:1646  */
    {
    if((typeCheckExp((yyvsp[-3].node)) && typeCheckExp((yyvsp[-1].node))) || (typeCheckStr((yyvsp[-3].node)) && typeCheckStr((yyvsp[-1].node))))
	    (yyval.node) = makeExpressionNode(EXPRESSION,ASSIGNMENT,'=',(yyvsp[-3].node),(yyvsp[-1].node),"=");
    else{
        printf("Invalid assignment to \"%s\"\n",(yyvsp[-3].node)->varname);
        exit(1);
    }
}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 184 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 185 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 187 "astree.y" /* yacc.c:1646  */
    {
    if(!typeCheckBool((yyvsp[-7].node))){
        printf("Invalid boolean statement\n");
        exit(1);
    }
    struct AST_Node *temp1 = makeStatementNode(STATEMENT,IF,(yyvsp[-7].node),(yyvsp[-4].node),"IF");
	struct AST_Node *temp2 = makeStatementNode(STATEMENT,ELSE,(yyvsp[-2].node),(struct AST_Node *)NULL,"ELSE");
	(yyval.node) = makeStatementNode(STATEMENT,IF_ELSE,temp1,temp2,"IF_ELSE");
}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 196 "astree.y" /* yacc.c:1646  */
    {
    if(!typeCheckBool((yyvsp[-5].node))){
        printf("Invalid boolean statement\n");
        exit(1);
    }
	struct AST_Node *temp1 = makeStatementNode(STATEMENT,IF,(yyvsp[-5].node),(yyvsp[-2].node),"IF");
	(yyval.node) = makeStatementNode(STATEMENT,IF_ELSE,temp1,(struct AST_Node *)NULL,"IF_ELSE");
}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 205 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckBool((yyvsp[-5].node)))
	    (yyval.node) = makeStatementNode(LOOP,WHILE,(yyvsp[-5].node),(yyvsp[-2].node),"WHILE");
    else{
        printf("Invalid bool statement\n");
        exit(1);
    }
}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 214 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckBool((yyvsp[-2].node)))
        (yyval.node) = makeStatementNode(LOOP,REPEAT_UNTIL,(yyvsp[-6].node),(yyvsp[-2].node),"REPEAT_UNTIL");
    else{
        printf("Invalid bool statement\n");
        exit(1);
    }
}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 223 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckBool((yyvsp[-2].node)))
        (yyval.node) = makeStatementNode(LOOP,DO_WHILE,(yyvsp[-6].node),(yyvsp[-2].node),"DO_WHILE");
    else{
        printf("Invalid bool statement\n");
        exit(1);
    }
}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 233 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeExpressionNode(EXPRESSION,PLUS,'+',(yyvsp[-2].node),(yyvsp[0].node),"+");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 241 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeExpressionNode(EXPRESSION,MINUS,'-',(yyvsp[-2].node),(yyvsp[0].node),"-");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 249 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeExpressionNode(EXPRESSION,MUL,'*',(yyvsp[-2].node),(yyvsp[0].node),"*");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 257 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeExpressionNode(EXPRESSION,DIV,'/',(yyvsp[-2].node),(yyvsp[0].node),"/");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 265 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeExpressionNode(EXPRESSION,MOD,'%',(yyvsp[-2].node),(yyvsp[0].node),"%");
    else{
        printf("Invalid operand\n");
        exit(1);
    }
}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 273 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeExpressionNode(EXPRESSION,LT,'#',(yyvsp[-2].node),(yyvsp[0].node),"<");
    else{
        printf("Invalid Operator\n");
        exit(1);
    }
}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 281 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeExpressionNode(EXPRESSION,LE,'#',(yyvsp[-2].node),(yyvsp[0].node),"<=");
    else{
        printf("Invalid Operator\n");
        exit(1);
    }
}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 289 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeExpressionNode(EXPRESSION,GT,'#',(yyvsp[-2].node),(yyvsp[0].node),">");
    else{
        printf("Invalid Operator\n");
        exit(1);
    }
}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 297 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeExpressionNode(EXPRESSION,GE,'#',(yyvsp[-2].node),(yyvsp[0].node),">=");
    else{
        printf("Invalid Operator\n");
        exit(1);
    }
}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 305 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeExpressionNode(EXPRESSION,NE,'#',(yyvsp[-2].node),(yyvsp[0].node),"!=");
    else{
        printf("Invalid Operator\n");
        exit(1);
    }
}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 313 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeExpressionNode(EXPRESSION,EQ,'#',(yyvsp[-2].node),(yyvsp[0].node),"==");
    else{
        printf("Invalid Operator\n");
        exit(1);
    }
}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 321 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 324 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 325 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 328 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
    curr = GSTLookUp(head,(yyval.node)->varname);
    if(!curr){
        printf("Variable \"%s\" not declared\n",(yyval.node)->varname);
        exit(1);
    }
    (yyval.node)->type = curr->type;
}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 337 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckBool((yyvsp[-1].node))){
        printf("Invalid index\n");
        exit(1);
    }
    curr = GSTLookUp(head,(yyvsp[-3].node)->varname);
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
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1848 "y.tab.c" /* yacc.c:1646  */
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
#line 355 "astree.y" /* yacc.c:1906  */

//-------------------------Auxiliary Functions--------------------------
void yyerror(const char *err){
    printf("**%s at line number %d\n",err,line);
    return;
}

int main(int argc,char *argv[]){
    head = init_ds(head,keyword);
    line = 1;
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
