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
    struct GSTable *gst;
    struct GSTNode *temp1;
    struct LSTable *lst;
    struct LSTNode *temp3;
    struct ParamList *Parserparam;
    struct AST_Node *temp2;
    struct Stack *stack;
    struct StackNode *tstack;
    char *keyword[20] = {"begin", "end", "read", "write", "if", "else", "then", "endif", "while", "do", "endwhile", "repeat", "until", "int", "str", "decl", "enddecl", "break", "continue", "breakpoint"};


#line 87 "y.tab.c" /* yacc.c:339  */

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
    _INT = 268,
    _STR = 269,
    _LT = 270,
    _LE = 271,
    _GT = 272,
    _GE = 273,
    _NE = 274,
    _EQ = 275,
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
    _MAIN = 292,
    _RETURN = 293
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
#define _INT 268
#define _STR 269
#define _LT 270
#define _LE 271
#define _GT 272
#define _GE 273
#define _NE 274
#define _EQ 275
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
#define _RETURN 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "astree.y" /* yacc.c:355  */

    struct AST_Node *node;

#line 207 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 224 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   401

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  188

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

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
      39,    40,     2,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
       2,    47,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
      35,    36,    37,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    93,    98,   106,   124,   142,   163,   164,
     166,   167,   169,   171,   172,   174,   177,   180,   184,   190,
     191,   193,   222,   254,   255,   257,   261,   265,   270,   271,
     273,   275,   278,   284,   288,   294,   295,   299,   302,   307,
     310,   313,   316,   319,   322,   325,   328,   331,   334,   338,
     342,   345,   354,   355,   357,   366,   375,   384,   393,   403,
     411,   419,   427,   435,   443,   451,   459,   467,   475,   483,
     491,   494,   495,   498,   513,   544
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_DECL", "_ENDDECL", "_PLUS", "_MINUS",
  "_MUL", "_DIV", "_MOD", "_NUM", "_STRING", "_ID", "_INT", "_STR", "_LT",
  "_LE", "_GT", "_GE", "_NE", "_EQ", "_READ", "_WRITE", "_BEGIN", "_END",
  "_IF", "_THEN", "_ELSE", "_ENDIF", "_WHILE", "_DO", "_ENDWHILE",
  "_REPEAT", "_UNTIL", "_BREAK", "_CONTINUE", "_BREAKPOINT", "_MAIN",
  "_RETURN", "'('", "')'", "'{'", "'}'", "';'", "','", "'['", "']'", "'='",
  "$accept", "MainBlock", "Body", "Program", "GDeclBlock", "GDeclList",
  "GDecl", "GIdList", "GId", "FnDefBlock", "FnDef", "ParamList", "Param",
  "LDeclBlock", "LDeclList", "LDecl", "IdList", "ArgList", "Type", "Slist",
  "stmt", "Inputstmt", "Outputstmt", "Assgstmt", "stringExp", "Ifstmt",
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,    40,
      41,   123,   125,    59,    44,    91,    93,    61
};
# endif

