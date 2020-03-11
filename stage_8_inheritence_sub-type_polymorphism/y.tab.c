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
    struct AST_Node *ast_node_temp,*paramAST;
    struct MethodListNode *method_list_node_temp;
    struct Stack *stack;
    struct StackNode *tstack;
    struct FieldList *F;
    struct TypeTableNode *RET_TYPE,*curr_typetableentry;
    struct ClassTableNode *curr_classtableentry;
    char *keyword[20] = {"begin", "end", "read", "write", "if", "else", "then", "endif", "while", "do", "endwhile", "repeat", "until", "int", "str", "decl", "enddecl", "break", "continue", "breakpoint"};

#line 90 "y.tab.c" /* yacc.c:339  */

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
    _INITIALIZE = 303,
    _NEW = 304,
    _DELETE = 305
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
#define _NEW 304
#define _DELETE 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 26 "astree.y" /* yacc.c:355  */

    struct AST_Node *node;

#line 234 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 251 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   513

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  280

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

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
      51,    52,     2,     2,    56,     2,    60,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    55,
       2,    59,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,     2,    54,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    78,    78,   100,   105,   112,   137,   165,   166,   168,
     169,   171,   182,   183,   185,   195,   196,   198,   199,   201,
     216,   220,   232,   233,   235,   236,   238,   243,   249,   250,
     254,   255,   256,   258,   259,   261,   263,   264,   266,   273,
     287,   297,   310,   311,   313,   381,   452,   453,   455,   462,
     463,   465,   466,   468,   470,   471,   475,   476,   478,   479,
     483,   484,   485,   489,   490,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   505,   520,   522,   531,
     543,   571,   583,   593,   603,   604,   606,   615,   624,   633,
     642,   652,   660,   668,   676,   684,   692,   700,   708,   716,
     724,   732,   740,   749,   758,   759,   760,   763,   781,   812,
     832,   833,   837,   854,   889,   912,   931,   964
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_DECL", "_ENDDECL", "_TYPE", "_ENDTYPE",
  "_CLASS", "_ENDCLASS", "_EXTENDS", "_SELF", "_PLUS", "_MINUS", "_MUL",
  "_DIV", "_MOD", "_NUM", "_STRING", "_ID", "_INT", "_STR", "_LT", "_LE",
  "_GT", "_GE", "_NE", "_EQ", "_READ", "_WRITE", "_BEGIN", "_END", "_IF",
  "_THEN", "_ELSE", "_ENDIF", "_WHILE", "_DO", "_ENDWHILE", "_REPEAT",
  "_UNTIL", "_BREAK", "_CONTINUE", "_BREAKPOINT", "_MAIN", "_RETURN",
  "_NULL", "_FREE", "_ALLOC", "_INITIALIZE", "_NEW", "_DELETE", "'('",
  "')'", "'{'", "'}'", "';'", "','", "'['", "']'", "'='", "'.'", "$accept",
  "MainBlock", "Body", "Program", "TypeDefBlock", "TypeDefList", "TypeDef",
  "FieldDeclList", "FieldDecl", "ClassDefBlock", "ClassDefList",
  "ClassDef", "Cname", "CFieldList", "CMethodDecl", "CMDecl", "CMethodDef",
  "GDeclBlock", "GDeclList", "GDecl", "GIdList", "GId", "FnDefBlock",
  "FnDef", "ParamList", "Param", "LDeclBlock", "LDeclList", "LDecl",
  "IdList", "NewArgList", "ArgList", "Type", "Slist", "stmt", "Inputstmt",
  "Outputstmt", "Assgstmt", "stringExp", "Ifstmt", "Whilestmt",
  "RepeatUntil", "DoWhile", "expr", "id", "Field", "FieldFunction", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    40,    41,   123,   125,    59,    44,    91,    93,    61,
      46
};
# endif

