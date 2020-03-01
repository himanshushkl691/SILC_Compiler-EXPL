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
    _ALLOC = 298
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "astree.y" /* yacc.c:355  */

    struct AST_Node *node;

#line 218 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 235 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   401

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  221

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

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
      44,    45,     2,     2,    49,     2,    53,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    48,
       2,    52,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    98,   103,   110,   129,   148,   170,   171,
     173,   174,   176,   182,   183,   185,   189,   190,   192,   193,
     195,   197,   198,   200,   204,   208,   213,   221,   222,   224,
     255,   289,   290,   292,   299,   300,   302,   303,   305,   307,
     308,   312,   316,   322,   323,   324,   328,   329,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   343,   358,
     366,   375,   387,   395,   405,   406,   408,   417,   426,   435,
     444,   454,   462,   470,   478,   486,   494,   502,   510,   518,
     526,   534,   542,   543,   544,   547,   562,   593,   614,   633,
     637,   648
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
  "_BREAKPOINT", "_MAIN", "_RETURN", "_NULL", "_FREE", "_ALLOC", "'('",
  "')'", "'{'", "'}'", "';'", "','", "'['", "']'", "'='", "'.'", "$accept",
  "MainBlock", "Body", "Program", "TypeDefBlock", "TypeDefList", "TypeDef",
  "FieldDeclList", "FieldDecl", "GDeclBlock", "GDeclList", "GDecl",
  "GIdList", "GId", "FnDefBlock", "FnDef", "ParamList", "Param",
  "LDeclBlock", "LDeclList", "LDecl", "IdList", "ArgList", "Type", "Slist",
  "stmt", "Inputstmt", "Outputstmt", "Assgstmt", "stringExp", "Ifstmt",
  "Whilestmt", "RepeatUntil", "DoWhile", "expr", "id", "Field", YY_NULLPTR
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
     295,   296,   297,   298,    40,    41,   123,   125,    59,    44,
      91,    93,    61,    46
};
# endif