#define YYPACT_NINF -95

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-95)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,    69,   -26,   -95,    14,    98,   -95,   -95,   -95,    88,
     -95,    20,   -12,   -95,   -26,   -95,    98,   -95,    22,   -95,
     -95,   -16,    76,   -95,     3,   -95,   -95,    31,    -1,    71,
     -95,    20,    43,    53,   -95,    51,   -95,   136,    60,   -95,
     153,   116,    73,   -95,   108,   -95,   -95,    90,   137,   153,
     117,   -95,   -95,    94,   -95,   149,   236,   120,   137,   153,
     -95,   -95,   -95,   103,    24,   125,   126,   132,   133,   122,
     146,   130,   131,   145,    -6,   255,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   142,   -95,   148,   137,   -95,   179,
      -6,    -2,   186,    -6,    -2,    -2,   328,   328,   -95,   -95,
     -95,   -95,   -95,    -2,   156,   360,   -95,    -6,   -95,    -6,
     -95,   158,   -95,   105,   -95,    70,   162,   163,   119,   135,
     204,   220,   161,   180,    -2,    -2,    -2,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,   164,   170,   -95,   -95,    -6,
     -95,   171,   172,   198,   175,   199,   173,   -95,   -95,    41,
      41,   -95,   -95,   -95,   365,   365,   381,   381,   124,   124,
     206,   -95,   -95,   -95,   -95,   328,   328,   188,   192,   -95,
     274,   293,    -2,    -2,   328,   194,   201,   177,   203,   309,
     -95,   -95,   208,   210,   216,   -95,   -95,   -95
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     7,     0,     0,     9,    35,    36,     0,
      11,     0,     0,     1,    35,     6,     0,    20,     0,     8,
      10,    15,     0,    14,     0,     5,    19,     0,     0,     0,
      12,     0,     0,     0,    18,     0,    24,     0,     0,    13,
       0,     0,     0,    17,     0,    25,    16,     0,     0,     0,
       0,    23,    27,     0,    29,     0,     0,     0,     0,     0,
      26,    28,    32,     0,    73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,    39,    40,    41,
      42,    43,    44,    45,     0,     2,     0,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,    47,
      48,    71,    53,     0,     0,    52,    72,     0,    37,     0,
      22,     0,    31,     0,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    75,     0,
      74,     0,     0,     0,     0,     0,     0,    70,     4,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
       0,    51,    33,    49,    50,     0,     0,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,     0,     0,     0,    58,    57,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -95,    10,   -49,   -95,   -95,   -95,   226,   -95,   229,   -95,
     231,   230,   225,   -14,   -95,   211,   -95,   -95,    15,   -94,
     -74,   -95,   -95,   -95,   -65,   -95,   -95,   -95,   -95,   -73,
     -56
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,    57,     4,     5,     9,    10,    22,    23,    16,
      17,    35,    36,    48,    53,    54,    63,   113,    37,    75,
      76,    77,    78,    79,   104,    80,    81,    82,    83,   105,
     106
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      84,   108,   120,   121,   101,   102,    64,     1,   101,    86,
      64,    12,     7,     8,    13,    15,    11,     2,   115,    84,
      18,   118,   119,    28,    11,   114,    25,    24,   117,    29,
     122,    18,    21,   103,    27,    58,   116,   103,   111,    34,
      84,    84,   135,    32,   136,    87,   108,   108,   126,   127,
     128,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,    55,    90,    84,    84,     7,     8,    55,    91,
      33,   170,   171,     6,   162,   124,   125,   126,   127,   128,
     179,    38,     7,     8,    40,   129,   130,   131,   132,   133,
     134,    43,    19,    41,    52,    44,   108,   108,    60,   177,
     178,     7,     8,     7,     8,   108,    46,     7,     8,    84,
      84,    14,     8,    50,    84,    84,   140,    44,    84,    30,
      31,     7,     8,    84,   124,   125,   126,   127,   128,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     124,   125,   126,   127,   128,   138,    88,    89,    45,   139,
     129,   130,   131,   132,   133,   134,    47,    49,    59,   143,
      56,    62,    85,    96,    92,    93,   124,   125,   126,   127,
     128,    94,    95,    98,    99,   144,   129,   130,   131,   132,
     133,   134,   124,   125,   126,   127,   128,    97,   100,   109,
     110,   112,   129,   130,   131,   132,   133,   134,    64,   123,
     137,   147,   141,   142,   148,   166,   168,   160,   124,   125,
     126,   127,   128,   161,   163,   164,    64,   182,   129,   130,
     131,   132,   133,   134,   165,    65,    66,   172,   167,    67,
     169,   173,    64,    68,    69,    20,    70,   180,    71,    72,
      73,    65,    66,   183,   181,    67,   145,    26,    64,    68,
      69,   185,    70,   186,    71,    72,    73,    65,    66,   187,
      39,    67,   146,    42,    61,    68,    69,    64,    70,    51,
      71,    72,    73,     0,    74,     0,    65,    66,     0,     0,
      67,     0,     0,     0,    68,    69,    64,    70,     0,    71,
      72,    73,     0,   107,     0,    65,    66,     0,     0,    67,
       0,   174,   175,    68,    69,    64,    70,     0,    71,    72,
      73,     0,     0,     0,    65,    66,     0,     0,    67,     0,
       0,    64,    68,    69,   176,    70,     0,    71,    72,    73,
      65,    66,     0,     0,    67,     0,     0,   184,    68,    69,
      64,    70,     0,    71,    72,    73,     0,     0,     0,    65,
      66,     0,     0,    67,     0,     0,     0,    68,    69,     0,
      70,     0,    71,    72,    73,   124,   125,   126,   127,   128,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,     0,   131,   132,   133,   134,   124,   125,   126,   127,
     128,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,   134
};