#define YYPACT_NINF -151

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-151)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,    17,    41,    54,    10,    27,  -151,  -151,    64,   103,
     154,  -151,  -151,   119,    69,  -151,    59,   142,   183,  -151,
    -151,  -151,    -6,  -151,   105,   139,  -151,  -151,   156,  -151,
     165,  -151,   146,   123,  -151,   183,  -151,   171,  -151,  -151,
     153,  -151,  -151,  -151,  -151,   -17,    85,  -151,   167,  -151,
    -151,   210,  -151,   154,     8,   246,  -151,   146,   211,    84,
    -151,   173,  -151,   259,  -151,    65,  -151,   260,   206,  -151,
     226,   227,   143,   154,  -151,   275,   253,  -151,   154,  -151,
    -151,   291,   291,   242,    37,  -151,   254,   134,  -151,   194,
     267,   267,   291,  -151,  -151,   251,   193,  -151,   202,  -151,
     292,   324,   255,   257,   267,  -151,   262,  -151,  -151,  -151,
     160,   252,    48,   263,   265,   268,   269,   270,   273,   266,
     272,   281,    68,   271,   289,   351,  -151,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,   282,   258,  -151,  -151,  -151,   290,
    -151,  -151,   325,   328,    68,   114,   330,    83,    68,   114,
     114,   434,   434,  -151,  -151,  -151,  -151,  -151,   114,   294,
     466,  -151,   298,    83,    68,  -151,    80,   335,  -151,  -151,
     303,   304,   301,  -151,    -4,   307,   311,   315,   213,   229,
     140,   169,   245,   340,   114,   114,   114,   114,   114,   114,
     114,   114,   114,    97,   100,   316,   321,   320,   322,   329,
     332,   333,   326,   334,    68,  -151,    68,  -151,    68,   339,
     342,   344,   354,   363,   361,  -151,  -151,   233,   233,  -151,
    -151,  -151,   482,   482,   487,   487,  -151,   218,  -151,   218,
    -151,   347,   373,  -151,    83,   352,   389,  -151,    68,   356,
    -151,   358,  -151,  -151,   434,   434,   360,   370,  -151,  -151,
     371,   357,   372,   375,  -151,  -151,   297,   378,   114,   114,
     367,  -151,   374,  -151,   434,   376,   377,   261,   277,  -151,
    -151,   407,  -151,  -151,   381,   382,   384,  -151,  -151,  -151
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     0,    15,     0,     0,    10,     1,     0,    30,
       0,     8,     9,    20,     0,    18,     0,     0,     0,    62,
      60,    61,     0,    13,     0,     0,    16,    17,     0,    32,
       0,    34,     0,    60,     6,     0,    43,     0,    11,    12,
       0,    21,    22,    31,    33,    38,     0,    37,     0,     5,
      42,     0,    14,     0,     0,     0,    35,     0,     0,     0,
      23,     0,    25,     0,    41,     0,    47,     0,     0,    36,
       0,     0,     0,     0,    24,     0,     0,    40,     0,    48,
      39,     0,     0,     0,     0,    29,     0,     0,    46,     0,
       0,     0,     0,    19,    28,     0,     0,    50,     0,    52,
       0,     0,     0,     0,     0,    27,     0,    49,    51,    55,
       0,     0,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    71,     0,   110,   111,     2,    45,     0,
      26,    53,     0,     0,    56,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,   105,    85,     0,     0,
      84,   106,     0,     0,     0,    63,     0,     0,    44,    54,
     114,     0,    57,    59,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,    56,   109,     0,   108,    56,     0,
       0,     0,     0,     0,     0,   104,     4,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   103,   100,   102,   101,
      75,     0,     0,    83,     0,     0,     0,    82,    56,     0,
      58,     0,    76,    77,     0,     0,     0,     0,    81,     3,
       0,     0,     0,     0,   117,   116,     0,     0,     0,     0,
       0,    78,     0,   115,     0,     0,     0,     0,     0,    79,
      80,     0,    87,    88,     0,     0,     0,    90,    89,    86
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,   395,   -68,  -151,  -151,  -151,   428,  -151,   -16,  -151,
    -151,   426,  -151,  -151,  -151,   385,  -151,  -151,  -151,   420,
    -151,   394,  -151,   -31,   -44,   380,    55,  -151,   355,  -151,
    -116,  -151,    22,  -150,  -122,  -151,  -151,  -151,  -117,  -151,
    -151,  -151,  -151,  -120,  -101,  -151,  -151
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    34,   102,     2,     3,     5,     6,    22,    23,     9,
      14,    15,    16,    53,    61,    62,    84,    18,    30,    31,
      46,    47,    35,    36,    65,    66,    90,    98,    99,   110,
     171,   172,    37,   125,   126,   127,   128,   129,   173,   130,
     131,   132,   133,   160,   161,   135,   136
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     134,   180,   181,   165,    50,   159,    39,   184,   185,   186,
     187,   188,    19,    20,    21,    72,     1,   189,   190,   191,
     192,   193,   194,   103,   134,   174,    19,    20,    21,   178,
     179,   177,    24,    11,    54,     4,   139,    60,   182,    32,
      55,     7,    85,    96,    24,     4,   176,   197,    38,   202,
     134,   134,    32,    94,   207,    19,    20,    21,   165,   165,
      64,     8,   196,    10,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   227,   229,    63,    67,    26,   111,   134,
     134,    67,    13,    75,   156,   157,   112,    13,   239,   240,
     111,    93,   241,   111,   256,   257,   156,   157,   112,   144,
      67,   112,    19,    20,    21,   145,    17,   111,   146,    67,
     111,   100,    28,   156,   271,   112,   156,    77,   112,   158,
     100,    78,   253,    40,   111,   198,   199,   200,    25,   201,
     156,   158,   112,   250,   165,   165,    71,    91,   267,   268,
      56,    57,   226,   134,   134,   228,    29,   104,   158,   165,
     111,   158,    19,    20,    21,   134,   134,    41,   112,    42,
      19,    20,    21,   134,    45,   158,    48,   113,   114,    43,
     134,   115,    19,    20,    21,   116,   117,    73,   118,   111,
     119,   120,   121,    19,    20,    21,    95,   112,   123,    51,
     124,    19,    20,    21,   213,    83,   113,   114,    97,    78,
     115,    19,    33,    21,   116,   117,   107,   118,    52,   119,
     120,   121,    19,    20,    21,   141,   142,   123,    58,   124,
      19,    20,    21,   214,   184,   185,   186,   187,   188,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     184,   185,   186,   187,   188,   106,   186,   187,   188,    78,
     189,   190,   191,   192,   193,   194,   184,   185,   186,   187,
     188,    59,    68,    70,    80,   211,   189,   190,   191,   192,
     193,   194,   184,   185,   186,   187,   188,    76,    79,    81,
      82,   212,   189,   190,   191,   192,   193,   194,   184,   185,
     186,   187,   188,    86,    89,    92,   101,   215,   189,   190,
     191,   192,   193,   194,    87,    87,   105,   111,    52,   137,
     109,   138,   143,   274,   147,   112,   148,   140,   167,   149,
     150,   153,   162,   151,   113,   114,   152,   154,   115,   275,
     264,   265,   116,   117,   111,   118,   155,   119,   120,   121,
     163,   166,   112,   169,   168,   123,   170,   124,   175,   183,
     195,   113,   114,   203,   204,   115,   205,   206,   208,   116,
     117,   111,   118,   209,   119,   120,   121,   210,   122,   112,
     216,   230,   123,   231,   124,   232,   244,   233,   113,   114,
     234,   237,   115,   235,   236,   238,   116,   117,   111,   118,
     245,   119,   120,   121,   242,   164,   112,   243,   246,   123,
     247,   124,   248,   249,   251,   113,   114,   252,   254,   115,
     255,   258,   261,   116,   117,   266,   118,   111,   119,   120,
     121,   259,   269,   260,   262,   112,   123,   263,   124,   270,
      49,   272,   273,    12,   113,   114,   277,   278,   115,   279,
      27,   276,   116,   117,   111,   118,    74,   119,   120,   121,
      44,    69,   112,   108,     0,   123,     0,   124,    88,     0,
       0,   113,   114,     0,     0,   115,     0,     0,     0,   116,
     117,     0,   118,     0,   119,   120,   121,   184,   185,   186,
     187,   188,   123,     0,   124,     0,     0,   189,   190,   191,
     192,   193,   194,   184,   185,   186,   187,   188,   184,   185,
     186,   187,   188,     0,     0,   191,   192,   193,   194,     0,
       0,     0,   193,   194
};

