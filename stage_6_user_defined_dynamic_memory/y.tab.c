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
    struct GSTNode *gst_node_temp;
    struct LSTable *lst;
    struct LSTNode *lst_node_temp;
    struct ParamList *Parserparam;
    struct AST_Node *ast_node_temp;
    struct Stack *stack;
    struct StackNode *tstack;
    struct FieldList *F;
    struct TypeTableNode *RET_TYPE,*curr_typetableentry;
    char *keyword[20] = {"begin", "end", "read", "write", "if", "else", "then", "endif", "while", "do", "endwhile", "repeat", "until", "int", "str", "decl", "enddecl", "break", "continue", "breakpoint"};

#line 88 "y.tab.c" /* yacc.c:339  */

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
    _TYPE = 260,
    _ENDTYPE = 261,
    _PLUS = 262,
    _MINUS = 263,
    _MUL = 264,
    _DIV = 265,
    _MOD = 266,
    _NUM = 267,
    _STRING = 268,
    _ID = 269,
    _INT = 270,
    _STR = 271,
    _LT = 272,
    _LE = 273,
    _GT = 274,
    _GE = 275,
    _NE = 276,
    _EQ = 277,
    _READ = 278,
    _WRITE = 279,
    _BEGIN = 280,
    _END = 281,
    _IF = 282,
    _THEN = 283,
    _ELSE = 284,
    _ENDIF = 285,
    _WHILE = 286,
    _DO = 287,
    _ENDWHILE = 288,
    _REPEAT = 289,
    _UNTIL = 290,
    _BREAK = 291,
    _CONTINUE = 292,
    _BREAKPOINT = 293,
    _MAIN = 294,
    _RETURN = 295,
    _NULL = 296,
    _FREE = 297,
    _ALLOC = 298,
    _INITIALIZE = 299
  };
#endif
/* Tokens.  */
#define _DECL 258
#define _ENDDECL 259
#define _TYPE 260
#define _ENDTYPE 261
#define _PLUS 262
#define _MINUS 263
#define _MUL 264
#define _DIV 265
#define _MOD 266
#define _NUM 267
#define _STRING 268
#define _ID 269
#define _INT 270
#define _STR 271
#define _LT 272
#define _LE 273
#define _GT 274
#define _GE 275
#define _NE 276
#define _EQ 277
#define _READ 278
#define _WRITE 279
#define _BEGIN 280
#define _END 281
#define _IF 282
#define _THEN 283
#define _ELSE 284
#define _ENDIF 285
#define _WHILE 286
#define _DO 287
#define _ENDWHILE 288
#define _REPEAT 289
#define _UNTIL 290
#define _BREAK 291
#define _CONTINUE 292
#define _BREAKPOINT 293
#define _MAIN 294
#define _RETURN 295
#define _NULL 296
#define _FREE 297
#define _ALLOC 298
#define _INITIALIZE 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "astree.y" /* yacc.c:355  */

    struct AST_Node *node;

#line 220 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 237 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   421

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

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
      45,    46,     2,     2,    50,     2,    54,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    49,
       2,    53,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    98,   103,   110,   129,   148,   170,   171,
     173,   174,   176,   187,   188,   190,   194,   195,   197,   198,
     200,   202,   203,   205,   209,   218,   223,   231,   232,   234,
     265,   299,   300,   302,   309,   310,   312,   313,   315,   317,
     318,   322,   326,   332,   333,   334,   338,   339,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   354,
     369,   371,   380,   392,   400,   410,   411,   413,   422,   431,
     440,   449,   459,   467,   475,   483,   491,   499,   507,   515,
     523,   531,   539,   547,   556,   565,   566,   567,   570,   585,
     616,   637,   656,   660,   671
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_DECL", "_ENDDECL", "_TYPE", "_ENDTYPE",
  "_PLUS", "_MINUS", "_MUL", "_DIV", "_MOD", "_NUM", "_STRING", "_ID",
  "_INT", "_STR", "_LT", "_LE", "_GT", "_GE", "_NE", "_EQ", "_READ",
  "_WRITE", "_BEGIN", "_END", "_IF", "_THEN", "_ELSE", "_ENDIF", "_WHILE",
  "_DO", "_ENDWHILE", "_REPEAT", "_UNTIL", "_BREAK", "_CONTINUE",
  "_BREAKPOINT", "_MAIN", "_RETURN", "_NULL", "_FREE", "_ALLOC",
  "_INITIALIZE", "'('", "')'", "'{'", "'}'", "';'", "','", "'['", "']'",
  "'='", "'.'", "$accept", "MainBlock", "Body", "Program", "TypeDefBlock",
  "TypeDefList", "TypeDef", "FieldDeclList", "FieldDecl", "GDeclBlock",
  "GDeclList", "GDecl", "GIdList", "GId", "FnDefBlock", "FnDef",
  "ParamList", "Param", "LDeclBlock", "LDeclList", "LDecl", "IdList",
  "ArgList", "Type", "Slist", "stmt", "Inputstmt", "Outputstmt",
  "Assgstmt", "stringExp", "Ifstmt", "Whilestmt", "RepeatUntil", "DoWhile",
  "expr", "id", "Field", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,    40,    41,   123,   125,    59,
      44,    91,    93,    61,    46
};
# endif

