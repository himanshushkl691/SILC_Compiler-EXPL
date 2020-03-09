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
#line 26 "astree.y" /* yacc.c:355  */

    struct AST_Node *node;

#line 230 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 247 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   478

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  270

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

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
      49,    50,     2,     2,    54,     2,    58,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    53,
       2,    57,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    56,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    78,    78,   101,   106,   113,   132,   154,   155,   157,
     158,   160,   171,   172,   174,   184,   185,   187,   188,   190,
     206,   210,   216,   217,   219,   220,   222,   227,   233,   234,
     238,   239,   240,   242,   243,   245,   247,   248,   250,   254,
     268,   278,   291,   292,   294,   362,   433,   434,   436,   443,
     444,   446,   447,   449,   451,   452,   456,   457,   459,   463,
     467,   468,   469,   473,   474,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   489,   504,   506,   515,
     527,   535,   545,   546,   548,   557,   566,   575,   584,   594,
     602,   610,   618,   626,   634,   642,   650,   658,   666,   674,
     682,   691,   700,   701,   702,   705,   720,   751,   777,   778,
     782,   799,   834,   857,   877,   911
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
  "_NULL", "_FREE", "_ALLOC", "_INITIALIZE", "'('", "')'", "'{'", "'}'",
  "';'", "','", "'['", "']'", "'='", "'.'", "$accept", "MainBlock", "Body",
  "Program", "TypeDefBlock", "TypeDefList", "TypeDef", "FieldDeclList",
  "FieldDecl", "ClassDefBlock", "ClassDefList", "ClassDef", "Cname",
  "CFieldList", "CMethodDecl", "CMDecl", "CMethodDef", "GDeclBlock",
  "GDeclList", "GDecl", "GIdList", "GId", "FnDefBlock", "FnDef",
  "ParamList", "Param", "LDeclBlock", "LDeclList", "LDecl", "IdList",
  "NewArgList", "ArgList", "Type", "Slist", "stmt", "Inputstmt",
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,    40,
      41,   123,   125,    59,    44,    91,    93,    61,    46
};
# endif