static const yytype_int16 yycheck[] =
{
     101,   151,   152,   125,    35,   122,    22,    11,    12,    13,
      14,    15,    18,    19,    20,    59,     5,    21,    22,    23,
      24,    25,    26,    91,   125,   145,    18,    19,    20,   149,
     150,   148,    10,     6,    51,    18,   104,    53,   158,    17,
      57,     0,    73,    87,    22,    18,   147,   164,    54,   166,
     151,   152,    30,    84,    58,    18,    19,    20,   180,   181,
      52,     7,   163,    53,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,    53,    54,     8,    10,   180,
     181,    59,    18,    61,    16,    17,    18,    18,   204,   206,
      10,    54,   208,    10,   244,   245,    16,    17,    18,    51,
      78,    18,    18,    19,    20,    57,     3,    10,    60,    87,
      10,    89,    53,    16,   264,    18,    16,    52,    18,    51,
      98,    56,   238,    18,    10,    45,    46,    47,     9,    49,
      16,    51,    18,   234,   256,   257,    52,    82,   258,   259,
      55,    56,    45,   244,   245,    45,     4,    92,    51,   271,
      10,    51,    18,    19,    20,   256,   257,    18,    18,     3,
      18,    19,    20,   264,    18,    51,    43,    27,    28,     4,
     271,    31,    18,    19,    20,    35,    36,     4,    38,    10,
      40,    41,    42,    18,    19,    20,    52,    18,    48,    18,
      50,    18,    19,    20,    54,    52,    27,    28,     4,    56,
      31,    18,    19,    20,    35,    36,     4,    38,    55,    40,
      41,    42,    18,    19,    20,    55,    56,    48,    51,    50,
      18,    19,    20,    54,    11,    12,    13,    14,    15,    11,
      12,    13,    14,    15,    21,    22,    23,    24,    25,    26,
      11,    12,    13,    14,    15,    52,    13,    14,    15,    56,
      21,    22,    23,    24,    25,    26,    11,    12,    13,    14,
      15,    51,    16,    52,    58,    52,    21,    22,    23,    24,
      25,    26,    11,    12,    13,    14,    15,    18,    18,    53,
      53,    52,    21,    22,    23,    24,    25,    26,    11,    12,
      13,    14,    15,    18,     3,    53,    29,    52,    21,    22,
      23,    24,    25,    26,    51,    51,    55,    10,    55,    54,
      18,    54,    60,    52,    51,    18,    51,    55,    60,    51,
      51,    55,    51,    53,    27,    28,    53,    55,    31,    52,
      33,    34,    35,    36,    10,    38,    55,    40,    41,    42,
      51,    59,    18,    18,    54,    48,    18,    50,    18,    55,
      52,    27,    28,    18,    51,    31,    52,    56,    51,    35,
      36,    10,    38,    52,    40,    41,    42,    52,    44,    18,
      30,    55,    48,    52,    50,    55,    32,    55,    27,    28,
      51,    55,    31,    51,    51,    51,    35,    36,    10,    38,
      36,    40,    41,    42,    55,    44,    18,    55,    35,    48,
      39,    50,    55,    30,    52,    27,    28,    18,    52,    31,
      52,    51,    55,    35,    36,    37,    38,    10,    40,    41,
      42,    51,    55,    52,    52,    18,    48,    52,    50,    55,
      35,    55,    55,     5,    27,    28,    55,    55,    31,    55,
      14,    34,    35,    36,    10,    38,    61,    40,    41,    42,
      30,    57,    18,    98,    -1,    48,    -1,    50,    78,    -1,
      -1,    27,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,
      36,    -1,    38,    -1,    40,    41,    42,    11,    12,    13,
      14,    15,    48,    -1,    50,    -1,    -1,    21,    22,    23,
      24,    25,    26,    11,    12,    13,    14,    15,    11,    12,
      13,    14,    15,    -1,    -1,    23,    24,    25,    26,    -1,
      -1,    -1,    25,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    64,    65,    18,    66,    67,     0,     7,    70,
      53,     6,    67,    18,    71,    72,    73,     3,    78,    18,
      19,    20,    68,    69,    93,     9,     8,    72,    53,     4,
      79,    80,    93,    19,    62,    83,    84,    93,    54,    69,
      18,    18,     3,     4,    80,    18,    81,    82,    43,    62,
      84,    18,    55,    74,    51,    57,    55,    56,    51,    51,
      69,    75,    76,    93,    52,    85,    86,    93,    16,    82,
      52,    52,    85,     4,    76,    93,    18,    52,    56,    18,
      58,    53,    53,    52,    77,    84,    18,    51,    86,     3,
      87,    87,    53,    54,    84,    52,    85,     4,    88,    89,
      93,    29,    63,    63,    87,    55,    52,     4,    89,    18,
      90,    10,    18,    27,    28,    31,    35,    36,    38,    40,
      41,    42,    44,    48,    50,    94,    95,    96,    97,    98,
     100,   101,   102,   103,   105,   106,   107,    54,    54,    63,
      55,    55,    56,    60,    51,    57,    60,    51,    51,    51,
      51,    53,    53,    55,    55,    55,    16,    17,    51,    99,
     104,   105,    51,    51,    44,    95,    59,    60,    54,    18,
      18,    91,    92,    99,   104,    18,   105,    99,   104,   104,
      94,    94,   104,    55,    11,    12,    13,    14,    15,    21,
      22,    23,    24,    25,    26,    52,   105,    99,    45,    46,
      47,    49,    99,    18,    51,    52,    56,    58,    51,    52,
      52,    52,    52,    54,    54,    52,    30,   104,   104,   104,
     104,   104,   104,   104,   104,   104,    45,   104,    45,   104,
      55,    52,    55,    55,    51,    51,    51,    55,    51,    91,
      99,    91,    55,    55,    32,    36,    35,    39,    55,    30,
     105,    52,    18,    91,    52,    52,    94,    94,    51,    51,
      52,    55,    52,    52,    33,    34,    37,   104,   104,    55,
      55,    94,    55,    55,    52,    52,    34,    55,    55,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    65,    65,    66,
      66,    67,    68,    68,    69,    70,    70,    71,    71,    72,
      73,    73,    74,    74,    75,    75,    76,    76,    77,    77,
      78,    78,    78,    79,    79,    80,    81,    81,    82,    82,
      82,    82,    83,    83,    84,    84,    85,    85,    86,    87,
      87,    88,    88,    89,    90,    90,    91,    91,    92,    92,
      93,    93,    93,    94,    94,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    96,    97,    98,    98,
      98,    98,    98,    98,    99,    99,   100,   100,   101,   102,
     103,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   105,   105,   105,
     105,   105,   106,   106,   106,   107,   107,   107
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     8,     6,     5,     5,     4,     0,     3,     2,
       1,     4,     2,     1,     3,     0,     3,     2,     1,     8,
       1,     3,     0,     2,     2,     1,     6,     5,     2,     1,
       0,     3,     2,     2,     1,     3,     3,     1,     1,     4,
       4,     3,     2,     1,     9,     8,     3,     1,     2,     3,
       2,     2,     1,     3,     3,     1,     0,     1,     3,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     4,     5,     5,     6,     7,
       7,     5,     4,     4,     1,     1,    10,     8,     8,     9,
       9,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     4,     4,
       1,     1,     3,     3,     3,     6,     6,     6
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
#line 79 "astree.y" /* yacc.c:1646  */
    {
                                                if(RET_TYPE != TypeTableLookUp(T,"int"))
                                                {
                                                    printf("line %d :Return type does not match\n",line);
                                                    exit(1);
                                                }
                                                RET_TYPE = NULL;
                                                gst = GSTInstall(gst,TypeTableLookUp(T,"int"),NULL,FUNCTION,"main",1,Parserparam,lst);
                                                gst_node_temp = GSTLookUp(gst,"main");
                                                gst_node_temp->lst = lst;
                                                lst = LSTDelete(lst);
                                                (yyval.node) = makeTreeNode(FUNCTION,TypeTableLookUp(T,"int"),NULL,"main",-1,-1,(yyvsp[-1].node),NULL,gst_node_temp,"main");
                                                Parserparam = ParamDelete(Parserparam);
                                                ASTPrintTree((yyval.node));
                                                printf("\n");
                                                stack = push(stack,(yyval.node),gst_node_temp->lst,NULL);
                                                (yyval.node) = ASTDelete((yyval.node));
                                            }
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 100 "astree.y" /* yacc.c:1646  */
    {
								RET_TYPE = (yyvsp[-2].node)->type;
								ast_node_temp = makeTreeNode(RETURN,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"RETURN");
								(yyval.node) = makeTreeNode(STATEMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-4].node),ast_node_temp,NULL,"STATEMENT");
							}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 105 "astree.y" /* yacc.c:1646  */
    {
								RET_TYPE = (yyvsp[-2].node)->type;
								ast_node_temp = makeTreeNode(RETURN,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"RETURN");
								(yyval.node) = makeTreeNode(STATEMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,NULL,ast_node_temp,NULL,"STATEMENT");
							}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 113 "astree.y" /* yacc.c:1646  */
    {
                                        (yyval.node) = NULL;
                                        printf("Parsing Completed\n");
                                        printGST(gst);
                                        printf("\n");
                                        printClassTable(C);
                                        printf("\n");
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
                                            printLST(tstack->lst);
                                            printf("\n");
                                            code_generator(ft,tstack->ast,gst,tstack->lst,tstack->class);
                                        }
                                        exit(1);
							        }
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 138 "astree.y" /* yacc.c:1646  */
    {
                                        (yyval.node) = NULL;
                                        printf("Parsing Completed\n");
                                        printGST(gst);
                                        printf("\n");
                                        printClassTable(C);
                                        printf("\n");
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
                                            printLST(tstack->lst);
                                            printf("\n");
                                            code_generator(ft,tstack->ast,gst,tstack->lst,tstack->class);
                                        }
                                        exit(1);
							        }
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 165 "astree.y" /* yacc.c:1646  */
    {}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 166 "astree.y" /* yacc.c:1646  */
    {printTypeTable(T);}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 168 "astree.y" /* yacc.c:1646  */
    {}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 169 "astree.y" /* yacc.c:1646  */
    {}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 171 "astree.y" /* yacc.c:1646  */
    {
                                                if(F->entry > 8)
                                                {
                                                    printf("*line %d: User-Defined data type cannot have more than 8 field\n",line);
                                                    exit(1);
                                                }
                                                T = installTypeTableNode(T,(yyvsp[-3].node)->varname,8,F);
                                                ValidateFieldList(TypeTableLookUp(T,(yyvsp[-3].node)->varname),NULL);
                                                F = initFieldList();
                                            }
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 182 "astree.y" /* yacc.c:1646  */
    {}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 183 "astree.y" /* yacc.c:1646  */
    {}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 185 "astree.y" /* yacc.c:1646  */
    {
                                                if(!class_section)
                                                    F = installField(T,C,F,(yyvsp[-1].node)->varname,top_string(TYPE_STACK));
                                                else
                                                    C->tail = installClassFieldNode(C->tail,C,T,(yyvsp[-1].node)->varname,top_string(TYPE_STACK));
                                                TYPE_STACK = pop_string(TYPE_STACK);
                                            }
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 195 "astree.y" /* yacc.c:1646  */
    {}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 196 "astree.y" /* yacc.c:1646  */
    {}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 198 "astree.y" /* yacc.c:1646  */
    {}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 201 "astree.y" /* yacc.c:1646  */
    {
                                                                                                    if(C->tail->fieldCount > 8)
                                                                                                    {
                                                                                                        printf("*line %d : Class cannot have more than 8 field\n",line);
                                                                                                        exit(1);
                                                                                                    }
                                                                                                    if(C->tail->methodCount > 8)
                                                                                                    {
                                                                                                        printf("*line %d : Class cannot have more than 8 methods\n",line);
                                                                                                        exit(1);
                                                                                                    }
                                                                                                    ValidateFieldList(NULL,ClassTableLookUp(C,top_string(TYPE_STACK)));
                                                                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                                                                }
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 216 "astree.y" /* yacc.c:1646  */
    {
                                                                                                    C = installClassTableNode(C,T,(yyvsp[0].node)->varname,NULL);
                                                                                                    TYPE_STACK = push_string(TYPE_STACK,(yyvsp[0].node)->varname);
                                                                                                }
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 220 "astree.y" /* yacc.c:1646  */
    {
                                                                                                    if(!ClassTableLookUp(C,(yyvsp[0].node)->varname))
                                                                                                    {
                                                                                                        printf("*line %d : Class \"%s\" not defined\n",line,(yyvsp[0].node)->varname);
                                                                                                        exit(0);
                                                                                                    }
                                                                                                    C = installClassTableNode(C,T,(yyvsp[-2].node)->varname,(yyvsp[0].node)->varname);
                                                                                                    C->tail = inheritMemberField(C->tail);
                                                                                                    C->tail = inheritMethod(C->tail);
                                                                                                    TYPE_STACK = push_string(TYPE_STACK,(yyvsp[-2].node)->varname);
                                                                                                }
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 232 "astree.y" /* yacc.c:1646  */
    {}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 233 "astree.y" /* yacc.c:1646  */
    {}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 235 "astree.y" /* yacc.c:1646  */
    {}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 236 "astree.y" /* yacc.c:1646  */
    {}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 238 "astree.y" /* yacc.c:1646  */
    {
                                                                                                    C->tail = installClassMethodListNode(C->tail,C,TypeTableLookUp(T,top_string(TYPE_STACK)),(yyvsp[-4].node)->varname,Parserparam);
                                                                                                    Parserparam = ParamDelete(Parserparam);
                                                                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                                                                }
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 243 "astree.y" /* yacc.c:1646  */
    {
                                                                                                    C->tail = installClassMethodListNode(C->tail,C,TypeTableLookUp(T,top_string(TYPE_STACK)),(yyvsp[-3].node)->varname,Parserparam);
                                                                                                    Parserparam = ParamDelete(Parserparam);
                                                                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                                                                }
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 249 "astree.y" /* yacc.c:1646  */
    {}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 250 "astree.y" /* yacc.c:1646  */
    {}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 254 "astree.y" /* yacc.c:1646  */
    {}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 255 "astree.y" /* yacc.c:1646  */
    {}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 256 "astree.y" /* yacc.c:1646  */
    {}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 258 "astree.y" /* yacc.c:1646  */
    {}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 259 "astree.y" /* yacc.c:1646  */
    {}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 261 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = pop_string(TYPE_STACK);}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 263 "astree.y" /* yacc.c:1646  */
    {}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 264 "astree.y" /* yacc.c:1646  */
    {}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 266 "astree.y" /* yacc.c:1646  */
    {
                                                    if(ClassTableLookUp(C,top_string(TYPE_STACK)))
								                        gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),ClassTableLookUp(C,top_string(TYPE_STACK)),VARIABLE,(yyvsp[0].node)->varname,2,NULL,lst);
                                                    else
                                                        gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),ClassTableLookUp(C,top_string(TYPE_STACK)),VARIABLE,(yyvsp[0].node)->varname,1,NULL,lst);
                                                    lst = LSTDelete(lst);
							                    }
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 273 "astree.y" /* yacc.c:1646  */
    {
                                                    if(ClassTableLookUp(C,top_string(TYPE_STACK)))
                                                    {
                                                        printf("*line %d : Cannot declare array of class\n",line);
                                                        exit(0);
                                                    }
                                                    if(strcmp(top_string(TYPE_STACK),"int") != 0 && strcmp(top_string(TYPE_STACK),"str") != 0)
                                                    {
                                                        printf("*line %d : Cannot declare array of user-data type\n",line);
                                                        exit(1);
                                                    }
								                    gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,ARRAY_VARIABLE,(yyvsp[-3].node)->varname,(yyvsp[-1].node)->val,NULL,lst);
                                                    lst = LSTDelete(lst);
							                    }
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 287 "astree.y" /* yacc.c:1646  */
    {
                                                    if(ClassTableLookUp(C,top_string(TYPE_STACK)))
                                                    {
                                                        printf("*line %d : Function cannot have return type as a class\n",line);
                                                        exit(0);
                                                    }
                                                    gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,FUNCTION,(yyvsp[-3].node)->varname,1,Parserparam,lst);
                                                    lst = LSTDelete(lst);
                                                    Parserparam = ParamDelete(Parserparam);
							                    }
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 297 "astree.y" /* yacc.c:1646  */
    {
                                                    if(ClassTableLookUp(C,top_string(TYPE_STACK)))
                                                    {
                                                        printf("*line %d : Function cannot have return type as a class\n",line);
                                                        exit(0);
                                                    }
								                    gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,FUNCTION,(yyvsp[-2].node)->varname,1,Parserparam,lst);
                                                    lst = LSTDelete(lst);
                                                    Parserparam = ParamDelete(Parserparam);
							                    }
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 310 "astree.y" /* yacc.c:1646  */
    {}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 311 "astree.y" /* yacc.c:1646  */
    {}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 314 "astree.y" /* yacc.c:1646  */
    {
                                                if(!class_section)
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
                                                    (yyval.node) = makeTreeNode(FUNCTION,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,(yyvsp[-7].node)->varname,-1,-1,(yyvsp[-1].node),NULL,gst_node_temp,"FUNCTION");
                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                    printGST(gst);
                                                    printClassTable(C);
                                                    ASTPrintTree((yyval.node));
                                                    printf("\n");
                                                    stack = push(stack,(yyval.node),gst_node_temp->lst,NULL);
                                                    (yyval.node) = ASTDelete((yyval.node));
                                                }
                                                else
                                                {
                                                    method_list_node_temp = MethodLookUp(C->tail,(yyvsp[-7].node)->varname);
                                                    if(!method_list_node_temp || (!method_list_node_temp->overridden && method_list_node_temp->inherited))
                                                    {
                                                        printf("line %d :\"%s\" function not declared in class\n",line,(yyvsp[-7].node)->varname);
                                                        exit(1);
                                                    }
                                                    if(TypeTableLookUp(T,top_string(TYPE_STACK)) != method_list_node_temp->type)
                                                    {
                                                        printf("line %d :Invalid return type for \"%s\"\n",line,(yyvsp[-7].node)->varname);
                                                        exit(1);
                                                    }
                                                    if(!checkParamList(Parserparam,method_list_node_temp->param)){
                                                        printf("line %d :Number of Formal Arguments does not match with declaration\n",line);
                                                        exit(1);
                                                    }
                                                    if(RET_TYPE != method_list_node_temp->type){
                                                        printf("*line %d :Return type does not match\n",line);
                                                        exit(1);
                                                    }
                                                    RET_TYPE = NULL;
                                                    Parserparam = ParamDelete(Parserparam);
                                                    (yyval.node) = makeTreeNode(FUNCTION,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,(yyvsp[-7].node)->varname,-1,-1,(yyvsp[-1].node),NULL,NULL,"FUNCTION");
                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                    printGST(gst);
                                                    printClassTable(C);
                                                    ASTPrintTree((yyval.node));
                                                    printf("\n");
                                                    stack = push(stack,(yyval.node),lst,C->tail);
                                                    lst = LSTDelete(lst);
                                                    (yyval.node) = ASTDelete((yyval.node));
                                                }
                                            }
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 382 "astree.y" /* yacc.c:1646  */
    {
                                                if(!class_section)
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
                                                    (yyval.node) = makeTreeNode(FUNCTION,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,(yyvsp[-6].node)->varname,-1,-1,(yyvsp[-1].node),NULL,gst_node_temp,"FUNCTION");
                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                    printGST(gst);
                                                    printClassTable(C);
                                                    ASTPrintTree((yyval.node));
                                                    printf("\n");
                                                    stack = push(stack,(yyval.node),gst_node_temp->lst,NULL);
                                                    (yyval.node) = ASTDelete((yyval.node));
                                                }
                                                else
                                                {
                                                    method_list_node_temp = MethodLookUp(C->tail,(yyvsp[-6].node)->varname);
                                                    if(!method_list_node_temp || (!method_list_node_temp->overridden && method_list_node_temp->inherited))
                                                    {
                                                        printf("line %d :\"%s\" function not declared in class\n",line,(yyvsp[-6].node)->varname);
                                                        exit(1);
                                                    }
                                                    if(TypeTableLookUp(T,top_string(TYPE_STACK)) != method_list_node_temp->type)
                                                    {
                                                        printf("line %d :Invalid return type for \"%s\"\n",line,(yyvsp[-6].node)->varname);
                                                        exit(1);
                                                    }
                                                    if(!checkParamList(Parserparam,method_list_node_temp->param)){
                                                        printf("line %d :Number of Formal Arguments does not match with declaration\n",line);
                                                        exit(1);
                                                    }
                                                    if(RET_TYPE != method_list_node_temp->type){
                                                        printf("*line %d :Return type does not match\n",line);
                                                        exit(1);
                                                    }
                                                    RET_TYPE = NULL;
                                                    Parserparam = ParamDelete(Parserparam);
                                                    (yyval.node) = makeTreeNode(FUNCTION,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,(yyvsp[-6].node)->varname,-1,-1,(yyvsp[-1].node),NULL,NULL,"FUNCTION");
                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                    printGST(gst);
                                                    printClassTable(C);
                                                    ASTPrintTree((yyval.node));
                                                    printf("\n");
                                                    stack = push(stack,(yyval.node),lst,C->tail);
                                                    lst = LSTDelete(lst);
                                                    (yyval.node) = ASTDelete((yyval.node));
                                                }
                                            }
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 452 "astree.y" /* yacc.c:1646  */
    {}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 453 "astree.y" /* yacc.c:1646  */
    {}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 455 "astree.y" /* yacc.c:1646  */
    {
                                                    Parserparam = ParamInsert(Parserparam,(yyvsp[0].node)->varname,TypeTableLookUp(T,top_string(TYPE_STACK)),VARIABLE);
                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                }
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 462 "astree.y" /* yacc.c:1646  */
    {lst = ParamToLSTInstall(lst,Parserparam);}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 463 "astree.y" /* yacc.c:1646  */
    {lst = ParamToLSTInstall(lst,Parserparam);}
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 465 "astree.y" /* yacc.c:1646  */
    {}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 466 "astree.y" /* yacc.c:1646  */
    {}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 468 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = pop_string(TYPE_STACK);}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 470 "astree.y" /* yacc.c:1646  */
    {lst = LSTInstall(lst,(yyvsp[0].node)->varname,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,VARIABLE);}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 471 "astree.y" /* yacc.c:1646  */
    {lst = LSTInstall(lst,(yyvsp[0].node)->varname,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,VARIABLE);}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 475 "astree.y" /* yacc.c:1646  */
    {}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 476 "astree.y" /* yacc.c:1646  */
    {}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 478 "astree.y" /* yacc.c:1646  */
    {paramAST = insertASTParam(paramAST,(yyvsp[0].node));}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 479 "astree.y" /* yacc.c:1646  */
    {paramAST = (yyvsp[0].node);}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 483 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = push_string(TYPE_STACK,"int");}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 484 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = push_string(TYPE_STACK,"str");}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 485 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = push_string(TYPE_STACK,(yyvsp[0].node)->varname);}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 489 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = makeTreeNode(STATEMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-1].node),(yyvsp[0].node),NULL,"STATEMENT");}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 490 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 493 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 494 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 495 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 496 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 497 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 498 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 499 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 500 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 501 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 502 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 503 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-3].node);}
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 505 "astree.y" /* yacc.c:1646  */
    {
                                                if((yyvsp[-2].node)->nodetype == FUNCTION || (yyvsp[-2].node)->nodetype == FIELDFUNCTION)
                                                {
                                                    printf("*line %d: function cannot be a parameter to read\n",line);
                                                    exit(0);
                                                }
                                                if((yyvsp[-2].node)->type == TypeTableLookUp(T,"int") || (yyvsp[-2].node)->type == TypeTableLookUp(T,"str"))
                                                    (yyval.node) = makeTreeNode(READ,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"Read");
                                                else
                                                {
                                                    printf("*line %d: invalid parameter type to read\n",line);
                                                    exit(0);
                                                }
                                            }