#define YYPACT_NINF -105

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-105)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,    17,    55,    25,    19,    44,  -105,  -105,    60,    53,
    -105,   256,   286,  -105,  -105,  -105,  -105,  -105,  -105,   110,
    -105,    99,    54,    53,  -105,   256,  -105,   102,    -8,  -105,
     106,  -105,  -105,     7,    61,  -105,    82,  -105,  -105,    94,
    -105,  -105,    91,   149,   118,  -105,    99,   104,   208,  -105,
    -105,    22,  -105,   148,   115,  -105,   175,   152,    23,  -105,
     286,  -105,  -105,   227,   180,   175,   162,  -105,  -105,   321,
    -105,   195,   223,   165,   180,   175,  -105,  -105,  -105,    84,
     214,   169,   174,   184,   188,   189,   198,   197,   200,   203,
      87,   242,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
     144,   199,  -105,   215,   180,  -105,   254,     3,    47,   263,
     267,    87,    47,    47,   315,   315,  -105,  -105,  -105,  -105,
    -105,    47,   235,   347,  -105,    87,  -105,   105,   272,  -105,
     240,  -105,  -105,    28,  -105,    86,  -105,   244,   251,    15,
     134,   183,   202,   150,   279,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,   258,   260,   265,   271,
     273,  -105,  -105,  -105,    87,  -105,   274,   276,   303,   308,
     310,   309,  -105,  -105,   171,   171,  -105,  -105,  -105,   352,
     352,   368,   368,   373,   373,   317,  -105,   267,   300,  -105,
    -105,  -105,  -105,   315,   315,   304,   306,  -105,   325,   337,
     261,   280,    47,    47,   338,  -105,   315,   339,   340,   166,
     182,  -105,   296,  -105,  -105,   343,   344,   345,  -105,  -105,
    -105
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
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,    48,    49,    50,    51,    52,    53,    54,
       0,    89,     2,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    83,
      65,     0,     0,    64,    84,     0,    46,     0,     0,    30,
       0,    39,    88,     0,    42,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    29,    87,     0,    86,     0,     0,     0,     0,
       0,     0,    82,     4,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,     0,    63,     0,     0,    62,
      41,    58,    59,     0,     0,     0,     0,     3,     0,     0,
       0,     0,     0,     0,     0,    60,     0,     0,     0,     0,
       0,    61,     0,    67,    68,     0,     0,     0,    70,    69,
      66
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -105,    38,   -60,  -105,  -105,  -105,   389,  -105,   367,  -105,
    -105,   377,  -105,   351,  -105,   374,   350,   341,   -45,  -105,
     331,  -105,  -105,    -7,  -104,   -89,  -105,  -105,  -105,   -98,
    -105,  -105,  -105,  -105,   -67,   -72,  -105
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    73,     2,     3,     5,     6,    28,    29,    11,
      19,    20,    34,    35,    25,    26,    51,    52,    64,    69,
      70,    79,   133,    53,    91,    92,    93,    94,    95,   122,
      96,    97,    98,    99,   123,   124,   101
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     100,    21,   126,     1,    27,    30,    16,    17,    18,   134,
     141,   142,    21,   138,   103,   119,   120,    80,    27,   100,
      74,    30,   145,   146,   147,   148,   149,   156,     8,   160,
     104,     4,   150,   151,   152,   153,   154,   155,   137,    40,
       9,   135,   100,   100,   130,   139,   140,   121,   132,    24,
      13,    43,   126,   126,   143,     7,    71,    44,     4,   119,
     168,    80,    71,    37,    15,    12,   190,    59,    66,   100,
     100,    60,    60,   163,    16,    17,    18,   164,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   200,
     201,   121,    22,   145,   146,   147,   148,   149,    36,   119,
     120,    80,   212,   150,   151,   152,   153,   154,   155,    45,
      46,   126,   126,    33,    31,   198,    39,   119,   120,    80,
      42,   100,   100,   126,    16,    17,    18,    47,   100,   100,
      54,   121,   105,   106,   100,   209,   210,   165,    48,    49,
     100,   145,   146,   147,   148,   149,   157,   158,   159,   121,
      56,   150,   151,   152,   153,   154,   155,   145,   146,   147,
     148,   149,    61,    16,    17,    18,    62,   150,   151,   152,
     153,   154,   155,   145,   146,   147,   148,   149,    63,   169,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   145,
     146,   147,   148,   149,    50,   172,   127,    80,    65,   150,
     151,   152,   153,   154,   155,    72,    81,    82,    75,    78,
      83,   215,   102,   110,    84,    85,    80,    86,   111,    87,
      88,    89,    16,    17,    18,    81,    82,   216,   112,    83,
     170,    68,   113,    84,    85,   114,    86,    80,    87,    88,
      89,    16,    17,    18,   115,   116,    81,    82,   117,   171,
      83,   118,   128,    57,    84,    85,    80,    86,   107,    87,
      88,    89,   129,    90,   108,    81,    82,   109,   131,    83,
      16,    23,    18,    84,    85,    80,    86,   136,    87,    88,
      89,    80,   125,   144,    81,    82,   161,   162,    83,   166,
     206,   207,    84,    85,    80,    86,   167,    87,    88,    89,
      16,    17,    18,    81,    82,   173,   185,    83,   186,   187,
      80,    84,    85,   208,    86,   188,    87,    88,    89,    81,
      82,   189,   191,    83,   192,    76,   217,    84,    85,    80,
      86,   193,    87,    88,    89,    16,    17,    18,    81,    82,
     194,   195,    83,   197,   196,   199,    84,    85,   202,    86,
     203,    87,    88,    89,   145,   146,   147,   148,   149,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     204,   152,   153,   154,   155,   145,   146,   147,   148,   149,
     145,   146,   147,   148,   149,   205,   211,   213,   214,   154,
     155,   218,   219,   220,    14,    41,    32,    55,    58,    38,
      77,    67
};