#define YYPACT_NINF -191

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-191)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      50,    62,    85,    87,    59,    15,  -191,  -191,    79,   121,
     167,  -191,  -191,   131,     8,  -191,    94,   157,   184,  -191,
    -191,  -191,    41,  -191,   128,   135,  -191,  -191,   146,  -191,
     226,  -191,   154,   119,  -191,   184,  -191,   155,  -191,  -191,
     125,  -191,  -191,  -191,  -191,    46,   -18,  -191,   130,  -191,
    -191,   134,  -191,   167,   114,   176,  -191,   154,   147,   124,
    -191,   283,  -191,   178,  -191,   -39,  -191,   181,   150,  -191,
     158,   159,   -16,   167,  -191,   201,    70,  -191,   167,  -191,
    -191,   214,   214,   196,    69,  -191,   182,   132,  -191,   286,
     200,   200,   214,  -191,  -191,   195,    68,  -191,   314,  -191,
     242,   317,   209,   211,   200,  -191,   223,  -191,  -191,  -191,
      82,   206,    24,   230,   231,   239,   243,   247,   249,   224,
     240,   254,    -9,   262,   336,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,   256,   272,  -191,  -191,  -191,   268,  -191,
    -191,   313,   323,    -9,     9,   324,    89,    -9,     9,     9,
     398,   398,  -191,  -191,  -191,  -191,  -191,     9,   290,   430,
    -191,   297,    -9,  -191,   279,   331,  -191,  -191,   307,   310,
     308,  -191,   144,   319,   316,   320,    91,   212,   153,   180,
     228,   339,     9,     9,     9,     9,     9,     9,     9,     9,
       9,     2,    80,   322,   326,   329,   334,   337,   332,   338,
      -9,  -191,    -9,  -191,    -9,   335,   340,   360,   359,   361,
     370,  -191,  -191,   199,   199,  -191,  -191,  -191,   446,   446,
     325,   325,  -191,   451,  -191,   451,  -191,   372,  -191,    89,
     362,  -191,    -9,   368,  -191,   373,  -191,  -191,   398,   398,
     375,   381,  -191,   378,   369,   382,  -191,  -191,   281,   363,
       9,     9,   384,  -191,  -191,   398,   394,   395,   244,   260,
    -191,   379,  -191,  -191,   396,   397,   414,  -191,  -191,  -191
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
       0,     0,   105,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,    66,    67,    68,
      69,    70,    71,     0,   108,   109,     2,    45,     0,    26,
      53,     0,     0,    56,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,   103,    83,     0,     0,    82,
     104,     0,     0,    63,     0,     0,    44,    54,   112,     0,
      57,    59,     0,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
      56,   107,     0,   106,    56,     0,     0,     0,     0,     0,
       0,   102,     4,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   101,    98,   100,    99,    75,     0,    81,     0,
       0,    80,    56,     0,    58,     0,    76,    77,     0,     0,
       0,     0,     3,     0,     0,     0,   115,   114,     0,     0,
       0,     0,     0,    78,   113,     0,     0,     0,     0,     0,
      79,     0,    85,    86,     0,     0,     0,    88,    87,    84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -191,   400,   -74,  -191,  -191,  -191,   426,  -191,     0,  -191,
    -191,   454,  -191,  -191,  -191,   412,  -191,  -191,  -191,   444,
    -191,   418,  -191,   -30,   -46,   399,    -8,  -191,   380,  -191,
    -190,  -191,    22,  -147,  -122,  -191,  -191,  -191,  -116,  -191,
    -191,  -191,  -191,  -120,  -101,  -191,  -191
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    34,   102,     2,     3,     5,     6,    22,    23,     9,
      14,    15,    16,    53,    61,    62,    84,    18,    30,    31,
      46,    47,    35,    36,    65,    66,    90,    98,    99,   110,
     169,   170,    37,   124,   125,   126,   127,   128,   171,   129,
     130,   131,   132,   159,   160,   134,   135
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     133,   111,   163,   178,   179,    50,   158,   155,   156,   112,
     233,    77,   111,    72,   235,    78,    26,   103,   155,   111,
     112,    11,    39,   133,   172,   155,    13,   112,   176,   177,
     138,   175,    24,     4,    83,    56,    57,   180,    78,    32,
     157,    96,   245,    85,    24,   174,   194,   222,   198,   133,
     133,   157,    32,    60,    94,     1,   163,   163,   157,    19,
      20,    21,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   223,   225,   143,    91,    63,    67,   133,   133,   144,
       4,    67,   145,    75,   104,     7,   234,    19,    20,    21,
     111,   248,   249,    38,     8,    54,   155,    13,   112,   111,
      67,    55,   182,   183,   184,   185,   186,   112,   261,    67,
      10,   100,   187,   188,   189,   190,   191,   192,   106,    87,
     100,    93,    78,    52,    17,   224,   163,   163,   243,   157,
     258,   259,    19,    20,    21,   140,   141,   133,   133,   163,
      25,   207,    19,    20,    21,    28,    40,   133,   133,    42,
      19,    20,    21,    41,   133,   182,   183,   184,   185,   186,
     133,    29,    48,   111,    64,   187,   188,   189,   190,   191,
     192,   112,    45,    51,    71,    19,    20,    21,    52,    58,
     113,   114,    95,    59,   115,    19,    20,    21,   116,   117,
     111,   118,    68,   119,   120,   121,    76,    70,   112,    79,
     203,   123,    19,    33,    21,   209,    80,   113,   114,    81,
      82,   115,   184,   185,   186,   116,   117,    89,   118,    86,
     119,   120,   121,   182,   183,   184,   185,   186,   123,   101,
      43,    87,   210,   187,   188,   189,   190,   191,   192,   182,
     183,   184,   185,   186,    19,    20,    21,    92,   105,   187,
     188,   189,   190,   191,   192,   182,   183,   184,   185,   186,
     109,   136,   208,   137,   142,   187,   188,   189,   190,   191,
     192,   182,   183,   184,   185,   186,   139,   152,   211,   146,
     147,   187,   188,   189,   190,   191,   192,    73,   148,   111,
      97,   111,   149,   153,   264,   155,   156,   112,   150,   112,
     151,    19,    20,    21,    19,    20,    21,   154,   113,   114,
     265,   161,   115,   164,   255,   256,   116,   117,   107,   118,
     166,   119,   120,   121,   195,   196,   197,   111,   157,   123,
     165,   167,    19,    20,    21,   112,   182,   183,   184,   185,
     186,   168,   173,   181,   113,   114,   111,   193,   115,   199,
     191,   192,   116,   117,   112,   118,   200,   119,   120,   121,
     201,   122,   202,   113,   114,   123,   205,   115,   204,   212,
     206,   116,   117,   111,   118,   226,   119,   120,   121,   227,
     162,   112,   228,   229,   123,   231,   230,   232,   236,   111,
     113,   114,   238,   237,   115,   239,   240,   112,   116,   117,
     257,   118,   242,   119,   120,   121,   113,   114,   111,   241,
     115,   123,   244,   266,   116,   117,   112,   118,   246,   119,
     120,   121,   253,   247,   250,   113,   114,   123,   252,   115,
     251,    12,   254,   116,   117,    49,   118,   260,   119,   120,
     121,   182,   183,   184,   185,   186,   123,   262,   263,   267,
     268,   187,   188,   189,   190,   191,   192,   182,   183,   184,
     185,   186,   182,   183,   184,   185,   186,   269,    27,   189,
     190,   191,   192,    74,    44,    69,     0,    88,   108
};