#line 2308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 520 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = makeTreeNode(WRITE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"Write");}
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 522 "astree.y" /* yacc.c:1646  */
    {
                                                if((yyvsp[-5].node)->type != TypeTableLookUp(T,"int") && (yyvsp[-5].node)->type != TypeTableLookUp(T,"str") && (yyvsp[-5].node)->nodetype != FUNCTION)
                                                    (yyval.node) = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-5].node),(yyvsp[-3].node),NULL,"=");
                                                else
                                                {
                                                    printf("*line %d: alloc() must be called for user-defined data types\n",line);
                                                    exit(0);
                                                }
                                            }
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 531 "astree.y" /* yacc.c:1646  */
    {
                                                if((yyvsp[-6].node)->type == TypeTableLookUp(T,"int") && (yyvsp[-6].node)->nodetype != FUNCTION && (yyvsp[-2].node)->type != TypeTableLookUp(T,"int") && (yyvsp[-2].node)->type != TypeTableLookUp(T,"str") && (yyvsp[-2].node)->nodetype != ARRAY_VARIABLE && (yyvsp[-2].node)->nodetype != FUNCTION)
                                                {
                                                    (yyvsp[-4].node)->left = (yyvsp[-2].node);
                                                    (yyval.node) = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-6].node),(yyvsp[-4].node),NULL,"=");
                                                }
                                                else
                                                {
                                                    printf("*line %d: Semantic Error for Free()\n",line);
                                                    exit(0);
                                                }
                                            }
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 543 "astree.y" /* yacc.c:1646  */
    {
                                                curr_classtableentry = ClassTableLookUp(C,(yyvsp[-2].node)->varname);
                                                if(!curr_classtableentry)
                                                {
                                                    printf("*line %d: Class \"%s\" is not defined\n",line,(yyvsp[-2].node)->varname);
                                                    exit(0);
                                                }
                                                if(!(yyvsp[-6].node)->type && (yyvsp[-6].node)->class && (yyvsp[-6].node)->nodetype != FUNCTION)
                                                {
                                                    if(checkInheritence((yyvsp[-6].node)->class,curr_classtableentry))
                                                    {
                                                        struct AST_Node *temp0,*temp1;
                                                        temp0 = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-6].node),(yyvsp[-4].node),NULL,"=");
                                                        temp1 = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-6].node),(yyvsp[-2].node),NULL,"vftpointerassg");
                                                        (yyval.node) = makeTreeNode(NEW,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,temp0,temp1,NULL,"new");
                                                    }
                                                    else
                                                    {
                                                        printf("*line %d: Class \"%s\" is not descendant of \"%s\"\n",line,(yyvsp[-2].node)->varname,(yyvsp[-6].node)->class->name);
                                                        exit(0);
                                                    }
                                                }
                                                else
                                                {
                                                    printf("*line %d: Variable \"%s\" not an object of a class\n",line,(yyvsp[-6].node)->varname);
                                                    exit(0);
                                                }
                                            }