#define YYPACT_NINF -106

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-106)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,    24,    59,    67,    27,    13,  -106,  -106,    37,    66,
    -106,   117,   239,  -106,  -106,  -106,  -106,  -106,  -106,    62,
    -106,   105,   110,    66,  -106,   117,  -106,   122,    -8,  -106,
     124,  -106,  -106,    52,    93,  -106,   141,  -106,  -106,   143,
    -106,  -106,   151,   155,   192,  -106,   105,   164,   233,  -106,
    -106,    -4,  -106,   200,   163,  -106,   214,   177,    11,  -106,
     239,  -106,  -106,    65,   194,   214,   182,  -106,  -106,   100,
    -106,   222,   261,   190,   194,   214,  -106,  -106,  -106,   135,
     232,   196,   198,   206,   213,   215,   217,   220,   227,   229,
      51,   226,   280,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,   228,   235,  -106,   234,   194,  -106,   273,     2,    61,
     276,   277,    51,    61,    61,   334,   334,  -106,  -106,  -106,
    -106,  -106,    61,   247,   366,  -106,   254,    51,  -106,   111,
     288,  -106,   258,  -106,  -106,    76,  -106,    15,  -106,   262,
     263,    91,   140,   189,   208,   156,   284,    61,    61,    61,
      61,    61,    61,    61,    61,    61,   127,   216,   266,   270,
     272,   282,   283,   285,  -106,  -106,  -106,    51,  -106,   291,
     292,   297,   312,   319,   325,  -106,  -106,   345,   345,  -106,
    -106,  -106,   382,   382,   387,   387,  -106,   403,  -106,   403,
    -106,   336,  -106,   277,   317,  -106,  -106,  -106,  -106,   334,
     334,   322,   324,  -106,   318,   330,   236,   299,    61,    61,
     331,  -106,   334,   332,   333,   172,   188,  -106,   315,  -106,
    -106,   350,   351,   356,  -106,  -106,  -106
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     0,     0,     0,     0,    11,     1,     0,     0,
       7,     0,     0,     9,    10,    17,    45,    43,    44,     0,
      19,     0,     0,    43,     6,     0,    28,     0,     0,    14,
       0,    16,    18,    23,     0,    22,     0,     5,    27,     0,
      12,    13,     0,     0,     0,    20,     0,     0,     0,    15,
      26,     0,    32,     0,     0,    21,     0,     0,     0,    25,
       0,    33,    24,     0,     0,     0,     0,    31,    35,     0,
      37,     0,     0,     0,     0,     0,    34,    36,    40,     0,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,    48,    49,    50,    51,    52,    53,
      54,     0,    92,     2,     0,     0,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    57,
      86,    66,     0,     0,    65,    87,     0,     0,    46,     0,
       0,    30,     0,    39,    91,     0,    42,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,    29,    90,     0,    89,     0,
       0,     0,     0,     0,     0,    85,     4,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    84,    81,    83,    82,
      58,     0,    64,     0,     0,    63,    41,    59,    60,     0,
       0,     0,     0,     3,     0,     0,     0,     0,     0,     0,
       0,    61,     0,     0,     0,     0,     0,    62,     0,    68,
      69,     0,     0,     0,    71,    70,    67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -106,     6,   -45,  -106,  -106,  -106,   401,  -106,   379,  -106,
    -106,   396,  -106,   370,  -106,   392,   371,   358,    55,  -106,
     352,  -106,  -106,    -7,  -105,   -89,  -106,  -106,  -106,   -99,
    -106,  -106,  -106,  -106,   -64,   -72,  -106
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    73,     2,     3,     5,     6,    28,    29,    11,
      19,    20,    34,    35,    25,    26,    51,    52,    64,    69,
      70,    79,   135,    53,    92,    93,    94,    95,    96,   123,
      97,    98,    99,   100,   124,   125,   102
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     101,    21,     1,   128,    27,    30,    16,    17,    18,   136,
     143,   144,    21,   140,   120,   121,    80,    24,    27,    13,
     101,    30,   147,   148,   149,   150,   151,     4,   159,   104,
     163,    37,   152,   153,   154,   155,   156,   157,     4,   139,
      40,    15,    59,   101,   101,   137,    60,   122,   134,   141,
     142,    16,    17,    18,   128,   128,    71,    66,   145,     7,
     132,    60,    71,   120,   121,    80,    31,   168,   196,    68,
       8,   101,   101,   120,    12,    80,    16,    17,    18,    16,
      17,    18,     9,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   187,   189,   206,   207,   122,    43,   147,   148,
     149,   150,   151,    44,    76,    22,   122,   218,   152,   153,
     154,   155,   156,   157,    16,    17,    18,   128,   128,    33,
      74,   204,   166,   120,   121,    80,   167,   101,   101,   128,
     105,    16,    23,    18,   101,   101,    39,   171,    42,   120,
     101,    80,    45,    46,   215,   216,   101,   147,   148,   149,
     150,   151,   160,   161,   162,    36,   122,   152,   153,   154,
     155,   156,   157,   147,   148,   149,   150,   151,   186,    16,
      17,    18,   122,   152,   153,   154,   155,   156,   157,   147,
     148,   149,   150,   151,   106,   107,   172,    47,    48,   152,
     153,   154,   155,   156,   157,   147,   148,   149,   150,   151,
      49,    50,   175,    80,    54,   152,   153,   154,   155,   156,
     157,    56,    81,    82,    61,    62,    83,    63,   221,    72,
      84,    85,    80,    86,    65,    87,    88,    89,   120,    75,
      80,    81,    82,    91,   222,    83,    78,   173,   103,    84,
      85,   111,    86,   112,    87,    88,    89,    16,    17,    18,
      80,   113,    91,    16,    17,    18,   174,   188,   114,    81,
      82,   122,   115,    83,   116,   212,   213,    84,    85,   117,
      86,   126,    87,    88,    89,    80,   118,   108,   119,    57,
      91,   129,   131,   109,    81,    82,   110,   133,    83,   130,
     138,    80,    84,    85,    80,    86,   146,    87,    88,    89,
     158,    90,   164,    81,    82,    91,   165,    83,   169,   170,
     176,    84,    85,    80,    86,   190,    87,    88,    89,   191,
     127,   192,    81,    82,    91,   199,    83,   193,   194,    80,
      84,    85,   214,    86,   195,    87,    88,    89,    81,    82,
     197,   198,    83,    91,   200,   223,    84,    85,    80,    86,
     201,    87,    88,    89,   149,   150,   151,    81,    82,    91,
     202,    83,   203,   205,   210,    84,    85,   208,    86,   209,
      87,    88,    89,   147,   148,   149,   150,   151,    91,   211,
     217,   219,   220,   152,   153,   154,   155,   156,   157,   147,
     148,   149,   150,   151,   147,   148,   149,   150,   151,   224,
     225,   154,   155,   156,   157,   226,    14,    41,   156,   157,
     147,   148,   149,   150,   151,    32,    55,    38,    67,    58,
       0,    77
};