static const yytype_uint8 yycheck[] =
{
      72,     8,    91,     5,    11,    12,    14,    15,    16,   107,
     114,   115,    19,   111,    74,    12,    13,    14,    25,    91,
      65,    28,     7,     8,     9,    10,    11,   125,     3,   127,
      75,    14,    17,    18,    19,    20,    21,    22,   110,    47,
      15,   108,   114,   115,   104,   112,   113,    44,    45,    11,
       6,    44,   141,   142,   121,     0,    63,    50,    14,    12,
      45,    14,    69,    25,     4,    46,   164,    45,    45,   141,
     142,    49,    49,    45,    14,    15,    16,    49,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   193,
     194,    44,    39,     7,     8,     9,    10,    11,    44,    12,
      13,    14,   206,    17,    18,    19,    20,    21,    22,    48,
      49,   200,   201,    14,     4,   187,    14,    12,    13,    14,
      14,   193,   194,   212,    14,    15,    16,    45,   200,   201,
      12,    44,    48,    49,   206,   202,   203,    51,    44,    48,
     212,     7,     8,     9,    10,    11,    41,    42,    43,    44,
      46,    17,    18,    19,    20,    21,    22,     7,     8,     9,
      10,    11,    14,    14,    15,    16,    51,    17,    18,    19,
      20,    21,    22,     7,     8,     9,    10,    11,     3,    45,
       9,    10,    11,    17,    18,    19,    20,    21,    22,     7,
       8,     9,    10,    11,    45,    45,    52,    14,    46,    17,
      18,    19,    20,    21,    22,    25,    23,    24,    46,    14,
      27,    45,    47,    44,    31,    32,    14,    34,    44,    36,
      37,    38,    14,    15,    16,    23,    24,    45,    44,    27,
      47,     4,    44,    31,    32,    46,    34,    14,    36,    37,
      38,    14,    15,    16,    46,    48,    23,    24,    48,    47,
      27,    48,    53,    45,    31,    32,    14,    34,    44,    36,
      37,    38,    47,    40,    50,    23,    24,    53,    14,    27,
      14,    15,    16,    31,    32,    14,    34,    14,    36,    37,
      38,    14,    40,    48,    23,    24,    14,    47,    27,    45,
      29,    30,    31,    32,    14,    34,    45,    36,    37,    38,
      14,    15,    16,    23,    24,    26,    48,    27,    48,    44,
      14,    31,    32,    33,    34,    44,    36,    37,    38,    23,
      24,    48,    48,    27,    48,     4,    30,    31,    32,    14,
      34,    28,    36,    37,    38,    14,    15,    16,    23,    24,
      32,    31,    27,    26,    35,    45,    31,    32,    44,    34,
      44,    36,    37,    38,     7,     8,     9,    10,    11,     7,
       8,     9,    10,    11,    17,    18,    19,    20,    21,    22,
      45,    19,    20,    21,    22,     7,     8,     9,    10,    11,
       7,     8,     9,    10,    11,    48,    48,    48,    48,    21,
      22,    48,    48,    48,     5,    28,    19,    46,    48,    25,
      69,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    57,    58,    14,    59,    60,     0,     3,    15,
      55,    63,    46,     6,    60,     4,    14,    15,    16,    64,
      65,    77,    39,    15,    55,    68,    69,    77,    61,    62,
      77,     4,    65,    14,    66,    67,    44,    55,    69,    14,
      47,    62,    14,    44,    50,    48,    49,    45,    44,    48,
      45,    70,    71,    77,    12,    67,    46,    45,    70,    45,
      49,    14,    51,     3,    72,    46,    45,    71,     4,    73,
      74,    77,    25,    56,    72,    46,     4,    74,    14,    75,
      14,    23,    24,    27,    31,    32,    34,    36,    37,    38,
      40,    78,    79,    80,    81,    82,    84,    85,    86,    87,
      89,    90,    47,    56,    72,    48,    49,    44,    50,    53,
      44,    44,    44,    44,    46,    46,    48,    48,    48,    12,
      13,    44,    83,    88,    89,    40,    79,    52,    53,    47,
      56,    14,    45,    76,    83,    88,    14,    89,    83,    88,
      88,    78,    78,    88,    48,     7,     8,     9,    10,    11,
      17,    18,    19,    20,    21,    22,    83,    41,    42,    43,
      83,    14,    47,    45,    49,    51,    45,    45,    45,    45,
      47,    47,    45,    26,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    48,    48,    44,    44,    48,
      83,    48,    48,    28,    32,    31,    35,    26,    89,    45,
      78,    78,    44,    44,    45,    48,    29,    30,    33,    88,
      88,    48,    78,    48,    48,    45,    45,    30,    48,    48,
      48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    57,    58,    58,
      59,    59,    60,    61,    61,    62,    63,    63,    64,    64,
      65,    66,    66,    67,    67,    67,    67,    68,    68,    69,
      69,    70,    70,    71,    72,    72,    73,    73,    74,    75,
      75,    76,    76,    77,    77,    77,    78,    78,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    80,    81,
      82,    82,    82,    82,    83,    83,    84,    84,    85,    86,
      87,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    89,    89,    89,    89,    89,
      90,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     8,     6,     5,     4,     3,     2,     0,     3,
       2,     1,     4,     2,     1,     3,     3,     2,     2,     1,
       3,     3,     1,     1,     4,     4,     3,     2,     1,     9,
       8,     3,     1,     2,     3,     2,     2,     1,     3,     3,
       1,     3,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     5,     5,
       6,     7,     4,     4,     1,     1,    10,     8,     8,     9,
       9,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     4,     4,     3,     1,
       3,     3
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
#line 1517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 98 "astree.y" /* yacc.c:1646  */
    {
								RET_TYPE = (yyvsp[-2].node)->type;
								ast_node_temp = makeTreeNode(RETURN,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"RETURN");
								(yyval.node) = makeTreeNode(STATEMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-4].node),ast_node_temp,NULL,"STATEMENT");
							}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 103 "astree.y" /* yacc.c:1646  */
    {
								RET_TYPE = (yyvsp[-2].node)->type;
								ast_node_temp = makeTreeNode(RETURN,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"RETURN");
								(yyval.node) = makeTreeNode(STATEMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,NULL,ast_node_temp,NULL,"STATEMENT");
							}