#line 2378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 571 "astree.y" /* yacc.c:1646  */
    {
                                                if((yyvsp[-2].node)->class && !(yyvsp[-2].node)->type && (yyvsp[-2].node)->nodetype != FUNCTION && (yyvsp[-2].node)->nodetype != ARRAY_VARIABLE)
                                                {
                                                    (yyvsp[-4].node)->left = (yyvsp[-2].node);
                                                    (yyval.node) = makeTreeNode(DELETE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-4].node),(yyvsp[-2].node),NULL,"delete");
                                                }
                                                else
                                                {
                                                    printf("*line %d: Only objects of a class can be argumnets\n",line);
                                                    exit(0);
                                                }
                                            }
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 583 "astree.y" /* yacc.c:1646  */
    {
                                                if((yyvsp[-3].node)->type && (yyvsp[-1].node)->type && (yyvsp[-3].node)->type == (yyvsp[-1].node)->type && ((yyvsp[-3].node)->nodetype != FUNCTION))
                                                    (yyval.node) = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-3].node),(yyvsp[-1].node),NULL,"=");
                                                else if((yyvsp[-3].node)->class && (yyvsp[-1].node)->class && checkInheritence((yyvsp[-3].node)->class,(yyvsp[-1].node)->class))
                                                    (yyval.node) = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-3].node),(yyvsp[-1].node),NULL,"=");
                                                else{
                                                    printf("line %d :Invalid assignment to \"%s\"\n",line,(yyvsp[-3].node)->varname);
                                                    exit(1);
                                                }
                                            }