static const yytype_int16 yycheck[] =
{
      72,     8,     5,    92,    11,    12,    14,    15,    16,   108,
     115,   116,    19,   112,    12,    13,    14,    11,    25,     6,
      92,    28,     7,     8,     9,    10,    11,    14,   127,    74,
     129,    25,    17,    18,    19,    20,    21,    22,    14,   111,
      48,     4,    46,   115,   116,   109,    50,    45,    46,   113,
     114,    14,    15,    16,   143,   144,    63,    46,   122,     0,
     105,    50,    69,    12,    13,    14,     4,    52,   167,     4,
       3,   143,   144,    12,    47,    14,    14,    15,    16,    14,
      15,    16,    15,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   199,   200,    45,    45,     7,     8,
       9,    10,    11,    51,     4,    39,    45,   212,    17,    18,
      19,    20,    21,    22,    14,    15,    16,   206,   207,    14,
      65,   193,    46,    12,    13,    14,    50,   199,   200,   218,
      75,    14,    15,    16,   206,   207,    14,    46,    14,    12,
     212,    14,    49,    50,   208,   209,   218,     7,     8,     9,
      10,    11,    41,    42,    43,    45,    45,    17,    18,    19,
      20,    21,    22,     7,     8,     9,    10,    11,    41,    14,
      15,    16,    45,    17,    18,    19,    20,    21,    22,     7,
       8,     9,    10,    11,    49,    50,    46,    46,    45,    17,
      18,    19,    20,    21,    22,     7,     8,     9,    10,    11,
      49,    46,    46,    14,    12,    17,    18,    19,    20,    21,
      22,    47,    23,    24,    14,    52,    27,     3,    46,    25,
      31,    32,    14,    34,    47,    36,    37,    38,    12,    47,
      14,    23,    24,    44,    46,    27,    14,    48,    48,    31,
      32,    45,    34,    45,    36,    37,    38,    14,    15,    16,
      14,    45,    44,    14,    15,    16,    48,    41,    45,    23,
      24,    45,    47,    27,    47,    29,    30,    31,    32,    49,
      34,    45,    36,    37,    38,    14,    49,    45,    49,    46,
      44,    53,    48,    51,    23,    24,    54,    14,    27,    54,
      14,    14,    31,    32,    14,    34,    49,    36,    37,    38,
      46,    40,    14,    23,    24,    44,    48,    27,    46,    46,
      26,    31,    32,    14,    34,    49,    36,    37,    38,    49,
      40,    49,    23,    24,    44,    28,    27,    45,    45,    14,
      31,    32,    33,    34,    49,    36,    37,    38,    23,    24,
      49,    49,    27,    44,    32,    30,    31,    32,    14,    34,
      31,    36,    37,    38,     9,    10,    11,    23,    24,    44,
      35,    27,    26,    46,    46,    31,    32,    45,    34,    45,
      36,    37,    38,     7,     8,     9,    10,    11,    44,    49,
      49,    49,    49,    17,    18,    19,    20,    21,    22,     7,
       8,     9,    10,    11,     7,     8,     9,    10,    11,    49,
      49,    19,    20,    21,    22,    49,     5,    28,    21,    22,
       7,     8,     9,    10,    11,    19,    46,    25,    60,    48,
      -1,    69
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    58,    59,    14,    60,    61,     0,     3,    15,
      56,    64,    47,     6,    61,     4,    14,    15,    16,    65,
      66,    78,    39,    15,    56,    69,    70,    78,    62,    63,
      78,     4,    66,    14,    67,    68,    45,    56,    70,    14,
      48,    63,    14,    45,    51,    49,    50,    46,    45,    49,
      46,    71,    72,    78,    12,    68,    47,    46,    71,    46,
      50,    14,    52,     3,    73,    47,    46,    72,     4,    74,
      75,    78,    25,    57,    73,    47,     4,    75,    14,    76,
      14,    23,    24,    27,    31,    32,    34,    36,    37,    38,
      40,    44,    79,    80,    81,    82,    83,    85,    86,    87,
      88,    90,    91,    48,    57,    73,    49,    50,    45,    51,
      54,    45,    45,    45,    45,    47,    47,    49,    49,    49,
      12,    13,    45,    84,    89,    90,    45,    40,    80,    53,
      54,    48,    57,    14,    46,    77,    84,    89,    14,    90,
      84,    89,    89,    79,    79,    89,    49,     7,     8,     9,
      10,    11,    17,    18,    19,    20,    21,    22,    46,    84,
      41,    42,    43,    84,    14,    48,    46,    50,    52,    46,
      46,    46,    46,    48,    48,    46,    26,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    41,    89,    41,    89,
      49,    49,    49,    45,    45,    49,    84,    49,    49,    28,
      32,    31,    35,    26,    90,    46,    79,    79,    45,    45,
      46,    49,    29,    30,    33,    89,    89,    49,    79,    49,
      49,    46,    46,    30,    49,    49,    49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    58,    59,    59,
      60,    60,    61,    62,    62,    63,    64,    64,    65,    65,
      66,    67,    67,    68,    68,    68,    68,    69,    69,    70,
      70,    71,    71,    72,    73,    73,    74,    74,    75,    76,
      76,    77,    77,    78,    78,    78,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    81,
      82,    83,    83,    83,    83,    84,    84,    85,    85,    86,
      87,    88,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    90,    90,
      90,    90,    90,    91,    91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     8,     6,     5,     4,     3,     2,     0,     3,
       2,     1,     4,     2,     1,     3,     3,     2,     2,     1,
       3,     3,     1,     1,     4,     4,     3,     2,     1,     9,
       8,     3,     1,     2,     3,     2,     2,     1,     3,     3,
       1,     3,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     4,     5,
       5,     6,     7,     4,     4,     1,     1,    10,     8,     8,
       9,     9,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     4,
       4,     3,     1,     3,     3
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
#line 76 "astree.y" /* yacc.c:1646  */
    {
                                                if(RET_TYPE != TypeTableLookUp(T,"int"))
                                                {
                                                    printf("line %d :Return type does not match\n",line);
                                                    exit(1);
                                                }
                                                RET_TYPE = NULL;
                                                gst = GSTInstall(gst,TypeTableLookUp(T,"int"),FUNCTION,"main",1,Parserparam,lst);
                                                gst_node_temp = GSTLookUp(gst,"main");
                                                gst_node_temp->lst = lst;
                                                lst = LSTDelete(lst);
                                                (yyval.node) = makeTreeNode(FUNCTION,TypeTableLookUp(T,"int"),"main",-1,-1,(yyvsp[-1].node),NULL,gst_node_temp,"main");
                                                Parserparam = ParamDelete(Parserparam);
                                                printGST(gst);
                                                ASTPrintTree((yyval.node));
                                                printf("\n");
                                                stack = push(stack,(yyval.node),gst_node_temp->lst);
                                                (yyval.node) = ASTDelete((yyval.node));
                                            }
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 98 "astree.y" /* yacc.c:1646  */
    {
								RET_TYPE = (yyvsp[-2].node)->type;
								ast_node_temp = makeTreeNode(RETURN,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"RETURN");
								(yyval.node) = makeTreeNode(STATEMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-4].node),ast_node_temp,NULL,"STATEMENT");
							}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 103 "astree.y" /* yacc.c:1646  */
    {
								RET_TYPE = (yyvsp[-2].node)->type;
								ast_node_temp = makeTreeNode(RETURN,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"RETURN");
								(yyval.node) = makeTreeNode(STATEMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,NULL,ast_node_temp,NULL,"STATEMENT");
							}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 111 "astree.y" /* yacc.c:1646  */
    {
                                        (yyval.node) = NULL;
                                        printf("Parsing Completed\n");
                                        generateHeader(ft);
                                        int i = 0;
                                        while(StackGetSize(stack)){
                                                tstack = top(stack);
                                                stack = pop(stack);
                                            if(i == 0){
                                                gst_node_temp = GSTLookUp(gst,"main");
                                                fprintf(ft,"CALL _F%d\n",gst_node_temp->binding_addr);
                                                generateExit(ft);
                                                i = 1;
                                            }
                                            code_generator(ft,tstack->ast,gst,tstack->lst);
                                        }
                                        exit(1);
							        }
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 130 "astree.y" /* yacc.c:1646  */
    {
                                        (yyval.node) = NULL;
                                        printf("Parsing Completed\n");
                                        generateHeader(ft);
                                        int i = 0;
                                        while(StackGetSize(stack)){
                                            tstack = top(stack);
                                            stack = pop(stack);
                                            if(i == 0){
                                                gst_node_temp = GSTLookUp(gst,"main");
                                                fprintf(ft,"CALL _F%d\n",gst_node_temp->binding_addr);
                                                generateExit(ft);
                                                i = 1;
                                            }
                                            code_generator(ft,tstack->ast,gst,tstack->lst);
                                        }
                                        exit(1);
							        }
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 149 "astree.y" /* yacc.c:1646  */
    {
                                        (yyval.node) = NULL;
                                        printf("Parsing Completed\n");
                                        generateHeader(ft);
                                        int i = 0;
                                        while(StackGetSize(stack)){
                                            tstack = top(stack);
                                            stack = pop(stack);
                                            if(i == 0){
                                                gst_node_temp = GSTLookUp(gst,"main");
                                                fprintf(ft,"CALL _F%d\n",gst_node_temp->binding_addr);
                                                generateExit(ft);
                                                        i = 1;
                                                }
                                            code_generator(ft,tstack->ast,gst,tstack->lst);
                                        }
                                        exit(1);
							        }
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 170 "astree.y" /* yacc.c:1646  */
    {}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 171 "astree.y" /* yacc.c:1646  */
    {printTypeTable(T);}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 173 "astree.y" /* yacc.c:1646  */
    {}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 174 "astree.y" /* yacc.c:1646  */
    {}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 176 "astree.y" /* yacc.c:1646  */
    {
                                                if(F->entry > 8)
                                                {
                                                    printf("*line %d: User-Defined data type cannot have more than 8 field\n",line);
                                                    exit(1);
                                                }
                                                T = installTypeTableNode(T,(yyvsp[-3].node)->varname,8,F);
                                                ValidateFieldList(TypeTableLookUp(T,(yyvsp[-3].node)->varname));
                                                F = initFieldList();
                                            }
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 187 "astree.y" /* yacc.c:1646  */
    {}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 188 "astree.y" /* yacc.c:1646  */
    {}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 190 "astree.y" /* yacc.c:1646  */
    {F = installField(T,F,(yyvsp[-1].node)->varname,top_string(TYPE_STACK));TYPE_STACK = pop_string(TYPE_STACK);}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 194 "astree.y" /* yacc.c:1646  */
    {}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 195 "astree.y" /* yacc.c:1646  */
    {}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 197 "astree.y" /* yacc.c:1646  */
    {}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 198 "astree.y" /* yacc.c:1646  */
    {}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 200 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = pop_string(TYPE_STACK);}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 202 "astree.y" /* yacc.c:1646  */
    {}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 203 "astree.y" /* yacc.c:1646  */
    {}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 205 "astree.y" /* yacc.c:1646  */
    {
								                    gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),VARIABLE,(yyvsp[0].node)->varname,1,NULL,lst);
                                                    lst = LSTDelete(lst);
							                    }
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 209 "astree.y" /* yacc.c:1646  */
    {
                                                    if(strcmp(top_string(TYPE_STACK),"int") != 0 && strcmp(top_string(TYPE_STACK),"str") != 0)
                                                    {
                                                        printf("*line %d : Cannot declare array of user-data type\n",line);
                                                        exit(1);
                                                    }
								                    gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),ARRAY_VARIABLE,(yyvsp[-3].node)->varname,(yyvsp[-1].node)->val,NULL,lst);
                                                    lst = LSTDelete(lst);
							                    }
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 218 "astree.y" /* yacc.c:1646  */
    {
                                                    gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),FUNCTION,(yyvsp[-3].node)->varname,1,Parserparam,lst);
                                                    lst = LSTDelete(lst);
                                                    Parserparam = ParamDelete(Parserparam);
							                    }
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 223 "astree.y" /* yacc.c:1646  */
    {
								                    gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),FUNCTION,(yyvsp[-2].node)->varname,1,Parserparam,lst);
                                                    lst = LSTDelete(lst);
                                                    Parserparam = ParamDelete(Parserparam);
							                    }
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 231 "astree.y" /* yacc.c:1646  */
    {}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 232 "astree.y" /* yacc.c:1646  */
    {}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 235 "astree.y" /* yacc.c:1646  */
    {
                                                gst_node_temp = GSTLookUp(gst,(yyvsp[-7].node)->varname);
                                                if(!gst_node_temp){
                                                    printf("line %d :\"%s\" function not declared\n",line,(yyvsp[-7].node)->varname);
                                                    exit(1);
                                                }
                                                if(TypeTableLookUp(T,top_string(TYPE_STACK)) != gst_node_temp->type){
                                                    printf("line %d :Invalid return type for \"%s\"\n",line,(yyvsp[-7].node)->varname);
                                                    exit(1);
                                                }
                                                if(!checkParamList(Parserparam,gst_node_temp->param)){
                                                    printf("line %d :Number of Formal Arguments does not match with declaration\n",line);
                                                    exit(1);
                                                }
                                                if(RET_TYPE != gst_node_temp->type){
                                                    printf("*line %d :Return type does not match\n",line);
                                                    exit(1);
                                                }
                                                RET_TYPE = NULL;
                                                gst_node_temp->lst = lst;
                                                lst = LSTDelete(lst);
                                                Parserparam = ParamDelete(Parserparam);
                                                (yyval.node) = makeTreeNode(FUNCTION,TypeTableLookUp(T,top_string(TYPE_STACK)),(yyvsp[-7].node)->varname,-1,-1,(yyvsp[-1].node),NULL,gst_node_temp,"FUNCTION");
                                                TYPE_STACK = pop_string(TYPE_STACK);
                                                printGST(gst);
                                                ASTPrintTree((yyval.node));
                                                printf("\n");
                                                stack = push(stack,(yyval.node),gst_node_temp->lst);
                                                (yyval.node) = ASTDelete((yyval.node));
                                            }
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 266 "astree.y" /* yacc.c:1646  */
    {
                                                gst_node_temp = GSTLookUp(gst,(yyvsp[-6].node)->varname);
                                                if(!gst_node_temp){
                                                    printf("line %d :\"%s\" function not declared\n",line,(yyvsp[-6].node)->varname);
                                                    exit(1);
                                                }
                                                if(TypeTableLookUp(T,top_string(TYPE_STACK)) != gst_node_temp->type){
                                                    printf("line %d :Invalid return type for \"%s\"\n",line,(yyvsp[-6].node)->varname);
                                                    exit(1);
                                                }
                                                if(!checkParamList(Parserparam,gst_node_temp->param)){
                                                    printf("line %d :Number of Formal Arguments does not match with declaration\n",line);
                                                    exit(1);
                                                }
                                                if(RET_TYPE != gst_node_temp->type){
                                                    printf("line %d :Return type does not match\n",line);
                                                    exit(1);
                                                }
                                                RET_TYPE = NULL;
                                                gst_node_temp->lst = lst;
                                                lst = LSTDelete(lst);
                                                Parserparam = ParamDelete(Parserparam);
                                                (yyval.node) = makeTreeNode(FUNCTION,TypeTableLookUp(T,top_string(TYPE_STACK)),(yyvsp[-6].node)->varname,-1,-1,(yyvsp[-1].node),NULL,gst_node_temp,"FUNCTION");
                                                TYPE_STACK = pop_string(TYPE_STACK);
                                                printGST(gst);
                                                ASTPrintTree((yyval.node));
                                                printf("\n");
                                                stack = push(stack,(yyval.node),gst_node_temp->lst);
                                                (yyval.node) = ASTDelete((yyval.node));
                                            }
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 299 "astree.y" /* yacc.c:1646  */
    {}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 300 "astree.y" /* yacc.c:1646  */
    {}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 302 "astree.y" /* yacc.c:1646  */
    {
                                                    Parserparam = ParamInsert(Parserparam,(yyvsp[0].node)->varname,TypeTableLookUp(T,top_string(TYPE_STACK)),VARIABLE);
                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                }
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 309 "astree.y" /* yacc.c:1646  */
    {lst = ParamToLSTInstall(lst,Parserparam);}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 310 "astree.y" /* yacc.c:1646  */
    {lst = ParamToLSTInstall(lst,Parserparam);}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 312 "astree.y" /* yacc.c:1646  */
    {}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 313 "astree.y" /* yacc.c:1646  */
    {}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 315 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = pop_string(TYPE_STACK);}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 317 "astree.y" /* yacc.c:1646  */
    {lst = LSTInstall(lst,(yyvsp[0].node)->varname,TypeTableLookUp(T,top_string(TYPE_STACK)),VARIABLE);}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 318 "astree.y" /* yacc.c:1646  */
    {lst = LSTInstall(lst,(yyvsp[0].node)->varname,TypeTableLookUp(T,top_string(TYPE_STACK)),VARIABLE);}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 322 "astree.y" /* yacc.c:1646  */
    {
                                                    (yyvsp[-2].node) = insertASTParam((yyvsp[-2].node),(yyvsp[0].node));
                                                    (yyval.node) = (yyvsp[-2].node);
                                                }
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 326 "astree.y" /* yacc.c:1646  */
    {
                                                    (yyval.node) = (yyvsp[0].node);
                                                }
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 332 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = push_string(TYPE_STACK,"int");}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 333 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = push_string(TYPE_STACK,"str");}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 334 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = push_string(TYPE_STACK,(yyvsp[0].node)->varname);}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 338 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = makeTreeNode(STATEMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-1].node),(yyvsp[0].node),NULL,"STATEMENT");}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 339 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 342 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 343 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 344 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 345 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 346 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 347 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 348 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 349 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 350 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 351 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 352 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-3].node);}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 354 "astree.y" /* yacc.c:1646  */
    {
                                                if((yyvsp[-2].node)->nodetype == FUNCTION)
                                                {
                                                    printf("*line %d: function cannot be a parameter to read\n",line);
                                                    exit(0);
                                                }
                                                if((yyvsp[-2].node)->type == TypeTableLookUp(T,"int") || (yyvsp[-2].node)->type == TypeTableLookUp(T,"str"))
                                                    (yyval.node) = makeTreeNode(READ,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"Read");
                                                else
                                                {
                                                    printf("*line %d: invalid parameter type to read\n",line);
                                                    exit(0);
                                                }
                                            }
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 369 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = makeTreeNode(WRITE,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"Write");}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 371 "astree.y" /* yacc.c:1646  */
    {
                                                if((yyvsp[-5].node)->type != TypeTableLookUp(T,"int") && (yyvsp[-5].node)->type != TypeTableLookUp(T,"str") && (yyvsp[-5].node)->nodetype != FUNCTION)
                                                    (yyval.node) = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-5].node),(yyvsp[-3].node),NULL,"=");
                                                else
                                                {
                                                    printf("*line %d: alloc() must be called for user-defined data types\n",line);
                                                    exit(0);
                                                }
                                            }
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 380 "astree.y" /* yacc.c:1646  */
    {
                                                if((yyvsp[-6].node)->type == TypeTableLookUp(T,"int") && (yyvsp[-6].node)->nodetype != FUNCTION && (yyvsp[-2].node)->type != TypeTableLookUp(T,"int") && (yyvsp[-2].node)->type != TypeTableLookUp(T,"str") && (yyvsp[-2].node)->nodetype != ARRAY_VARIABLE && (yyvsp[-2].node)->nodetype != FUNCTION)
                                                {
                                                    (yyvsp[-4].node)->left = (yyvsp[-2].node);
                                                    (yyval.node) = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-6].node),(yyvsp[-4].node),NULL,"=");
                                                }
                                                else
                                                {
                                                    printf("*line %d: Semantic Error for Free()\n",line);
                                                    exit(0);
                                                }
                                            }
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 392 "astree.y" /* yacc.c:1646  */
    {
                                                if((yyvsp[-3].node)->type == (yyvsp[-1].node)->type && ((yyvsp[-3].node)->nodetype != FUNCTION))
                                                    (yyval.node) = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-3].node),(yyvsp[-1].node),NULL,"=");
                                                else{
                                                    printf("line %d :Invalid assignment to \"%s\"\n",line,(yyvsp[-3].node)->varname);
                                                    exit(1);
                                                }
                                            }
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 400 "astree.y" /* yacc.c:1646  */
    {
                                                if((yyvsp[-3].node)->type != TypeTableLookUp(T,"int") && (yyvsp[-3].node)->type != TypeTableLookUp(T,"str") && (yyvsp[-3].node)->nodetype != FUNCTION)
                                                    (yyval.node) = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-3].node),(yyvsp[-1].node),NULL,"=");
                                                else
                                                {
                                                    printf("*line %d: NULL cannot be assigned to primitive data-types\n",line);
                                                    exit(0);
                                                } 
                                            }
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 410 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 411 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 413 "astree.y" /* yacc.c:1646  */
    {
                                                                if(!typeCheckBool((yyvsp[-7].node))){
                                                                    printf("line %d: Invalid conditional statement\n",line);
                                                                    exit(1);
                                                                }
                                                                struct AST_Node *temp1 = makeTreeNode(IF,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-7].node),(yyvsp[-4].node),NULL,"IF");
                                                                struct AST_Node *temp2 = makeTreeNode(ELSE,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"ELSE");
                                                                (yyval.node) = makeTreeNode(IF_ELSE,TypeTableLookUp(T,"void"),NULL,-1,-1,temp1,temp2,NULL,"IF_ELSE");
                                                            }
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 422 "astree.y" /* yacc.c:1646  */
    {
                                                                if(!typeCheckBool((yyvsp[-5].node))){
                                                                    printf("line %d :Invalid boolean statement\n",line);
                                                                    exit(1);
                                                                }
                                                                struct AST_Node *temp1 = makeTreeNode(IF,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-5].node),(yyvsp[-2].node),NULL,"IF");
                                                                (yyval.node) = makeTreeNode(IF_ELSE,TypeTableLookUp(T,"void"),NULL,-1,-1,temp1,NULL,NULL,"IF_ELSE");
                                                            }
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 431 "astree.y" /* yacc.c:1646  */
    {
                                                                if(typeCheckBool((yyvsp[-5].node)))
                                                                    (yyval.node) = makeTreeNode(WHILE,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-5].node),(yyvsp[-2].node),NULL,"WHILE");
                                                                else{
                                                                    printf("line %d :Invalid bool statement\n",line);
                                                                    exit(1);
                                                                }
                                                            }
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 440 "astree.y" /* yacc.c:1646  */
    {
                                                                    if(typeCheckBool((yyvsp[-2].node)))
                                                                        (yyval.node) = makeTreeNode(REPEAT_UNTIL,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-6].node),(yyvsp[-2].node),NULL,"REPEAT_UNTIL");
                                                                    else{
                                                                        printf("line %d :Invalid bool statement\n",line);
                                                                        exit(1);
                                                                    }
                                                                }
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 449 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckBool((yyvsp[-2].node)))
                                                                (yyval.node) = makeTreeNode(DO_WHILE,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-6].node),(yyvsp[-2].node),NULL,"DO_WHILE");
                                                            else{
                                                                printf("line %d :Invalid bool statement\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 459 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,PLUS,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"+");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 467 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,MINUS,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"-");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 475 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,MUL,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"*");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 483 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,DIV,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"/");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 491 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,MOD,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"%");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 499 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,LT,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"<");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 507 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,LE,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"<=");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 515 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,GT,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,">");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 523 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,GE,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,">=");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 531 "astree.y" /* yacc.c:1646  */
    {
                                                            if((typeCheckExp((yyvsp[-2].node)) || (!typeCheckExp((yyvsp[-2].node)) && !typeCheckBool((yyvsp[-2].node)))) && ((yyvsp[0].node)->nodetype == NULL_ || typeCheckExp((yyvsp[0].node)) || (!typeCheckExp((yyvsp[0].node)) && !typeCheckBool((yyvsp[0].node)))))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NE,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"!=");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 539 "astree.y" /* yacc.c:1646  */
    {
                                                            if((typeCheckExp((yyvsp[-2].node)) || (!typeCheckExp((yyvsp[-2].node)) && !typeCheckBool((yyvsp[-2].node)))) && ((yyvsp[0].node)->nodetype == NULL_ || typeCheckExp((yyvsp[0].node)) || (!typeCheckExp((yyvsp[0].node)) && !typeCheckBool((yyvsp[0].node)))))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,EQ,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"==");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 547 "astree.y" /* yacc.c:1646  */
    {
                                                            if(!typeCheckExp((yyvsp[-2].node)) && !typeCheckBool((yyvsp[-2].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,EQ,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"==");
                                                            else
                                                            {
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 556 "astree.y" /* yacc.c:1646  */
    {
                                                            if(!typeCheckExp((yyvsp[-2].node)) && !typeCheckBool((yyvsp[-2].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NE,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"!=");
                                                            else
                                                            {
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 565 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 566 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 567 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 570 "astree.y" /* yacc.c:1646  */
    {
                                                            (yyval.node) = (yyvsp[0].node);
                                                            lst_node_temp = LSTLookUp(lst,(yyvsp[0].node)->varname);
                                                            if(lst_node_temp)
                                                                (yyval.node)->type = lst_node_temp->type;
                                                            else{
                                                                gst_node_temp = GSTLookUp(gst,(yyvsp[0].node)->varname);
                                                                if(!gst_node_temp){
                                                                    printf("line %d :Variable \"%s\" not declared\n",line,(yyval.node)->varname);
                                                                    exit(1);
                                                                }
                                                                else
                                                                    (yyval.node)->type = gst_node_temp->type;
                                                            }
                                                        }
#line 2383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 585 "astree.y" /* yacc.c:1646  */
    {
                                                            if((yyvsp[-1].node)->type != TypeTableLookUp(T,"int")){
                                                                printf("line %d :Invalid index\n",line);
                                                                exit(1);
                                                            }
                                                            lst_node_temp = LSTLookUp(lst,(yyvsp[-3].node)->varname);
                                                            if(lst_node_temp){
                                                                if(lst_node_temp->type_of_var != ARRAY_VARIABLE){
                                                                    printf("line %d :Variable \"%s\" not of array type\n",line,(yyvsp[-3].node)->varname);
                                                                    exit(1);
                                                                }
                                                                (yyvsp[-3].node)->type = lst_node_temp->type;
                                                                (yyval.node) = makeTreeNode(ARRAY_VARIABLE,(yyvsp[-3].node)->type,(yyvsp[-3].node)->varname,-1,-1,(yyvsp[-3].node),(yyvsp[-1].node),NULL,"ARRAY_VARIABLE");
                                                            }
                                                            else{
                                                                gst_node_temp = GSTLookUp(gst,(yyvsp[-3].node)->varname);
                                                                if(!gst_node_temp)
                                                                {
                                                                    printf("line %d :Variable \"%s\" not declared\n",line,(yyvsp[-3].node)->varname);
                                                                    exit(1);            
                                                                }
                                                                else{
                                                                    if(gst_node_temp->type_of_var != ARRAY_VARIABLE){
                                                                        printf("line %d :Variable \"%s\" not of array type\n",line,(yyvsp[-3].node)->varname);
                                                                        exit(1);
                                                                    }
                                                                    (yyvsp[-3].node)->type = gst_node_temp->type;
                                                                    (yyval.node) = makeTreeNode(ARRAY_VARIABLE,(yyvsp[-3].node)->type,(yyvsp[-3].node)->varname,-1,-1,(yyvsp[-3].node),(yyvsp[-1].node),gst_node_temp,"ARRAY_VARIABLE");
                                                                }
                                                            }
                                                        }
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 616 "astree.y" /* yacc.c:1646  */
    {
                                                            gst_node_temp = GSTLookUp(gst,(yyvsp[-3].node)->varname);
                                                            if(!gst_node_temp){
                                                                printf("line %d :Function \"%s\" not declared\n",line,(yyvsp[-3].node)->varname);
                                                                exit(1);
                                                            }
                                                            if(gst_node_temp->type_of_var != FUNCTION){
                                                                printf("line %d :\"%s\" not a function\n",line,(yyvsp[-3].node)->varname);
                                                                exit(1);
                                                            }
                                                            if(!checkASTParam(gst_node_temp->param,(yyvsp[-1].node))){
                                                                printf("line %d :Wrong arguments in \"%s\", does not match with declaration\n",line,(yyvsp[-3].node)->varname);
                                                                exit(1);
                                                            }
                                                            (yyvsp[-3].node)->nodetype = FUNCTION;
                                                            (yyvsp[-3].node)->type = gst_node_temp->type;
                                                            (yyvsp[-3].node)->param = (struct AST_Node *)malloc(sizeof(struct AST_Node));
                                                            (yyvsp[-3].node)->param = (yyvsp[-1].node);
                                                            (yyvsp[-1].node) = NULL;
                                                            (yyval.node) = (yyvsp[-3].node);
                                                        }
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 637 "astree.y" /* yacc.c:1646  */
    {
                                                            gst_node_temp = GSTLookUp(gst,(yyvsp[-2].node)->varname);
                                                            if(!gst_node_temp){
                                                                printf("line %d :Function \"%s\" not declared\n",line,(yyvsp[-2].node)->varname);
                                                                exit(1);
                                                            }
                                                            if(gst_node_temp->type_of_var != FUNCTION){
                                                                printf("line %d :\"%s\" not a function\n",line,(yyvsp[-2].node)->varname);
                                                                exit(1);
                                                            }
                                                            if(gst_node_temp->param->size != 0){
                                                                printf("line %d :Wrong arguments in \"%s\", does not match with declaration\n",line,(yyvsp[-2].node)->varname);
                                                                exit(1);
                                                            }
                                                            (yyvsp[-2].node)->nodetype = FUNCTION;
                                                            (yyvsp[-2].node)->type = gst_node_temp->type;
                                                            (yyvsp[-2].node)->param = NULL;
                                                            (yyval.node) = (yyvsp[-2].node);
                                                        }
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 656 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 660 "astree.y" /* yacc.c:1646  */
    {
                                struct FieldListNode *found = FieldListLookUp(curr_typetableentry,(yyvsp[0].node)->varname);
                                if(!found)
                                {
                                    printf("*line %d: \"%s\" does not contain \"%s\" as a field\n",line,curr_typetableentry->name,(yyvsp[0].node)->varname);
                                    exit(1);
                                }
                                (yyvsp[0].node)->type = found->type;
                                (yyval.node) = makeTreeNode(FIELD,(yyvsp[0].node)->type,(yyvsp[0].node)->varname,-1,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"FIELD");
                                curr_typetableentry = found->type;
                            }
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 671 "astree.y" /* yacc.c:1646  */
    {
                                curr_typetableentry = NULL;
                                lst_node_temp = LSTLookUp(lst,(yyvsp[-2].node)->varname);
                                if(lst_node_temp)
                                    curr_typetableentry = lst_node_temp->type;
                                else
                                {
                                    gst_node_temp = GSTLookUp(gst,(yyvsp[-2].node)->varname);
                                    if(!gst_node_temp)
                                    {
                                        printf("*line %d: \"%s\" not declared\n",line,(yyvsp[-2].node)->varname);
                                        exit(1);
                                    }
                                    curr_typetableentry = gst_node_temp->type;
                                }
                                struct FieldListNode *found = FieldListLookUp(curr_typetableentry,(yyvsp[0].node)->varname);
                                if(!found)
                                {
                                    printf("*line %d: \"%s\" does not contain \"%s\" as a field\n",line,curr_typetableentry->name,(yyvsp[0].node)->varname);
                                    exit(1);
                                }
                                (yyvsp[-2].node)->type = curr_typetableentry;
                                (yyvsp[0].node)->type = found->type;
                                (yyval.node) = makeTreeNode(FIELD,(yyvsp[0].node)->type,(yyvsp[0].node)->varname,-1,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"FIELD");
                                curr_typetableentry = found->type;
                            }
#line 2522 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2526 "y.tab.c" /* yacc.c:1646  */
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
#line 698 "astree.y" /* yacc.c:1906  */

//-------------------------Auxiliary Functions--------------------------
void yyerror(const char *err){
    printf("**%s at line number %d\n",err,line);
    return;
}

int main(int argc,char *argv[]){
    gst = init_GSTable();
    lst = init_LSTable();
    T = initTypeTable();
    F = initFieldList();
    TYPE_STACK = init_StringStack();
    Parserparam = init_ParamList();
    stack = init_Stack();
    curr_typetableentry = NULL;
    ADDR = 4096;
    LABEL = 0;
    RET_TYPE = NULL;
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