static const yytype_int16 yycheck[] =
{
      56,    75,    96,    97,    10,    11,    12,     3,    10,    58,
      12,    37,    13,    14,     0,     5,     1,    13,    91,    75,
       5,    94,    95,    39,     9,    90,    16,    39,    93,    45,
     103,    16,    12,    39,    12,    49,    92,    39,    87,    40,
      96,    97,   107,    40,   109,    59,   120,   121,     7,     8,
       9,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,    47,    39,   120,   121,    13,    14,    53,    45,
      39,   165,   166,     4,   139,     5,     6,     7,     8,     9,
     174,    10,    13,    14,    41,    15,    16,    17,    18,    19,
      20,    40,     4,    40,     4,    44,   170,   171,     4,   172,
     173,    13,    14,    13,    14,   179,    46,    13,    14,   165,
     166,    13,    14,    40,   170,   171,    46,    44,   174,    43,
      44,    13,    14,   179,     5,     6,     7,     8,     9,     5,
       6,     7,     8,     9,    15,    16,    17,    18,    19,    20,
       5,     6,     7,     8,     9,    40,    43,    44,    12,    44,
      15,    16,    17,    18,    19,    20,     3,    41,    41,    40,
      23,    12,    42,    41,    39,    39,     5,     6,     7,     8,
       9,    39,    39,    43,    43,    40,    15,    16,    17,    18,
      19,    20,     5,     6,     7,     8,     9,    41,    43,    47,
      42,    12,    15,    16,    17,    18,    19,    20,    12,    43,
      42,    40,    40,    40,    24,    30,    33,    43,     5,     6,
       7,     8,     9,    43,    43,    43,    12,    40,    15,    16,
      17,    18,    19,    20,    26,    21,    22,    39,    29,    25,
      24,    39,    12,    29,    30,     9,    32,    43,    34,    35,
      36,    21,    22,    40,    43,    25,    42,    16,    12,    29,
      30,    43,    32,    43,    34,    35,    36,    21,    22,    43,
      31,    25,    42,    33,    53,    29,    30,    12,    32,    44,
      34,    35,    36,    -1,    38,    -1,    21,    22,    -1,    -1,
      25,    -1,    -1,    -1,    29,    30,    12,    32,    -1,    34,
      35,    36,    -1,    38,    -1,    21,    22,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    12,    32,    -1,    34,    35,
      36,    -1,    -1,    -1,    21,    22,    -1,    -1,    25,    -1,
      -1,    12,    29,    30,    31,    32,    -1,    34,    35,    36,
      21,    22,    -1,    -1,    25,    -1,    -1,    28,    29,    30,
      12,    32,    -1,    34,    35,    36,    -1,    -1,    -1,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,     5,     6,     7,     8,     9,
       5,     6,     7,     8,     9,    15,    16,    17,    18,    19,
      20,    -1,    17,    18,    19,    20,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    13,    49,    51,    52,     4,    13,    14,    53,
      54,    66,    37,     0,    13,    49,    57,    58,    66,     4,
      54,    12,    55,    56,    39,    49,    58,    12,    39,    45,
      43,    44,    40,    39,    40,    59,    60,    66,    10,    56,
      41,    40,    59,    40,    44,    12,    46,     3,    61,    41,
      40,    60,     4,    62,    63,    66,    23,    50,    61,    41,
       4,    63,    12,    64,    12,    21,    22,    25,    29,    30,
      32,    34,    35,    36,    38,    67,    68,    69,    70,    71,
      73,    74,    75,    76,    78,    42,    50,    61,    43,    44,
      39,    45,    39,    39,    39,    39,    41,    41,    43,    43,
      43,    10,    11,    39,    72,    77,    78,    38,    68,    47,
      42,    50,    12,    65,    72,    77,    78,    72,    77,    77,
      67,    67,    77,    43,     5,     6,     7,     8,     9,    15,
      16,    17,    18,    19,    20,    72,    72,    42,    40,    44,
      46,    40,    40,    40,    40,    42,    42,    40,    24,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      43,    43,    72,    43,    43,    26,    30,    29,    33,    24,
      67,    67,    39,    39,    27,    28,    31,    77,    77,    67,
      43,    43,    40,    40,    28,    43,    43,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    51,    52,    52,
      53,    53,    54,    55,    55,    56,    56,    56,    56,    57,
      57,    58,    58,    59,    59,    60,    61,    61,    62,    62,
      63,    64,    64,    65,    65,    66,    66,    67,    67,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    69,
      70,    71,    72,    72,    73,    73,    74,    75,    76,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    78,    78,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     8,     6,     5,     3,     2,     1,     3,     2,
       2,     1,     3,     3,     1,     1,     4,     4,     3,     2,
       1,     9,     8,     3,     1,     2,     3,     2,     2,     1,
       3,     3,     1,     3,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     5,
       5,     4,     1,     1,    10,     8,     8,     9,     9,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     4,     4
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
#line 73 "astree.y" /* yacc.c:1646  */
    {
    if(RET_TYPE != INTEGER){
        printf("line %d :Return type does not match\n",line);
        exit(1);
    }
    RET_TYPE = -1;
    gst = GSTInstall(gst,INTEGER,FUNCTION,"main",1,NULL,NULL);
    temp1 = GSTLookUp(gst,"main");
    temp1->lst = lst;
    lst = LSTDelete(lst);
    (yyval.node) = makeTreeNode(FUNCTION,INTEGER,"main",-1,-1,(yyvsp[-1].node),NULL,temp1,"main");
    printGST(gst);
    ASTPrintTree((yyval.node));
    printf("\n");
    stack = push(stack,(yyval.node),temp1->lst);
    (yyval.node) = ASTDelete((yyval.node));
}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 93 "astree.y" /* yacc.c:1646  */
    {
    RET_TYPE = (yyvsp[-2].node)->type;
    temp2 = makeTreeNode(RETURN,RETURN,NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"RETURN");
    (yyval.node) = makeTreeNode(STATEMENT,STATEMENT,NULL,-1,-1,(yyvsp[-4].node),temp2,NULL,"STATEMENT");
}
#line 1493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 98 "astree.y" /* yacc.c:1646  */
    {
    RET_TYPE = (yyvsp[-2].node)->type;
    temp2 = makeTreeNode(RETURN,RETURN,NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"RETURN");
    (yyval.node) = makeTreeNode(STATEMENT,STATEMENT,NULL,-1,-1,NULL,temp2,NULL,"STATEMENT");
}
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 106 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = NULL;
    printf("Parsing Completed\n");
    generateHeader(ft);
    int i = 0;
    while(StackGetSize(stack)){
        tstack = top(stack);
        stack = pop(stack);
        if(i == 0){
            temp1 = GSTLookUp(gst,"main");
            fprintf(ft,"CALL _F%d\n",temp1->binding_addr);
            generateExit(ft);
            i = 1;
        }
        code_generator(ft,tstack->ast,gst,tstack->lst);
    }
    exit(1);
}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 124 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = NULL;
    printf("Parsing Completed\n");
    generateHeader(ft);
    int i = 0;
    while(StackGetSize(stack)){
        tstack = top(stack);
        stack = pop(stack);
        if(i == 0){
            temp1 = GSTLookUp(gst,"main");
            fprintf(ft,"CALL _F%d\n",temp1->binding_addr);
            generateExit(ft);
            i = 1;
        }
        code_generator(ft,tstack->ast,gst,tstack->lst);
    }
    exit(1);
}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 142 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = NULL;
    printf("Parsing Completed\n");
    generateHeader(ft);
    int i = 0;
    while(StackGetSize(stack)){
        tstack = top(stack);
        stack = pop(stack);
        if(i == 0){
            temp1 = GSTLookUp(gst,"main");
            fprintf(ft,"CALL _F%d\n",temp1->binding_addr);
            generateExit(ft);
            i = 1;
        }
        code_generator(ft,tstack->ast,gst,tstack->lst);
    }
    exit(1);
}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 163 "astree.y" /* yacc.c:1646  */
    {}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 164 "astree.y" /* yacc.c:1646  */
    {}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 166 "astree.y" /* yacc.c:1646  */
    {}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 167 "astree.y" /* yacc.c:1646  */
    {}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 169 "astree.y" /* yacc.c:1646  */
    {}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 171 "astree.y" /* yacc.c:1646  */
    {}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 172 "astree.y" /* yacc.c:1646  */
    {}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 174 "astree.y" /* yacc.c:1646  */
    {
    gst = GSTInstall(gst,TYPE,VARIABLE,(yyvsp[0].node)->varname,1,NULL,NULL);
}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 177 "astree.y" /* yacc.c:1646  */
    {
    gst = GSTInstall(gst,TYPE,ARRAY_VARIABLE,(yyvsp[-3].node)->varname,(yyvsp[-1].node)->val,NULL,NULL);
}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 180 "astree.y" /* yacc.c:1646  */
    {
    gst = GSTInstall(gst,TYPE,FUNCTION,(yyvsp[-3].node)->varname,1,Parserparam,NULL);
    Parserparam = ParamDelete(Parserparam);
}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 184 "astree.y" /* yacc.c:1646  */
    {
    gst = GSTInstall(gst,TYPE,FUNCTION,(yyvsp[-2].node)->varname,1,NULL,NULL);
}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 190 "astree.y" /* yacc.c:1646  */
    {}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 191 "astree.y" /* yacc.c:1646  */
    {}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 193 "astree.y" /* yacc.c:1646  */
    {
    temp1 = GSTLookUp(gst,(yyvsp[-7].node)->varname);
    if(!temp1){
        printf("line %d :\"%s\" function not declared\n",line,(yyvsp[-7].node)->varname);
        exit(1);
    }
    if((yyvsp[-8].node)->type != temp1->type){
        printf("line %d :Invalid return type for \"%s\"\n",line,(yyvsp[-7].node)->varname);
        exit(1);
    }
    if(!checkParamList(Parserparam,temp1->param)){
        printf("line %d :Number of Formal Arguments does not match with declaration\n",line);
        exit(1);
    }
    if(RET_TYPE != temp1->type){
        printf("line %d :Return type does not match\n",line);
        exit(1);
    }
    RET_TYPE = -1;
    temp1->lst = lst;
    lst = LSTDelete(lst);
    Parserparam = ParamDelete(Parserparam);
    (yyval.node) = makeTreeNode(FUNCTION,INTEGER,(yyvsp[-7].node)->varname,-1,-1,(yyvsp[-1].node),NULL,temp1,"FUNCTION");
    printGST(gst);
    ASTPrintTree((yyval.node));
    printf("\n");
    stack = push(stack,(yyval.node),temp1->lst);
    (yyval.node) = ASTDelete((yyval.node));
}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 222 "astree.y" /* yacc.c:1646  */
    {
    temp1 = GSTLookUp(gst,(yyvsp[-6].node)->varname);
    if(!temp1){
        printf("line %d :\"%s\" function not declared\n",line,(yyvsp[-6].node)->varname);
        exit(1);
    }
    if((yyvsp[-7].node)->type != temp1->type){
        printf("line %d :Invalid return type for \"%s\"\n",line,(yyvsp[-6].node)->varname);
        exit(1);
    }
    if(!checkParamList(Parserparam,temp1->param)){
        printf("line %d :Number of Formal Arguments does not match with declaration\n",line);
        exit(1);
    }
    if(RET_TYPE != temp1->type){
        printf("line %d :Return type does not match\n",line);
        exit(1);
    }
    RET_TYPE = -1;
    temp1->lst = lst;
    lst = LSTDelete(lst);
    Parserparam = ParamDelete(Parserparam);
    (yyval.node) = makeTreeNode(FUNCTION,INTEGER,(yyvsp[-6].node)->varname,-1,-1,(yyvsp[-1].node),NULL,temp1,"FUNCTION");
    printGST(gst);
    ASTPrintTree((yyval.node));
    printf("\n");
    stack = push(stack,(yyval.node),temp1->lst);
    (yyval.node) = ASTDelete((yyval.node));
}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 254 "astree.y" /* yacc.c:1646  */
    {}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 255 "astree.y" /* yacc.c:1646  */
    {}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 257 "astree.y" /* yacc.c:1646  */
    {Parserparam = ParamInsert(Parserparam,(yyvsp[0].node)->varname,TYPE,VARIABLE);}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 261 "astree.y" /* yacc.c:1646  */
    {
    lst = ParamToLSTInstall(lst,Parserparam);
    TYPE = -1;
}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 265 "astree.y" /* yacc.c:1646  */
    {
    lst = ParamToLSTInstall(lst,Parserparam);
    TYPE = -1;
}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 270 "astree.y" /* yacc.c:1646  */
    {}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 271 "astree.y" /* yacc.c:1646  */
    {}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 273 "astree.y" /* yacc.c:1646  */
    {}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 275 "astree.y" /* yacc.c:1646  */
    {
    lst = LSTInstall(lst,(yyvsp[0].node)->varname,TYPE,VARIABLE);
}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 278 "astree.y" /* yacc.c:1646  */
    {
    lst = LSTInstall(lst,(yyvsp[0].node)->varname,TYPE,VARIABLE);
}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 284 "astree.y" /* yacc.c:1646  */
    {
    (yyvsp[-2].node) = insertASTParam((yyvsp[-2].node),(yyvsp[0].node));
    (yyval.node) = (yyvsp[-2].node);
}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 288 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 294 "astree.y" /* yacc.c:1646  */
    {TYPE = INTEGER;(yyval.node) = (yyvsp[0].node);}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 295 "astree.y" /* yacc.c:1646  */
    {TYPE = STRING;(yyval.node) = (yyvsp[0].node);}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 299 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = makeTreeNode(STATEMENT,STATEMENT,NULL,-1,-1,(yyvsp[-1].node),(yyvsp[0].node),NULL,"STATEMENT");
}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 302 "astree.y" /* yacc.c:1646  */
    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 307 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 310 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 313 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 316 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 319 "astree.y" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 322 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 325 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 328 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 331 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 334 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 338 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = makeTreeNode(STATEMENT,READ,NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"Read");
}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 342 "astree.y" /* yacc.c:1646  */
    {
    	(yyval.node) = makeTreeNode(STATEMENT,WRITE,NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"Write");
}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 345 "astree.y" /* yacc.c:1646  */
    {
    if(((typeCheckExp((yyvsp[-3].node)) && typeCheckExp((yyvsp[-1].node))) || (typeCheckStr((yyvsp[-3].node)) && typeCheckStr((yyvsp[-1].node)))) && ((yyvsp[-3].node)->nodetype != FUNCTION))
	    (yyval.node) = makeTreeNode(STATEMENT,ASSIGNMENT,NULL,-1,-1,(yyvsp[-3].node),(yyvsp[-1].node),NULL,"=");
    else{
        printf("line %d :Invalid assignment to \"%s\"\n",line,(yyvsp[-3].node)->varname);
        exit(1);
    }
}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 354 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 355 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 357 "astree.y" /* yacc.c:1646  */
    {
    if(!typeCheckBool((yyvsp[-7].node))){
        printf("Invalid boolean statement\n");
        exit(1);
    }
    struct AST_Node *temp1 = makeTreeNode(STATEMENT,IF,NULL,-1,-1,(yyvsp[-7].node),(yyvsp[-4].node),NULL,"IF");
	struct AST_Node *temp2 = makeTreeNode(STATEMENT,ELSE,NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"ELSE");
	(yyval.node) = makeTreeNode(STATEMENT,IF_ELSE,NULL,-1,-1,temp1,temp2,NULL,"IF_ELSE");
}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 366 "astree.y" /* yacc.c:1646  */
    {
    if(!typeCheckBool((yyvsp[-5].node))){
        printf("line %d :Invalid boolean statement\n",line);
        exit(1);
    }
	struct AST_Node *temp1 = makeTreeNode(STATEMENT,IF,NULL,-1,-1,(yyvsp[-5].node),(yyvsp[-2].node),NULL,"IF");
	(yyval.node) = makeTreeNode(STATEMENT,IF_ELSE,NULL,-1,-1,temp1,NULL,NULL,"IF_ELSE");
}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 375 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckBool((yyvsp[-5].node)))
	    (yyval.node) = makeTreeNode(LOOP,WHILE,NULL,-1,-1,(yyvsp[-5].node),(yyvsp[-2].node),NULL,"WHILE");
    else{
        printf("line %d :Invalid bool statement\n",line);
        exit(1);
    }
}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 384 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckBool((yyvsp[-2].node)))
        (yyval.node) = makeTreeNode(LOOP,REPEAT_UNTIL,NULL,-1,-1,(yyvsp[-6].node),(yyvsp[-2].node),NULL,"REPEAT_UNTIL");
    else{
        printf("line %d :Invalid bool statement\n",line);
        exit(1);
    }
}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 393 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckBool((yyvsp[-2].node)))
        (yyval.node) = makeTreeNode(LOOP,DO_WHILE,NULL,-1,-1,(yyvsp[-6].node),(yyvsp[-2].node),NULL,"DO_WHILE");
    else{
        printf("line %d :Invalid bool statement\n",line);
        exit(1);
    }
}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 403 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,INTEGER,NULL,PLUS,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"+");
    else{
        printf("line %d :Invalid operand\n",line);
        exit(1);
    }
}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 411 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,INTEGER,NULL,MINUS,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"-");
    else{
        printf("line %d :Invalid operand\n",line);
        exit(1);
    }
}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 419 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,INTEGER,NULL,MUL,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"*");
    else{
        printf("line %d :Invalid operand\n",line);
        exit(1);
    }
}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 427 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,INTEGER,NULL,DIV,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"/");
    else{
        printf("line %d :Invalid operand\n",line);
        exit(1);
    }
}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 435 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,INTEGER,NULL,MOD,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"%");
    else{
        printf("line %d :Invalid operand\n",line);
        exit(1);
    }
}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 443 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,BOOLEAN,NULL,LT,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"<");
    else{
        printf("line %d :Invalid Operator\n",line);
        exit(1);
    }
}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 451 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,BOOLEAN,NULL,LE,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"<=");
    else{
        printf("line %d :Invalid Operator\n",line);
        exit(1);
    }
}
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 459 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,BOOLEAN,NULL,GT,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,">");
    else{
        printf("line %d :Invalid Operator\n",line);
        exit(1);
    }
}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 467 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,BOOLEAN,NULL,GE,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,">=");
    else{
        printf("line %d :Invalid Operator\n",line);
        exit(1);
    }
}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 475 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,BOOLEAN,NULL,NE,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"!=");
    else{
        printf("line %d :Invalid Operator\n",line);
        exit(1);
    }
}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 483 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,BOOLEAN,NULL,EQ,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"==");
    else{
        printf("line %d :Invalid Operator\n",line);
        exit(1);
    }
}
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 491 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 494 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 495 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 498 "astree.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
    temp3 = LSTLookUp(lst,(yyvsp[0].node)->varname);
    if(temp3)
        (yyval.node)->type = temp3->type;
    else{
        temp1 = GSTLookUp(gst,(yyvsp[0].node)->varname);
        if(!temp1){
            printf("line %d :Variable \"%s\" not declared\n",line,(yyval.node)->varname);
            exit(1);
        }
        else
            (yyval.node)->type = temp1->type;
    }
}
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 513 "astree.y" /* yacc.c:1646  */
    {
    if((yyvsp[-1].node)->type != INTEGER){
        printf("line %d :Invalid index\n",line);
        exit(1);
    }
    temp3 = LSTLookUp(lst,(yyvsp[-3].node)->varname);
    if(temp3){
        if(temp3->type_of_var != ARRAY_VARIABLE){
            printf("line %d :Variable \"%s\" not of array type\n",line,(yyvsp[-3].node)->varname);
            exit(1);
        }
        (yyvsp[-3].node)->type = temp3->type;
        (yyval.node) = makeTreeNode(ARRAY_VARIABLE,(yyvsp[-3].node)->type,(yyvsp[-3].node)->varname,-1,-1,(yyvsp[-3].node),(yyvsp[-1].node),NULL,"ARRAY_VARIABLE");
    }
    else{
        temp1 = GSTLookUp(gst,(yyvsp[-3].node)->varname);
        if(!temp1)
        {
            printf("line %d :Variable \"%s\" not declared\n",line,(yyvsp[-3].node)->varname);
            exit(1);            
        }
        else{
            if(temp1->type_of_var != ARRAY_VARIABLE){
                printf("line %d :Variable \"%s\" not of array type\n",line,(yyvsp[-3].node)->varname);
                exit(1);
            }
            (yyvsp[-3].node)->type = temp1->type;
            (yyval.node) = makeTreeNode(ARRAY_VARIABLE,(yyvsp[-3].node)->type,(yyvsp[-3].node)->varname,-1,-1,(yyvsp[-3].node),(yyvsp[-1].node),temp1,"ARRAY_VARIABLE");
        }
    }
}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 544 "astree.y" /* yacc.c:1646  */
    {
    temp1 = GSTLookUp(gst,(yyvsp[-3].node)->varname);
    if(!temp1){
        printf("line %d :Function \"%s\" not declared\n",line,(yyvsp[-3].node)->varname);
        exit(1);
    }
    if(temp1->type_of_var != FUNCTION){
        printf("line %d :\"%s\" not a function\n",line,(yyvsp[-3].node)->varname);
        exit(1);
    }
    if(!checkASTParam(temp1->param,(yyvsp[-1].node))){
        printf("line %d :Wrong arguments in \"%s\", does not match with declaration\n",line,(yyvsp[-3].node)->varname);
        exit(1);
    }
    (yyvsp[-3].node)->nodetype = FUNCTION;
    (yyvsp[-3].node)->type = temp1->type;
    (yyvsp[-3].node)->param = (struct AST_Node *)malloc(sizeof(struct AST_Node));
    (yyvsp[-3].node)->param = (yyvsp[-1].node);
    (yyvsp[-1].node) = NULL;
    (yyval.node) = (yyvsp[-3].node);
}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2278 "y.tab.c" /* yacc.c:1646  */
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
#line 566 "astree.y" /* yacc.c:1906  */

//-------------------------Auxiliary Functions--------------------------
void yyerror(const char *err){
    printf("**%s at line number %d\n",err,line);
    return;
}

int main(int argc,char *argv[]){
    gst = init_GSTable();
    lst = init_LSTable();
    Parserparam = init_ParamList();
    stack = init_Stack();
    ADDR = 4096;
    LABEL = 0;
    TYPE = -1;
    RET_TYPE = -1;
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