#line 2410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 593 "astree.y" /* yacc.c:1646  */
    {
                                                if((yyvsp[-3].node)->type != TypeTableLookUp(T,"int") && (yyvsp[-3].node)->type != TypeTableLookUp(T,"str") && (yyvsp[-3].node)->nodetype != FUNCTION)
                                                    (yyval.node) = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-3].node),(yyvsp[-1].node),NULL,"=");
                                                else
                                                {
                                                    printf("*line %d: NULL cannot be assigned to primitive data-types\n",line);
                                                    exit(0);
                                                } 
                                            }
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 603 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 604 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 606 "astree.y" /* yacc.c:1646  */
    {
                                                                if(!typeCheckBool((yyvsp[-7].node))){
                                                                    printf("line %d: Invalid conditional statement\n",line);
                                                                    exit(1);
                                                                }
                                                                struct AST_Node *temp1 = makeTreeNode(IF,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-7].node),(yyvsp[-4].node),NULL,"IF");
                                                                struct AST_Node *temp2 = makeTreeNode(ELSE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"ELSE");
                                                                (yyval.node) = makeTreeNode(IF_ELSE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,temp1,temp2,NULL,"IF_ELSE");
                                                            }
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 615 "astree.y" /* yacc.c:1646  */
    {
                                                                if(!typeCheckBool((yyvsp[-5].node))){
                                                                    printf("line %d :Invalid boolean statement\n",line);
                                                                    exit(1);
                                                                }
                                                                struct AST_Node *temp1 = makeTreeNode(IF,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-5].node),(yyvsp[-2].node),NULL,"IF");
                                                                (yyval.node) = makeTreeNode(IF_ELSE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,temp1,NULL,NULL,"IF_ELSE");
                                                            }
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 624 "astree.y" /* yacc.c:1646  */
    {
                                                                if(typeCheckBool((yyvsp[-5].node)))
                                                                    (yyval.node) = makeTreeNode(WHILE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-5].node),(yyvsp[-2].node),NULL,"WHILE");
                                                                else{
                                                                    printf("line %d :Invalid bool statement\n",line);
                                                                    exit(1);
                                                                }
                                                            }
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 633 "astree.y" /* yacc.c:1646  */
    {
                                                                    if(typeCheckBool((yyvsp[-2].node)))
                                                                        (yyval.node) = makeTreeNode(REPEAT_UNTIL,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-6].node),(yyvsp[-2].node),NULL,"REPEAT_UNTIL");
                                                                    else{
                                                                        printf("line %d :Invalid bool statement\n",line);
                                                                        exit(1);
                                                                    }
                                                                }