static const yytype_int16 yycheck[] =
{
     101,    10,   124,   150,   151,    35,   122,    16,    17,    18,
     200,    50,    10,    59,   204,    54,     8,    91,    16,    10,
      18,     6,    22,   124,   144,    16,    18,    18,   148,   149,
     104,   147,    10,    18,    50,    53,    54,   157,    54,    17,
      49,    87,   232,    73,    22,   146,   162,    45,   164,   150,
     151,    49,    30,    53,    84,     5,   178,   179,    49,    18,
      19,    20,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,    49,    82,    53,    54,   178,   179,    55,
      18,    59,    58,    61,    92,     0,   202,    18,    19,    20,
      10,   238,   239,    52,     7,    49,    16,    18,    18,    10,
      78,    55,    11,    12,    13,    14,    15,    18,   255,    87,
      51,    89,    21,    22,    23,    24,    25,    26,    50,    49,
      98,    52,    54,    53,     3,    45,   248,   249,   229,    49,
     250,   251,    18,    19,    20,    53,    54,   238,   239,   261,
       9,    50,    18,    19,    20,    51,    18,   248,   249,     3,
      18,    19,    20,    18,   255,    11,    12,    13,    14,    15,
     261,     4,    43,    10,    50,    21,    22,    23,    24,    25,
      26,    18,    18,    18,    50,    18,    19,    20,    53,    49,
      27,    28,    50,    49,    31,    18,    19,    20,    35,    36,
      10,    38,    16,    40,    41,    42,    18,    50,    18,    18,
      56,    48,    18,    19,    20,    52,    56,    27,    28,    51,
      51,    31,    13,    14,    15,    35,    36,     3,    38,    18,
      40,    41,    42,    11,    12,    13,    14,    15,    48,    29,
       4,    49,    52,    21,    22,    23,    24,    25,    26,    11,
      12,    13,    14,    15,    18,    19,    20,    51,    53,    21,
      22,    23,    24,    25,    26,    11,    12,    13,    14,    15,
      18,    52,    50,    52,    58,    21,    22,    23,    24,    25,
      26,    11,    12,    13,    14,    15,    53,    53,    50,    49,
      49,    21,    22,    23,    24,    25,    26,     4,    49,    10,
       4,    10,    49,    53,    50,    16,    17,    18,    51,    18,
      51,    18,    19,    20,    18,    19,    20,    53,    27,    28,
      50,    49,    31,    57,    33,    34,    35,    36,     4,    38,
      52,    40,    41,    42,    45,    46,    47,    10,    49,    48,
      58,    18,    18,    19,    20,    18,    11,    12,    13,    14,
      15,    18,    18,    53,    27,    28,    10,    50,    31,    18,
      25,    26,    35,    36,    18,    38,    49,    40,    41,    42,
      50,    44,    54,    27,    28,    48,    50,    31,    49,    30,
      50,    35,    36,    10,    38,    53,    40,    41,    42,    53,
      44,    18,    53,    49,    48,    53,    49,    49,    53,    10,
      27,    28,    32,    53,    31,    36,    35,    18,    35,    36,
      37,    38,    30,    40,    41,    42,    27,    28,    10,    39,
      31,    48,    50,    34,    35,    36,    18,    38,    50,    40,
      41,    42,    53,    50,    49,    27,    28,    48,    50,    31,
      49,     5,    50,    35,    36,    35,    38,    53,    40,    41,
      42,    11,    12,    13,    14,    15,    48,    53,    53,    53,
      53,    21,    22,    23,    24,    25,    26,    11,    12,    13,
      14,    15,    11,    12,    13,    14,    15,    53,    14,    23,
      24,    25,    26,    61,    30,    57,    -1,    78,    98
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    62,    63,    18,    64,    65,     0,     7,    68,
      51,     6,    65,    18,    69,    70,    71,     3,    76,    18,
      19,    20,    66,    67,    91,     9,     8,    70,    51,     4,
      77,    78,    91,    19,    60,    81,    82,    91,    52,    67,
      18,    18,     3,     4,    78,    18,    79,    80,    43,    60,
      82,    18,    53,    72,    49,    55,    53,    54,    49,    49,
      67,    73,    74,    91,    50,    83,    84,    91,    16,    80,
      50,    50,    83,     4,    74,    91,    18,    50,    54,    18,
      56,    51,    51,    50,    75,    82,    18,    49,    84,     3,
      85,    85,    51,    52,    82,    50,    83,     4,    86,    87,
      91,    29,    61,    61,    85,    53,    50,     4,    87,    18,
      88,    10,    18,    27,    28,    31,    35,    36,    38,    40,
      41,    42,    44,    48,    92,    93,    94,    95,    96,    98,
      99,   100,   101,   103,   104,   105,    52,    52,    61,    53,
      53,    54,    58,    49,    55,    58,    49,    49,    49,    49,
      51,    51,    53,    53,    53,    16,    17,    49,    97,   102,
     103,    49,    44,    93,    57,    58,    52,    18,    18,    89,
      90,    97,   102,    18,   103,    97,   102,   102,    92,    92,
     102,    53,    11,    12,    13,    14,    15,    21,    22,    23,
      24,    25,    26,    50,    97,    45,    46,    47,    97,    18,
      49,    50,    54,    56,    49,    50,    50,    50,    50,    52,
      52,    50,    30,   102,   102,   102,   102,   102,   102,   102,
     102,   102,    45,   102,    45,   102,    53,    53,    53,    49,
      49,    53,    49,    89,    97,    89,    53,    53,    32,    36,
      35,    39,    30,   103,    50,    89,    50,    50,    92,    92,
      49,    49,    50,    53,    50,    33,    34,    37,   102,   102,
      53,    92,    53,    53,    50,    50,    34,    53,    53,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    63,    63,    64,
      64,    65,    66,    66,    67,    68,    68,    69,    69,    70,
      71,    71,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    76,    76,    77,    77,    78,    79,    79,    80,    80,
      80,    80,    81,    81,    82,    82,    83,    83,    84,    85,
      85,    86,    86,    87,    88,    88,    89,    89,    90,    90,
      91,    91,    91,    92,    92,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    94,    95,    96,    96,
      96,    96,    97,    97,    98,    98,    99,   100,   101,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   103,   103,   103,   103,   103,
     104,   104,   104,   105,   105,   105
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
       4,     4,     1,     1,    10,     8,     8,     9,     9,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     4,     4,     1,     1,
       3,     3,     3,     6,     6,     6
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
                                                printGST(gst);
                                                ASTPrintTree((yyval.node));
                                                printf("\n");
                                                stack = push(stack,(yyval.node),gst_node_temp->lst,NULL);
                                                (yyval.node) = ASTDelete((yyval.node));
                                            }
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 101 "astree.y" /* yacc.c:1646  */
    {
								RET_TYPE = (yyvsp[-2].node)->type;
								ast_node_temp = makeTreeNode(RETURN,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"RETURN");
								(yyval.node) = makeTreeNode(STATEMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-4].node),ast_node_temp,NULL,"STATEMENT");
							}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 106 "astree.y" /* yacc.c:1646  */
    {
								RET_TYPE = (yyvsp[-2].node)->type;
								ast_node_temp = makeTreeNode(RETURN,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"RETURN");
								(yyval.node) = makeTreeNode(STATEMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,NULL,ast_node_temp,NULL,"STATEMENT");
							}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 114 "astree.y" /* yacc.c:1646  */
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
                                            code_generator(ft,tstack->ast,gst,tstack->lst,tstack->class);
                                        }
                                        exit(1);
							        }
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 133 "astree.y" /* yacc.c:1646  */
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
                                            code_generator(ft,tstack->ast,gst,tstack->lst,tstack->class);
                                        }
                                        exit(1);
							        }
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 154 "astree.y" /* yacc.c:1646  */
    {}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 155 "astree.y" /* yacc.c:1646  */
    {printTypeTable(T);}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 157 "astree.y" /* yacc.c:1646  */
    {}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 158 "astree.y" /* yacc.c:1646  */
    {}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 160 "astree.y" /* yacc.c:1646  */
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
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 171 "astree.y" /* yacc.c:1646  */
    {}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 172 "astree.y" /* yacc.c:1646  */
    {}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 174 "astree.y" /* yacc.c:1646  */
    {
                                                if(!class_section)
                                                    F = installField(T,C,F,(yyvsp[-1].node)->varname,top_string(TYPE_STACK));
                                                else
                                                    C->tail = installClassFieldNode(C->tail,C,T,(yyvsp[-1].node)->varname,top_string(TYPE_STACK));
                                                TYPE_STACK = pop_string(TYPE_STACK);
                                            }
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 184 "astree.y" /* yacc.c:1646  */
    {}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 185 "astree.y" /* yacc.c:1646  */
    {}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 187 "astree.y" /* yacc.c:1646  */
    {}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 190 "astree.y" /* yacc.c:1646  */
    {
                                                                                                    if(C->tail->fieldCount > 8)
                                                                                                    {
                                                                                                        printf("*line %d : Class cannot have more than 8 field\n",line);
                                                                                                        exit(1);
                                                                                                    }
                                                                                                    //C->tail->method = inheritMethod(C->tail);
                                                                                                    if(C->tail->methodCount > 8)
                                                                                                    {
                                                                                                        printf("*line %d : Class cannot have more than 8 methods\n",line);
                                                                                                        exit(1);
                                                                                                    }
                                                                                                    ValidateFieldList(NULL,ClassTableLookUp(C,top_string(TYPE_STACK)));
                                                                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                                                                }
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 206 "astree.y" /* yacc.c:1646  */
    {
                                                                                                    C = installClassTableNode(C,T,(yyvsp[0].node)->varname,NULL);
                                                                                                    TYPE_STACK = push_string(TYPE_STACK,(yyvsp[0].node)->varname);
                                                                                                }
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 210 "astree.y" /* yacc.c:1646  */
    {
                                                                                                    C = installClassTableNode(C,T,(yyvsp[-2].node)->varname,(yyvsp[0].node)->varname);
                                                                                                    //C->tail->field = inheritMemberField(C->tail);
                                                                                                    TYPE_STACK = push_string(TYPE_STACK,(yyvsp[-2].node)->varname);
                                                                                                }
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 216 "astree.y" /* yacc.c:1646  */
    {}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 217 "astree.y" /* yacc.c:1646  */
    {}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 219 "astree.y" /* yacc.c:1646  */
    {}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 220 "astree.y" /* yacc.c:1646  */
    {}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 222 "astree.y" /* yacc.c:1646  */
    {
                                                                                                    C->tail = installClassMethodListNode(C->tail,C,TypeTableLookUp(T,top_string(TYPE_STACK)),(yyvsp[-4].node)->varname,Parserparam);
                                                                                                    Parserparam = ParamDelete(Parserparam);
                                                                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                                                                }
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 227 "astree.y" /* yacc.c:1646  */
    {
                                                                                                    C->tail = installClassMethodListNode(C->tail,C,TypeTableLookUp(T,top_string(TYPE_STACK)),(yyvsp[-3].node)->varname,Parserparam);
                                                                                                    Parserparam = ParamDelete(Parserparam);
                                                                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                                                                }
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 233 "astree.y" /* yacc.c:1646  */
    {}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 234 "astree.y" /* yacc.c:1646  */
    {}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 238 "astree.y" /* yacc.c:1646  */
    {}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 239 "astree.y" /* yacc.c:1646  */
    {}
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 240 "astree.y" /* yacc.c:1646  */
    {}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 242 "astree.y" /* yacc.c:1646  */
    {}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 243 "astree.y" /* yacc.c:1646  */
    {}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 245 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = pop_string(TYPE_STACK);}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 247 "astree.y" /* yacc.c:1646  */
    {}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 248 "astree.y" /* yacc.c:1646  */
    {}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 250 "astree.y" /* yacc.c:1646  */
    {
								                    gst = GSTInstall(gst,TypeTableLookUp(T,top_string(TYPE_STACK)),ClassTableLookUp(C,top_string(TYPE_STACK)),VARIABLE,(yyvsp[0].node)->varname,1,NULL,lst);
                                                    lst = LSTDelete(lst);
							                    }
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 254 "astree.y" /* yacc.c:1646  */
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
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 268 "astree.y" /* yacc.c:1646  */
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
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 278 "astree.y" /* yacc.c:1646  */
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
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 291 "astree.y" /* yacc.c:1646  */
    {}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 292 "astree.y" /* yacc.c:1646  */
    {}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 295 "astree.y" /* yacc.c:1646  */
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
                                                    gst_node_temp->fun_defined = 1;
                                                    lst = LSTDelete(lst);
                                                    Parserparam = ParamDelete(Parserparam);
                                                    (yyval.node) = makeTreeNode(FUNCTION,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,(yyvsp[-7].node)->varname,-1,-1,(yyvsp[-1].node),NULL,gst_node_temp,"FUNCTION");
                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                    printGST(gst);
                                                    ASTPrintTree((yyval.node));
                                                    printf("\n");
                                                    stack = push(stack,(yyval.node),gst_node_temp->lst,NULL);
                                                    (yyval.node) = ASTDelete((yyval.node));
                                                }
                                                else
                                                {
                                                    method_list_node_temp = MethodLookUp(C->tail,(yyvsp[-7].node)->varname);
                                                    if(!method_list_node_temp)
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
                                                    method_list_node_temp->defined = 1;
                                                    (yyval.node) = makeTreeNode(FUNCTION,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,(yyvsp[-7].node)->varname,-1,-1,(yyvsp[-1].node),NULL,NULL,"FUNCTION");
                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                    printLST(lst);
                                                    ASTPrintTree((yyval.node));
                                                    printf("\n");
                                                    stack = push(stack,(yyval.node),lst,C->tail);
                                                    lst = LSTDelete(lst);
                                                    (yyval.node) = ASTDelete((yyval.node));
                                                }
                                            }
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 363 "astree.y" /* yacc.c:1646  */
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
                                                    gst_node_temp->fun_defined = 1;
                                                    lst = LSTDelete(lst);
                                                    Parserparam = ParamDelete(Parserparam);
                                                    (yyval.node) = makeTreeNode(FUNCTION,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,(yyvsp[-6].node)->varname,-1,-1,(yyvsp[-1].node),NULL,gst_node_temp,"FUNCTION");
                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                    printGST(gst);
                                                    ASTPrintTree((yyval.node));
                                                    printf("\n");
                                                    stack = push(stack,(yyval.node),gst_node_temp->lst,NULL);
                                                    (yyval.node) = ASTDelete((yyval.node));
                                                }
                                                else
                                                {
                                                    method_list_node_temp = MethodLookUp(C->tail,(yyvsp[-6].node)->varname);
                                                    if(!method_list_node_temp)
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
                                                    method_list_node_temp->defined = 1;
                                                    (yyval.node) = makeTreeNode(FUNCTION,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,(yyvsp[-6].node)->varname,-1,-1,(yyvsp[-1].node),NULL,NULL,"FUNCTION");
                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                    printLST(lst);
                                                    ASTPrintTree((yyval.node));
                                                    printf("\n");
                                                    stack = push(stack,(yyval.node),lst,C->tail);
                                                    lst = LSTDelete(lst);
                                                    (yyval.node) = ASTDelete((yyval.node));
                                                }
                                            }
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 433 "astree.y" /* yacc.c:1646  */
    {}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 434 "astree.y" /* yacc.c:1646  */
    {}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 436 "astree.y" /* yacc.c:1646  */
    {
                                                    Parserparam = ParamInsert(Parserparam,(yyvsp[0].node)->varname,TypeTableLookUp(T,top_string(TYPE_STACK)),VARIABLE);
                                                    TYPE_STACK = pop_string(TYPE_STACK);
                                                }
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 443 "astree.y" /* yacc.c:1646  */
    {lst = ParamToLSTInstall(lst,Parserparam);}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 444 "astree.y" /* yacc.c:1646  */
    {lst = ParamToLSTInstall(lst,Parserparam);}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 446 "astree.y" /* yacc.c:1646  */
    {}
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 447 "astree.y" /* yacc.c:1646  */
    {}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 449 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = pop_string(TYPE_STACK);}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 451 "astree.y" /* yacc.c:1646  */
    {lst = LSTInstall(lst,(yyvsp[0].node)->varname,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,VARIABLE);}
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 452 "astree.y" /* yacc.c:1646  */
    {lst = LSTInstall(lst,(yyvsp[0].node)->varname,TypeTableLookUp(T,top_string(TYPE_STACK)),NULL,VARIABLE);}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 456 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = NULL;}
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 457 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 459 "astree.y" /* yacc.c:1646  */
    {
                                                    (yyvsp[-2].node) = insertASTParam((yyvsp[-2].node),(yyvsp[0].node));
                                                    (yyval.node) = (yyvsp[-2].node);
                                                }
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 463 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 467 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = push_string(TYPE_STACK,"int");}
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 468 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = push_string(TYPE_STACK,"str");}
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 469 "astree.y" /* yacc.c:1646  */
    {TYPE_STACK = push_string(TYPE_STACK,(yyvsp[0].node)->varname);}
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 473 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = makeTreeNode(STATEMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-1].node),(yyvsp[0].node),NULL,"STATEMENT");}
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 474 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 477 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 478 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 479 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 480 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 481 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 482 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 483 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 484 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 485 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 486 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 487 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-3].node);}
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 489 "astree.y" /* yacc.c:1646  */
    {
                                                if((yyvsp[-2].node)->nodetype == FUNCTION)
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
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 504 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = makeTreeNode(WRITE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"Write");}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 506 "astree.y" /* yacc.c:1646  */
    {
                                                if((yyvsp[-5].node)->type != TypeTableLookUp(T,"int") && (yyvsp[-5].node)->type != TypeTableLookUp(T,"str") && (yyvsp[-5].node)->nodetype != FUNCTION)
                                                    (yyval.node) = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-5].node),(yyvsp[-3].node),NULL,"=");
                                                else
                                                {
                                                    printf("*line %d: alloc() must be called for user-defined data types\n",line);
                                                    exit(0);
                                                }
                                            }
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 515 "astree.y" /* yacc.c:1646  */
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
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 527 "astree.y" /* yacc.c:1646  */
    {
                                                if((yyvsp[-3].node)->type == (yyvsp[-1].node)->type && ((yyvsp[-3].node)->nodetype != FUNCTION))
                                                    (yyval.node) = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-3].node),(yyvsp[-1].node),NULL,"=");
                                                else{
                                                    printf("line %d :Invalid assignment to \"%s\"\n",line,(yyvsp[-3].node)->varname);
                                                    exit(1);
                                                }
                                            }
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 535 "astree.y" /* yacc.c:1646  */
    {
                                                if((yyvsp[-3].node)->type != TypeTableLookUp(T,"int") && (yyvsp[-3].node)->type != TypeTableLookUp(T,"str") && (yyvsp[-3].node)->nodetype != FUNCTION)
                                                    (yyval.node) = makeTreeNode(ASSIGNMENT,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-3].node),(yyvsp[-1].node),NULL,"=");
                                                else
                                                {
                                                    printf("*line %d: NULL cannot be assigned to primitive data-types\n",line);
                                                    exit(0);
                                                } 
                                            }
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 545 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 546 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 548 "astree.y" /* yacc.c:1646  */
    {
                                                                if(!typeCheckBool((yyvsp[-7].node))){
                                                                    printf("line %d: Invalid conditional statement\n",line);
                                                                    exit(1);
                                                                }
                                                                struct AST_Node *temp1 = makeTreeNode(IF,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-7].node),(yyvsp[-4].node),NULL,"IF");
                                                                struct AST_Node *temp2 = makeTreeNode(ELSE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-2].node),NULL,NULL,"ELSE");
                                                                (yyval.node) = makeTreeNode(IF_ELSE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,temp1,temp2,NULL,"IF_ELSE");
                                                            }
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 557 "astree.y" /* yacc.c:1646  */
    {
                                                                if(!typeCheckBool((yyvsp[-5].node))){
                                                                    printf("line %d :Invalid boolean statement\n",line);
                                                                    exit(1);
                                                                }
                                                                struct AST_Node *temp1 = makeTreeNode(IF,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-5].node),(yyvsp[-2].node),NULL,"IF");
                                                                (yyval.node) = makeTreeNode(IF_ELSE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,temp1,NULL,NULL,"IF_ELSE");
                                                            }