#line 1537 "y.tab.c" /* yacc.c:1646  */
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
#line 1560 "y.tab.c" /* yacc.c:1646  */
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
#line 1583 "y.tab.c" /* yacc.c:1646  */
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
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 170 "astree.y" /* yacc.c:1646  */
    {}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 171 "astree.y" /* yacc.c:1646  */
    {printTypeTable(T);}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 173 "astree.y" /* yacc.c:1646  */
    {}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 174 "astree.y" /* yacc.c:1646  */
    {}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 176 "astree.y" /* yacc.c:1646  */
    {
                                                T = installTypeTableNode(T,(yyvsp[-3].node)->varname,8,F);
                                                ValidateFieldList(TypeTableLookUp(T,(yyvsp[-3].node)->varname));
                                                F = initFieldList();
                                            }
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 182 "astree.y" /* yacc.c:1646  */
    {}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 183 "astree.y" /* yacc.c:1646  */
    {}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 185 "astree.y" /* yacc.c:1646  */
    {F = installField(T,F,(yyvsp[-1].node)->varname,top_string(TYPE_STACK));TYPE_STACK = pop_string(TYPE_STACK);}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 189 "astree.y" /* yacc.c:1646  */
    {}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 190 "astree.y" /* yacc.c:1646  */
    {}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 192 "astree.y" /* yacc.c:1646  */
    {}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 193 "astree.y" /* yacc.c:1646  */
    {}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 195 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = pop_string(TYPE_STACK);}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 197 "astree.y" /* yacc.c:1646  */
    {}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 198 "astree.y" /* yacc.c:1646  */
    {}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 200 "astree.y" /* yacc.c:1646  */
    {
								                    gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),VARIABLE,(yyvsp[0].node)->varname,1,NULL,lst);
                                                    lst = LSTDelete(lst);
							                    }
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 204 "astree.y" /* yacc.c:1646  */
    {
								                    gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),ARRAY_VARIABLE,(yyvsp[-3].node)->varname,(yyvsp[-1].node)->val,NULL,lst);
                                                    lst = LSTDelete(lst);
							                    }
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 208 "astree.y" /* yacc.c:1646  */
    {
                                                    gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),FUNCTION,(yyvsp[-3].node)->varname,1,Parserparam,lst);
                                                    lst = LSTDelete(lst);
                                                    Parserparam = ParamDelete(Parserparam);
							                    }
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 213 "astree.y" /* yacc.c:1646  */
    {
								                    gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),FUNCTION,(yyvsp[-2].node)->varname,1,Parserparam,lst);
                                                    lst = LSTDelete(lst);
                                                    Parserparam = ParamDelete(Parserparam);
							                    }
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 221 "astree.y" /* yacc.c:1646  */
    {}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 222 "astree.y" /* yacc.c:1646  */
    {}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 225 "astree.y" /* yacc.c:1646  */
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
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 256 "astree.y" /* yacc.c:1646  */
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
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 289 "astree.y" /* yacc.c:1646  */
    {}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 290 "astree.y" /* yacc.c:1646  */
    {}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 292 "astree.y" /* yacc.c:1646  */
    {
                                                    Parserparam = ParamInsert(Parserparam,(yyvsp[0].node)->varname,TypeTableLookUp(T,top_string(TYPE_STACK)),VARIABLE);
                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                }
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 299 "astree.y" /* yacc.c:1646  */
    {lst = ParamToLSTInstall(lst,Parserparam);}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 300 "astree.y" /* yacc.c:1646  */
    {lst = ParamToLSTInstall(lst,Parserparam);}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 302 "astree.y" /* yacc.c:1646  */
    {}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 303 "astree.y" /* yacc.c:1646  */
    {}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 305 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = pop_string(TYPE_STACK);}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 307 "astree.y" /* yacc.c:1646  */
    {lst = LSTInstall(lst,(yyvsp[0].node)->varname,TypeTableLookUp(T,top_string(TYPE_STACK)),VARIABLE);}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 308 "astree.y" /* yacc.c:1646  */
    {lst = LSTInstall(lst,(yyvsp[0].node)->varname,TypeTableLookUp(T,top_string(TYPE_STACK)),VARIABLE);}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 312 "astree.y" /* yacc.c:1646  */
    {
                                                    (yyvsp[-2].node) = insertASTParam((yyvsp[-2].node),(yyvsp[0].node));
                                                    (yyval.node) = (yyvsp[-2].node);
                                                }
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 316 "astree.y" /* yacc.c:1646  */
    {
                                                    (yyval.node) = (yyvsp[0].node);
                                                }
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 322 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = push_string(TYPE_STACK,"int");}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 323 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = push_string(TYPE_STACK,"str");}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 324 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = push_string(TYPE_STACK,(yyvsp[0].node)->varname);}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 328 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = makeTreeNode(STATEMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-1].node),(yyvsp[0].node),NULL,"STATEMENT");}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 329 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 332 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 333 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 334 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 335 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 336 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 337 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 338 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 339 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 340 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 341 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 343 "astree.y" /* yacc.c:1646  */
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
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 358 "astree.y" /* yacc.c:1646  */
    {
                                                if((yyvsp[-2].node)->type != TypeTableLookUp(T,"int") && (yyvsp[-2].node)->type != TypeTableLookUp(T,"str"))
                                                {
                                                    printf("*line %d: invalid argument type to write\n",line);
                                                    exit(0);
                                                }
                                                (yyval.node) = makeTreeNode(WRITE,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"Write");}
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 366 "astree.y" /* yacc.c:1646  */
    {
                                                if((yyvsp[-5].node)->type != TypeTableLookUp(T,"int") && (yyvsp[-5].node)->type != TypeTableLookUp(T,"str") && (yyvsp[-5].node)->nodetype != FUNCTION)
                                                    (yyval.node) = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-5].node),(yyvsp[-3].node),NULL,"=");
                                                else
                                                {
                                                    printf("*line %d: alloc() must be called for user-defined data types\n",line);
                                                    exit(0);
                                                }
                                            }
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 375 "astree.y" /* yacc.c:1646  */
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
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 387 "astree.y" /* yacc.c:1646  */
    {
                                                if(((typeCheckExp((yyvsp[-3].node)) && typeCheckExp((yyvsp[-1].node))) || (typeCheckStr((yyvsp[-3].node)) && typeCheckStr((yyvsp[-1].node)))) && ((yyvsp[-3].node)->nodetype != FUNCTION))
                                                    (yyval.node) = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-3].node),(yyvsp[-1].node),NULL,"=");
                                                else{
                                                    printf("line %d :Invalid assignment to \"%s\"\n",line,(yyvsp[-3].node)->varname);
                                                    exit(1);
                                                }
                                            }
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 395 "astree.y" /* yacc.c:1646  */
    {
                                                if((yyvsp[-3].node)->type != TypeTableLookUp(T,"int") && (yyvsp[-3].node)->type != TypeTableLookUp(T,"str") && (yyvsp[-3].node)->nodetype != FUNCTION)
                                                    (yyval.node) = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-3].node),(yyvsp[-1].node),NULL,"=");
                                                else
                                                {
                                                    printf("*line %d: NULL cannot be assigned to primitive data-types\n",line);
                                                    exit(0);
                                                } 
                                            }
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 405 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 406 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 408 "astree.y" /* yacc.c:1646  */
    {
                                                                if(!typeCheckBool((yyvsp[-7].node))){
                                                                    printf("line %d: Invalid conditional statement\n",line);
                                                                    exit(1);
                                                                }
                                                                struct AST_Node *temp1 = makeTreeNode(IF,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-7].node),(yyvsp[-4].node),NULL,"IF");
                                                                struct AST_Node *temp2 = makeTreeNode(ELSE,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"ELSE");
                                                                (yyval.node) = makeTreeNode(IF_ELSE,TypeTableLookUp(T,"void"),NULL,-1,-1,temp1,temp2,NULL,"IF_ELSE");
                                                            }
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 417 "astree.y" /* yacc.c:1646  */
    {
                                                                if(!typeCheckBool((yyvsp[-5].node))){
                                                                    printf("line %d :Invalid boolean statement\n",line);
                                                                    exit(1);
                                                                }
                                                                struct AST_Node *temp1 = makeTreeNode(IF,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-5].node),(yyvsp[-2].node),NULL,"IF");
                                                                (yyval.node) = makeTreeNode(IF_ELSE,TypeTableLookUp(T,"void"),NULL,-1,-1,temp1,NULL,NULL,"IF_ELSE");
                                                            }
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 426 "astree.y" /* yacc.c:1646  */
    {
                                                                if(typeCheckBool((yyvsp[-5].node)))
                                                                    (yyval.node) = makeTreeNode(WHILE,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-5].node),(yyvsp[-2].node),NULL,"WHILE");
                                                                else{
                                                                    printf("line %d :Invalid bool statement\n",line);
                                                                    exit(1);
                                                                }
                                                            }
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 435 "astree.y" /* yacc.c:1646  */
    {
                                                                    if(typeCheckBool((yyvsp[-2].node)))
                                                                        (yyval.node) = makeTreeNode(REPEAT_UNTIL,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-6].node),(yyvsp[-2].node),NULL,"REPEAT_UNTIL");
                                                                    else{
                                                                        printf("line %d :Invalid bool statement\n",line);
                                                                        exit(1);
                                                                    }
                                                                }
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 444 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckBool((yyvsp[-2].node)))
                                                                (yyval.node) = makeTreeNode(DO_WHILE,TypeTableLookUp(T,"void"),NULL,-1,-1,(yyvsp[-6].node),(yyvsp[-2].node),NULL,"DO_WHILE");
                                                            else{
                                                                printf("line %d :Invalid bool statement\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 454 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,PLUS,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"+");
    else{
        printf("line %d :Invalid operand\n",line);
        exit(1);
    }
}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 462 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,MINUS,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"-");
    else{
        printf("line %d :Invalid operand\n",line);
        exit(1);
    }
}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 470 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,MUL,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"*");
    else{
        printf("line %d :Invalid operand\n",line);
        exit(1);
    }
}
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 478 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,DIV,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"/");
    else{
        printf("line %d :Invalid operand\n",line);
        exit(1);
    }
}
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 486 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,MOD,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"%");
    else{
        printf("line %d :Invalid operand\n",line);
        exit(1);
    }
}
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 494 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,LT,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"<");
    else{
        printf("line %d :Invalid Operator\n",line);
        exit(1);
    }
}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 502 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,LE,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"<=");
    else{
        printf("line %d :Invalid Operator\n",line);
        exit(1);
    }
}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 510 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,GT,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,">");
    else{
        printf("line %d :Invalid Operator\n",line);
        exit(1);
    }
}
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 518 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,GE,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,">=");
    else{
        printf("line %d :Invalid Operator\n",line);
        exit(1);
    }
}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 526 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NE,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"!=");
    else{
        printf("line %d :Invalid Operator\n",line);
        exit(1);
    }
}
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 534 "astree.y" /* yacc.c:1646  */
    {
    if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
        (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,EQ,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"==");
    else{
        printf("line %d :Invalid Operator\n",line);
        exit(1);
    }
}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 542 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 543 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 544 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 547 "astree.y" /* yacc.c:1646  */
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
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 562 "astree.y" /* yacc.c:1646  */
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
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 593 "astree.y" /* yacc.c:1646  */
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
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 614 "astree.y" /* yacc.c:1646  */
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
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 633 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 637 "astree.y" /* yacc.c:1646  */
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
#line 2446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 648 "astree.y" /* yacc.c:1646  */
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
#line 2477 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2481 "y.tab.c" /* yacc.c:1646  */
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
#line 675 "astree.y" /* yacc.c:1906  */

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