#line 2489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 642 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckBool((yyvsp[-2].node)))
                                                                (yyval.node) = makeTreeNode(DO_WHILE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-6].node),(yyvsp[-2].node),NULL,"DO_WHILE");
                                                            else{
                                                                printf("line %d :Invalid bool statement\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 652 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,NULL,PLUS,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"+");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 660 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,NULL,MINUS,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"-");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 668 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,NULL,MUL,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"*");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 676 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,NULL,DIV,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"/");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 684 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,NULL,MOD,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"%");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 692 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,LT,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"<");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 700 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,LE,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"<=");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 708 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,GT,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,">");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 716 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,GE,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,">=");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 724 "astree.y" /* yacc.c:1646  */
    {
                                                            if((typeCheckExp((yyvsp[-2].node)) || (!typeCheckExp((yyvsp[-2].node)) && !typeCheckBool((yyvsp[-2].node)))) && ((yyvsp[0].node)->nodetype == NULL_ || typeCheckExp((yyvsp[0].node)) || (!typeCheckExp((yyvsp[0].node)) && !typeCheckBool((yyvsp[0].node)))))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,NE,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"!=");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 732 "astree.y" /* yacc.c:1646  */
    {
                                                            if((typeCheckExp((yyvsp[-2].node)) || (!typeCheckExp((yyvsp[-2].node)) && !typeCheckBool((yyvsp[-2].node)))) && ((yyvsp[0].node)->nodetype == NULL_ || typeCheckExp((yyvsp[0].node)) || (!typeCheckExp((yyvsp[0].node)) && !typeCheckBool((yyvsp[0].node)))))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,EQ,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"==");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 740 "astree.y" /* yacc.c:1646  */
    {
                                                            if(!typeCheckExp((yyvsp[-2].node)) && !typeCheckBool((yyvsp[-2].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,EQ,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"==");
                                                            else
                                                            {
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 749 "astree.y" /* yacc.c:1646  */
    {
                                                            if(!typeCheckExp((yyvsp[-2].node)) && !typeCheckBool((yyvsp[-2].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,NE,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"!=");
                                                            else
                                                            {
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 758 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 759 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 760 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 763 "astree.y" /* yacc.c:1646  */
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
                                                                {
                                                                    (yyval.node)->type = gst_node_temp->type;
                                                                    (yyval.node)->class = gst_node_temp->class;
                                                                }
                                                            }
                                                        }
#line 2714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 781 "astree.y" /* yacc.c:1646  */
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
                                                                (yyval.node) = makeTreeNode(ARRAY_VARIABLE,(yyvsp[-3].node)->type,NULL,(yyvsp[-3].node)->varname,-1,-1,(yyvsp[-3].node),(yyvsp[-1].node),NULL,"ARRAY_VARIABLE");
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
                                                                    (yyval.node) = makeTreeNode(ARRAY_VARIABLE,(yyvsp[-3].node)->type,NULL,(yyvsp[-3].node)->varname,-1,-1,(yyvsp[-3].node),(yyvsp[-1].node),gst_node_temp,"ARRAY_VARIABLE");
                                                                }
                                                            }
                                                        }
#line 2750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 812 "astree.y" /* yacc.c:1646  */
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
                                                            if(!checkASTParam(gst_node_temp->param,paramAST)){
                                                                printf("line %d :Wrong arguments in \"%s\", does not match with declaration\n",line,(yyvsp[-3].node)->varname);
                                                                exit(1);
                                                            }
                                                            (yyvsp[-3].node)->nodetype = FUNCTION;
                                                            (yyvsp[-3].node)->type = gst_node_temp->type;
                                                            (yyvsp[-3].node)->param = paramAST;
                                                            paramAST = NULL;
                                                            (yyval.node) = (yyvsp[-3].node);
                                                        }
#line 2775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 832 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 833 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 837 "astree.y" /* yacc.c:1646  */
    {
                                if(curr_classtableentry)
                                {
                                    printf("*line %d: Private member access error\n",line);
                                    exit(0);
                                }
                                struct FieldListNode *found = FieldListLookUp(curr_typetableentry,(yyvsp[0].node)->varname);
                                if(!found)
                                {
                                    printf("*line %d: \"%s\" does not contain \"%s\" as a field\n",line,curr_typetableentry->name,(yyvsp[0].node)->varname);
                                    exit(1);
                                }
                                (yyvsp[0].node)->type = found->type;
                                (yyval.node) = makeTreeNode(FIELD,(yyvsp[0].node)->type,NULL,(yyvsp[0].node)->varname,-1,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"FIELD");
                                curr_typetableentry = found->type;
                                curr_classtableentry = NULL;
                            }
#line 2809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 854 "astree.y" /* yacc.c:1646  */
    {
                                curr_typetableentry = NULL;
                                curr_classtableentry = NULL;
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
                                if(curr_typetableentry == NULL)
                                {
                                    printf("*line %d: Private member access error\n",line);
                                    exit(0);
                                }
                                struct FieldListNode *found = FieldListLookUp(curr_typetableentry,(yyvsp[0].node)->varname);
                                if(!found)
                                {
                                    printf("*line %d: \"%s\" does not contain \"%s\" as a field\n",line,curr_typetableentry->name,(yyvsp[0].node)->varname);
                                    exit(1);
                                }
                                (yyvsp[-2].node)->type = curr_typetableentry;
                                (yyvsp[-2].node)->class = NULL;
                                (yyvsp[0].node)->type = found->type;
                                (yyvsp[0].node)->class = NULL;
                                (yyval.node) = makeTreeNode(FIELD,(yyvsp[0].node)->type,NULL,(yyvsp[0].node)->varname,-1,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"FIELD");
                                curr_typetableentry = found->type;
                                curr_classtableentry = NULL;
                            }
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 889 "astree.y" /* yacc.c:1646  */
    {
                                curr_classtableentry = NULL;
                                curr_typetableentry = NULL;
                                if(!class_section)
                                {
                                    printf("*line %d: Invalid identifier \"self\"\n",line);
                                    exit(0);
                                }
                                (yyvsp[-2].node)->type = NULL;
                                (yyvsp[-2].node)->class = C->tail;
                                struct FieldListNode *found = ClassFieldLookUp(C->tail,(yyvsp[0].node)->varname);
                                if(!found)
                                {
                                    printf("*line %d: Class \"%s\" does not have member field \"%s\"\n",line,C->tail->name,(yyvsp[0].node)->varname);
                                    exit(0);
                                }
                                (yyvsp[0].node)->type = found->type;
                                (yyvsp[0].node)->class = found->class;
                                (yyval.node) = makeTreeNode(FIELD,(yyvsp[0].node)->type,(yyvsp[0].node)->class,(yyvsp[0].node)->varname,-1,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"FIELD");
                                curr_typetableentry = (yyvsp[0].node)->type;
                                curr_classtableentry = (yyvsp[0].node)->class;
                            }
#line 2876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 912 "astree.y" /* yacc.c:1646  */
    {
                                                                method_list_node_temp = MethodLookUp((yyvsp[-5].node)->class,(yyvsp[-3].node)->varname);
                                                                if(!method_list_node_temp)
                                                                {
                                                                    printf("*line %d : No method \"%s\" in \"%s\"\n",line,(yyvsp[-3].node)->varname,(yyvsp[-5].node)->varname);
                                                                    exit(0);
                                                                }
                                                                if(!checkASTParam(method_list_node_temp->param,paramAST))
                                                                {
                                                                    printf("line %d :Arguments in \"%s\", does not match with declaration in class \"%s\"\n",line,(yyvsp[-3].node)->varname,(yyvsp[-5].node)->varname);
                                                                    exit(0);
                                                                }
                                                                (yyvsp[-3].node)->nodetype = FUNCTION;
                                                                (yyvsp[-3].node)->type = method_list_node_temp->type;
                                                                (yyvsp[-3].node)->class = NULL;
                                                                (yyvsp[-3].node)->param = paramAST;
                                                                (yyval.node) = makeTreeNode(FIELDFUNCTION,(yyvsp[-3].node)->type,(yyvsp[-3].node)->class,(yyvsp[-3].node)->varname,-1,-1,(yyvsp[-5].node),(yyvsp[-3].node),NULL,"fieldfunction");
                                                                paramAST = NULL;
                                                            }
#line 2900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 931 "astree.y" /* yacc.c:1646  */
    {
                                                                gst_node_temp = GSTLookUp(gst,(yyvsp[-5].node)->varname);
                                                                if(!gst_node_temp)
                                                                {
                                                                    printf("*line %d : Class variable \"%s\" not declared\n",line,(yyvsp[-5].node)->varname);
                                                                    exit(0);
                                                                }
                                                                if(!gst_node_temp->class)
                                                                {
                                                                    printf("*line %d : Variable \"%s\" is not of class type\n",line,(yyvsp[-5].node)->varname);
                                                                    exit(0);
                                                                }
                                                                method_list_node_temp = MethodLookUp(gst_node_temp->class,(yyvsp[-3].node)->varname);
                                                                if(!method_list_node_temp)
                                                                {
                                                                    printf("*line %d : No method \"%s\" in class \"%s\"\n",line,(yyvsp[-3].node)->varname,(yyvsp[-5].node)->varname);
                                                                    exit(0);
                                                                }
                                                                if(!checkASTParam(method_list_node_temp->param,paramAST))
                                                                {
                                                                    printf("line %d :Arguments in \"%s\", does not match with declaration in class \"%s\"\n",line,(yyvsp[-3].node)->varname,gst_node_temp->class->name);
                                                                    exit(0);
                                                                }
                                                                (yyvsp[-5].node)->nodetype = VARIABLE;
                                                                (yyvsp[-5].node)->type = gst_node_temp->type;
                                                                (yyvsp[-5].node)->class = gst_node_temp->class;
                                                                (yyvsp[-3].node)->nodetype = FUNCTION;
                                                                (yyvsp[-3].node)->type = method_list_node_temp->type;
                                                                (yyvsp[-3].node)->class = NULL;
                                                                (yyvsp[-3].node)->param = paramAST;
                                                                (yyval.node) = makeTreeNode(FIELDFUNCTION,(yyvsp[-3].node)->type,(yyvsp[-3].node)->class,(yyvsp[-3].node)->varname,-1,-1,(yyvsp[-5].node),(yyvsp[-3].node),NULL,"fieldfunction");
                                                                paramAST = NULL;
                                                            }
#line 2938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 964 "astree.y" /* yacc.c:1646  */
    {
                                                                if(!class_section)
                                                                {
                                                                    printf("*line %d : Invalid identifier\n",line);
                                                                    exit(0);
                                                                }
                                                                method_list_node_temp = MethodLookUp(C->tail,(yyvsp[-3].node)->varname);
                                                                if(!method_list_node_temp)
                                                                {
                                                                    printf("*line %d: Class \"%s\" does not have method \"%s\"\n",line,C->tail->name,(yyvsp[-3].node)->varname);
                                                                    exit(0);
                                                                }
                                                                if(!checkASTParam(method_list_node_temp->param,paramAST))
                                                                {
                                                                    printf("line %d :Arguments in \"%s\", does not match with declaration in class \"%s\"\n",line,(yyvsp[-3].node)->varname,(yyvsp[-5].node)->varname);
                                                                    exit(0);
                                                                }
                                                                (yyvsp[-5].node)->nodetype = VARIABLE;
                                                                (yyvsp[-5].node)->type = NULL;
                                                                (yyvsp[-5].node)->class = C->tail;
                                                                (yyvsp[-3].node)->nodetype = FUNCTION;
                                                                (yyvsp[-3].node)->type = method_list_node_temp->type;
                                                                (yyvsp[-3].node)->class = NULL;
                                                                (yyvsp[-3].node)->param = paramAST;
                                                                (yyval.node) = makeTreeNode(FIELDFUNCTION,(yyvsp[-3].node)->type,(yyvsp[-3].node)->class,(yyvsp[-3].node)->varname,-1,-1,(yyvsp[-5].node),(yyvsp[-3].node),NULL,"fieldfunction");
                                                                paramAST = NULL;
                                                            }
#line 2970 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2974 "y.tab.c" /* yacc.c:1646  */
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
#line 992 "astree.y" /* yacc.c:1906  */

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
    C = initClassTable();
    curr_typetableentry = NULL;
    curr_classtableentry = NULL;
    paramAST = NULL;
    ADDR = 4096;
    LABEL = 0;
    class_section = 0;
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