#line 2379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 566 "astree.y" /* yacc.c:1646  */
    {
                                                                if(typeCheckBool((yyvsp[-5].node)))
                                                                    (yyval.node) = makeTreeNode(WHILE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-5].node),(yyvsp[-2].node),NULL,"WHILE");
                                                                else{
                                                                    printf("line %d :Invalid bool statement\n",line);
                                                                    exit(1);
                                                                }
                                                            }
#line 2392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 575 "astree.y" /* yacc.c:1646  */
    {
                                                                    if(typeCheckBool((yyvsp[-2].node)))
                                                                        (yyval.node) = makeTreeNode(REPEAT_UNTIL,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-6].node),(yyvsp[-2].node),NULL,"REPEAT_UNTIL");
                                                                    else{
                                                                        printf("line %d :Invalid bool statement\n",line);
                                                                        exit(1);
                                                                    }
                                                                }
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 584 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckBool((yyvsp[-2].node)))
                                                                (yyval.node) = makeTreeNode(DO_WHILE,TypeTableLookUp(T,"void"),NULL,NULL,-1,-1,(yyvsp[-6].node),(yyvsp[-2].node),NULL,"DO_WHILE");
                                                            else{
                                                                printf("line %d :Invalid bool statement\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 594 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,NULL,PLUS,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"+");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 602 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,NULL,MINUS,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"-");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 610 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,NULL,MUL,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"*");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 618 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,NULL,DIV,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"/");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 626 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"int"),NULL,NULL,MOD,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"%");
                                                            else{
                                                                printf("line %d :Invalid operand\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 634 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,LT,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"<");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 642 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,LE,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"<=");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 650 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,GT,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,">");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 658 "astree.y" /* yacc.c:1646  */
    {
                                                            if(typeCheckExp((yyvsp[-2].node)) && typeCheckExp((yyvsp[0].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,GE,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,">=");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 666 "astree.y" /* yacc.c:1646  */
    {
                                                            if((typeCheckExp((yyvsp[-2].node)) || (!typeCheckExp((yyvsp[-2].node)) && !typeCheckBool((yyvsp[-2].node)))) && ((yyvsp[0].node)->nodetype == NULL_ || typeCheckExp((yyvsp[0].node)) || (!typeCheckExp((yyvsp[0].node)) && !typeCheckBool((yyvsp[0].node)))))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,NE,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"!=");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 674 "astree.y" /* yacc.c:1646  */
    {
                                                            if((typeCheckExp((yyvsp[-2].node)) || (!typeCheckExp((yyvsp[-2].node)) && !typeCheckBool((yyvsp[-2].node)))) && ((yyvsp[0].node)->nodetype == NULL_ || typeCheckExp((yyvsp[0].node)) || (!typeCheckExp((yyvsp[0].node)) && !typeCheckBool((yyvsp[0].node)))))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,EQ,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"==");
                                                            else{
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 682 "astree.y" /* yacc.c:1646  */
    {
                                                            if(!typeCheckExp((yyvsp[-2].node)) && !typeCheckBool((yyvsp[-2].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,EQ,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"==");
                                                            else
                                                            {
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 691 "astree.y" /* yacc.c:1646  */
    {
                                                            if(!typeCheckExp((yyvsp[-2].node)) && !typeCheckBool((yyvsp[-2].node)))
                                                                (yyval.node) = makeTreeNode(EXPRESSION,TypeTableLookUp(T,"boolean"),NULL,NULL,NE,-1,(yyvsp[-2].node),(yyvsp[0].node),NULL,"!=");
                                                            else
                                                            {
                                                                printf("line %d :Invalid Operator\n",line);
                                                                exit(1);
                                                            }
                                                        }
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 700 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[-1].node);}
#line 2595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 701 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 702 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 705 "astree.y" /* yacc.c:1646  */
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
#line 2627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 720 "astree.y" /* yacc.c:1646  */
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
#line 2663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 751 "astree.y" /* yacc.c:1646  */
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
                                                            // if(!gst_node_temp->fun_defined)
                                                            // {
                                                            //     printf("*line %d : Undefined reference to \"%s\"\n",line,$1->varname);
                                                            //     exit(0);
                                                            // }
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
#line 2694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 777 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 778 "astree.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 782 "astree.y" /* yacc.c:1646  */
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
#line 2728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 799 "astree.y" /* yacc.c:1646  */
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
#line 2768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 834 "astree.y" /* yacc.c:1646  */
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
#line 2795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 857 "astree.y" /* yacc.c:1646  */
    {
                                                                                method_list_node_temp = MethodLookUp((yyvsp[-5].node)->class,(yyvsp[-3].node)->varname);
                                                                                if(!method_list_node_temp)
                                                                                {
                                                                                    printf("*line %d : No method \"%s\" in \"%s\"\n",line,(yyvsp[-3].node)->varname,(yyvsp[-5].node)->varname);
                                                                                    exit(0);
                                                                                }
                                                                                if(!checkASTParam(method_list_node_temp->param,(yyvsp[-1].node)))
                                                                                {
                                                                                    printf("line %d :Arguments in \"%s\", does not match with declaration in class \"%s\"\n",line,(yyvsp[-3].node)->varname,(yyvsp[-5].node)->varname);
                                                                                    exit(0);
                                                                                }
                                                                                (yyvsp[-3].node)->nodetype = FUNCTION;
                                                                                (yyvsp[-3].node)->type = method_list_node_temp->type;
                                                                                (yyvsp[-3].node)->class = NULL;
                                                                                (yyvsp[-3].node)->param = (struct AST_Node *)malloc(sizeof(struct AST_Node));
                                                                                (yyvsp[-3].node)->param = (yyvsp[-1].node);
                                                                                (yyval.node) = makeTreeNode(FIELDFUNCTION,(yyvsp[-3].node)->type,(yyvsp[-3].node)->class,(yyvsp[-3].node)->varname,-1,-1,(yyvsp[-5].node),(yyvsp[-3].node),NULL,"fieldfunction");
                                                                                (yyvsp[-1].node) = NULL;
                                                                            }
#line 2820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 877 "astree.y" /* yacc.c:1646  */
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
                                                                                if(!checkASTParam(method_list_node_temp->param,(yyvsp[-1].node)))
                                                                                {
                                                                                    printf("line %d :Arguments in \"%s\", does not match with declaration in class \"%s\"\n",line,(yyvsp[-3].node)->varname,(yyvsp[-5].node)->varname);
                                                                                    exit(0);
                                                                                }
                                                                                (yyvsp[-5].node)->nodetype = VARIABLE;
                                                                                (yyvsp[-5].node)->type = gst_node_temp->type;
                                                                                (yyvsp[-5].node)->class = gst_node_temp->class;
                                                                                (yyvsp[-3].node)->nodetype = FUNCTION;
                                                                                (yyvsp[-3].node)->type = method_list_node_temp->type;
                                                                                (yyvsp[-3].node)->class = NULL;
                                                                                (yyvsp[-3].node)->param = (struct AST_Node *)malloc(sizeof(struct AST_Node));
                                                                                (yyvsp[-3].node)->param = (yyvsp[-1].node);
                                                                                (yyval.node) = makeTreeNode(FIELDFUNCTION,(yyvsp[-3].node)->type,(yyvsp[-3].node)->class,(yyvsp[-3].node)->varname,-1,-1,(yyvsp[-5].node),(yyvsp[-3].node),NULL,"fieldfunction");
                                                                                (yyvsp[-1].node) = NULL;
                                                                            }
#line 2859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 911 "astree.y" /* yacc.c:1646  */
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
                                                                                // if(!method_list_node_temp->defined)
                                                                                // {
                                                                                //     printf("*line %d : Undefined reference to \"%s\"\n",line,$3->varname);
                                                                                //     exit(0);
                                                                                // }
                                                                                if(!checkASTParam(method_list_node_temp->param,(yyvsp[-1].node)))
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
                                                                                (yyvsp[-3].node)->param = (struct AST_Node *)malloc(sizeof(struct AST_Node));
                                                                                (yyvsp[-3].node)->param = (yyvsp[-1].node);
                                                                                (yyval.node) = makeTreeNode(FIELDFUNCTION,(yyvsp[-3].node)->type,(yyvsp[-3].node)->class,(yyvsp[-3].node)->varname,-1,-1,(yyvsp[-5].node),(yyvsp[-3].node),NULL,"fieldfunction");
                                                                                (yyvsp[-1].node) = NULL;
                                                                            }
#line 2897 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2901 "y.tab.c" /* yacc.c:1646  */
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
#line 945 "astree.y" /* yacc.c:1906  */

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
