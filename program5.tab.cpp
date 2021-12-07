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
#line 16 "program5.ypp" /* yacc.c:339  */


//#include <cmath> // for pow() in the original version of this
#include <iostream>
#include <FlexLexer.h>// yes have to include this here AND in the 'driver'
#include "nodes.hpp"
#include "typeTable.hpp"
#include "symbolTable.hpp"

//DO NOT USE "namespace std;"
using std::cerr;
using std::cout;
using std::endl;

/*
 * These are declared in "main" so that we can pass values between
 * the two portions of the program.
 */

extern Node *tree;
extern yyFlexLexer scanner;
extern int firstColumn;
TypeTable myTypeTable;
SymbolTable *global = new SymbolTable(nullptr, "global");
SymbolTable *current = global;
int blkNum = 0;
int parNum = 1;
/* 
 * Need to do this define, an "acceptable" hack to interface
 * the C++ scanner with the C parser. 
 * I can still use things like scanner.YYtext() here if I want. Just that
 * (*bison*) does not know about cpp scanners, only the "C" version. 
 */

#define yylex() scanner.yylex()

// need the function prototype for the parser. defined it in the lpp file

void yyerror(const char *);


/*
 * There are lots of examples that have multiple types in the union here.
 * DO NOT DO THAT. Keep it simple, one type. This is the type that you use
 * in the definitions for %type tokens.
 */


#line 115 "program5.tab.cpp" /* yacc.c:339  */

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
   by #include "program5.tab.hpp".  */
#ifndef YY_YY_PROGRAM5_TAB_HPP_INCLUDED
# define YY_YY_PROGRAM5_TAB_HPP_INCLUDED
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
    NUM = 258,
    RPAREN = 259,
    LPAREN = 260,
    NULLT = 261,
    INT = 262,
    THIS = 263,
    ID = 264,
    DOT = 265,
    LBRACK = 266,
    RBRACK = 267,
    SEMI = 268,
    READ = 269,
    NEW = 270,
    CLASS = 271,
    LBRACE = 272,
    RBRACE = 273,
    VOID = 274,
    COMMA = 275,
    PRINT = 276,
    WHILE = 277,
    RETURN = 278,
    IF = 279,
    ELSE = 280,
    ASSIGN = 281,
    EQ = 282,
    NE = 283,
    GE = 284,
    LE = 285,
    GT = 286,
    LT = 287,
    PLUS = 288,
    MINUS = 289,
    OR = 290,
    TIMES = 291,
    DIV = 292,
    MOD = 293,
    AND = 294,
    NEG = 295,
    UPLUS = 296,
    NOT = 297
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 65 "program5.ypp" /* yacc.c:355  */

  Node *ttype;

#line 202 "program5.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROGRAM5_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 219 "program5.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   578

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  248

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   100,   100,   104,   110,   116,   128,   131,   134,   137,
     140,   143,   146,   149,   155,   160,   166,   171,   177,   186,
     196,   205,   218,   223,   231,   242,   253,   259,   267,   282,
     297,   313,   314,   319,   322,   327,   335,   346,   349,   352,
     355,   358,   366,   371,   377,   382,   388,   397,   407,   416,
     426,   432,   440,   443,   448,   451,   454,   457,   460,   463,
     466,   469,   472,   477,   481,   485,   489,   493,   501,   512,
     515,   518,   521,   524,   530,   537,   538,   543,   546,   553,
     556,   561,   564,   568,   571,   574,   577,   580,   587,   590,
     593,   596,   599,   602,   605,   608,   611,   614,   617,   620,
     623,   626,   629,   632,   637,   640,   643,   646,   649,   654,
     658,   662,   668,   673,   677,   683,   686,   689,   694,   699,
     702,   707
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "RPAREN", "LPAREN", "NULLT",
  "INT", "THIS", "ID", "DOT", "LBRACK", "RBRACK", "SEMI", "READ", "NEW",
  "CLASS", "LBRACE", "RBRACE", "VOID", "COMMA", "PRINT", "WHILE", "RETURN",
  "IF", "ELSE", "ASSIGN", "EQ", "NE", "GE", "LE", "GT", "LT", "PLUS",
  "MINUS", "OR", "TIMES", "DIV", "MOD", "AND", "NEG", "UPLUS", "NOT",
  "$accept", "program", "classDeclaration", "classHead", "classBody",
  "vardec", "consdec", "consHead", "methdec", "methHead", "parList",
  "parameters", "parameter", "block", "lVarDecs", "statements",
  "statement", "subblock", "blockHead", "name", "arglist", "conStatement",
  "exps", "exp", "newexp", "bracketexps", "bracketexp", "multibrackets",
  "ebracketexps", "ebracketexp", "emultibrackets", "ident", YY_NULLPTR
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
     295,   296,   297
};
# endif

#define YYPACT_NINF -170

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-170)))

#define YYTABLE_NINF -82

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -15,    14,    56,  -170,    21,  -170,  -170,  -170,  -170,   138,
    -170,    94,  -170,    14,   146,   159,   177,   232,   178,   231,
     129,    14,    38,    89,    91,   121,    94,  -170,   302,   344,
     231,    14,  -170,   177,   385,   131,    14,   135,   130,  -170,
      14,  -170,   177,    14,  -170,   145,  -170,    14,   117,  -170,
     229,  -170,  -170,  -170,   149,   201,   229,   229,   229,   248,
      55,  -170,  -170,   147,  -170,   160,  -170,  -170,  -170,    14,
     118,  -170,   413,  -170,    14,   120,   170,   184,  -170,   176,
    -170,   174,   177,  -170,   197,   174,   194,  -170,  -170,   261,
     207,   203,    64,  -170,  -170,  -170,    14,   229,    71,   191,
    -170,   203,   204,  -170,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,  -170,  -170,   205,
    -170,  -170,   208,  -170,   174,   295,  -170,  -170,   174,  -170,
    -170,  -170,  -170,  -170,   229,  -170,  -170,   222,  -170,   434,
    -170,  -170,  -170,   338,  -170,   218,   321,   321,   321,   321,
     321,   321,   359,   359,   359,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,    94,  -170,  -170,  -170,   226,   240,   214,   241,
     467,   417,  -170,  -170,   485,   141,  -170,    94,  -170,   250,
    -170,   229,  -170,  -170,    14,    44,   229,   229,  -170,   351,
     229,    94,  -170,   520,    94,  -170,  -170,  -170,  -170,   503,
     435,   229,   229,    14,    65,  -170,  -170,   242,  -170,  -170,
     253,   297,  -170,   310,    14,   251,  -170,    14,   254,  -170,
     537,  -170,  -170,   262,   378,   256,  -170,  -170,  -170,   257,
     554,   554,   259,  -170,   260,  -170,  -170,   292,  -170,  -170,
    -170,  -170,   249,  -170,  -170,  -170,   554,  -170
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,   121,     5,     1,     3,     0,
       4,     0,     6,     0,     0,     0,    31,     0,     0,     0,
       0,     0,   109,   111,     0,     0,     0,    11,     0,     0,
       0,     0,    12,    31,     0,     0,     0,     0,    32,    33,
       0,    13,    31,     0,    27,     0,    24,     0,     0,    82,
       0,    83,    69,   113,     0,     0,     0,     0,     0,     0,
       0,    86,    70,     0,   110,     0,    28,    14,    29,     0,
       0,     8,     0,    10,     0,     0,     0,     0,     9,     0,
      35,     0,     0,    36,     0,     0,     0,    30,    15,     0,
       0,   105,   107,   101,   100,   103,     0,    75,     0,     0,
      72,   115,   117,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,   114,     0,
      16,     7,     0,    17,     0,     0,    22,    34,     0,    25,
      19,   102,    85,   106,    75,   108,    73,     0,    76,    79,
      74,    71,   119,     0,   116,     0,    94,    95,    96,    97,
      98,    99,    87,    88,    89,    90,    91,    92,    93,    20,
      21,    23,     0,    54,    68,    40,     0,     0,     0,     0,
       0,     0,    52,    62,     0,     0,    58,    70,    26,     0,
      84,     0,   118,   120,     0,     0,    75,     0,    60,     0,
       0,     0,    38,     0,    70,    41,    39,    53,    66,     0,
       0,    75,     0,     0,     0,   104,    80,     0,    51,    42,
       0,     0,    61,     0,     0,     0,    37,     0,     0,    64,
       0,    67,    65,     0,     0,     0,    50,    43,    46,     0,
       0,     0,     0,    44,     0,    45,    63,     0,    55,    47,
      57,    59,    77,    48,    49,    56,     0,    78
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -170,  -170,   304,  -170,  -170,  -170,   293,    48,    -9,    -8,
      32,  -170,   228,   -81,   148,  -163,  -169,  -170,  -170,   -72,
    -131,  -170,   134,     2,  -170,    18,  -170,  -170,    28,  -170,
    -170,    -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    10,    14,    15,    16,    17,    18,
      37,    38,    39,   126,   170,   171,   172,   173,   174,    59,
     137,   176,   138,   139,    61,    21,    22,    23,   100,   101,
     102,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,     1,   197,   179,   129,    29,    34,   193,    19,    42,
      24,   200,    25,    30,    35,    40,    43,    40,    48,    72,
      63,    42,    60,     5,   197,    70,    42,    35,    43,    75,
      76,   197,    40,    43,    79,    80,   220,    47,     9,    83,
      64,    40,    79,   161,    69,   208,    86,   178,    74,    20,
      45,   197,    89,   175,    92,   210,     7,   209,    93,    94,
      95,   241,   242,    33,    42,    77,   226,   103,   119,   134,
     223,    43,     1,   122,    84,    99,    33,   247,   227,   140,
       5,    40,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   136,    66,   141,   175,   175,
      65,   143,   175,     5,    67,    20,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   133,
     135,   175,    87,    66,   177,    87,    68,   175,   175,   144,
      88,   120,    49,   123,    50,    51,    46,    52,     5,    81,
       5,    53,    96,    54,    55,    11,   201,     5,   175,    85,
      82,    98,    99,    26,    90,     5,    12,    13,   175,   175,
     117,   185,    56,    57,    27,    13,    31,   202,     5,   194,
     189,    58,   118,   177,   175,    66,   204,    32,    13,    44,
     184,    87,   -31,   207,    36,    36,     5,     5,   124,   211,
     215,   125,   213,   218,    49,   203,    50,    51,   194,    52,
       5,   128,   225,   142,   224,    54,    55,   130,    91,   214,
       5,   132,   217,   232,    99,   145,   234,    49,   159,    50,
      51,   160,    52,     5,    56,    57,   180,   188,    54,    55,
     183,   186,    49,    58,    50,    51,    46,    52,     5,    31,
       5,     5,    20,    54,    55,   187,   190,    56,    57,    96,
      41,    13,   -81,    97,   205,   228,    58,   229,    98,    99,
     -81,   -81,    56,    57,   233,   131,   237,   235,   -81,   239,
     240,    58,   243,   244,   246,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   230,   162,    52,     5,   245,     8,    28,   163,    31,
     127,     5,   164,   165,   231,   206,   166,   167,   168,   169,
      71,    13,   199,     0,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     182,    31,     0,     5,   110,   111,   112,   113,   114,   115,
     116,     0,    73,    13,   212,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   238,    31,     0,     5,   113,   114,   115,   116,     0,
       0,     0,     0,    78,    13,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   195,     0,
      31,     0,     5,     0,     0,    52,     5,     0,     0,     0,
     163,   121,    13,     0,   164,   196,   221,     0,   166,   167,
     168,   169,     0,    52,     5,     0,     0,     0,   163,     0,
       0,     0,   164,   222,   181,     0,   166,   167,   168,   169,
       0,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   191,    52,     5,     0,     0,     0,
     163,     0,     0,     0,   164,   192,     0,     0,   166,   167,
     168,   169,   162,    52,     5,     0,     0,     0,   163,     0,
       0,     0,   164,   198,     0,     0,   166,   167,   168,   169,
     191,    52,     5,     0,     0,     0,   163,     0,     0,     0,
     164,   219,     0,     0,   166,   167,   168,   169,    52,     5,
       0,     0,     0,   163,     0,     0,     0,   164,   216,     0,
       0,   166,   167,   168,   169,    52,     5,     0,     0,     0,
     163,     0,     0,     0,   164,   236,     0,     0,   166,   167,
     168,   169,    52,     5,     0,     0,     0,   163,     0,     0,
       0,   164,     0,     0,     0,   166,   167,   168,   169
};

static const yytype_int16 yycheck[] =
{
       1,    16,   171,   134,    85,    14,    15,   170,     9,    17,
      11,   174,    13,    14,    15,    16,    17,    18,    19,    28,
      21,    29,    20,     9,   193,    26,    34,    28,    29,    30,
      31,   200,    33,    34,    35,    36,   199,    19,    17,    40,
      22,    42,    43,   124,    26,     1,    47,   128,    30,    11,
      18,   220,    50,   125,    55,   186,     0,    13,    56,    57,
      58,   230,   231,    15,    72,    33,     1,    12,    69,     5,
     201,    72,    16,    74,    42,    11,    28,   246,    13,     8,
       9,    82,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    96,     5,    98,   170,   171,
      11,    99,   174,     9,    13,    11,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    91,
      92,   193,     5,     5,   125,     5,     5,   199,   200,   101,
      13,    13,     3,    13,     5,     6,     5,     8,     9,     4,
       9,    12,     1,    14,    15,     7,     5,     9,   220,     4,
      20,    10,    11,     7,     5,     9,    18,    19,   230,   231,
      13,   162,    33,    34,    18,    19,     7,    26,     9,   170,
     168,    42,    12,   174,   246,     5,   177,    18,    19,     1,
     162,     5,     4,   184,     7,     7,     9,     9,     4,   187,
     191,    17,   190,   194,     3,   177,     5,     6,   199,     8,
       9,     4,   203,    12,   202,    14,    15,    13,     7,   191,
       9,     4,   194,   214,    11,    11,   217,     3,    13,     5,
       6,    13,     8,     9,    33,    34,     4,    13,    14,    15,
      12,     5,     3,    42,     5,     6,     5,     8,     9,     7,
       9,     9,    11,    14,    15,     5,     5,    33,    34,     1,
      18,    19,     4,     5,     4,    13,    42,     4,    10,    11,
      12,    13,    33,    34,    13,     4,     4,    13,    20,    13,
      13,    42,    13,    13,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,     4,     7,     8,     9,    13,     2,    14,    13,     7,
      82,     9,    17,    18,     4,   181,    21,    22,    23,    24,
      18,    19,   174,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      12,     7,    -1,     9,    33,    34,    35,    36,    37,    38,
      39,    -1,    18,    19,    13,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    13,     7,    -1,     9,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,    18,    19,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,     1,    -1,
       7,    -1,     9,    -1,    -1,     8,     9,    -1,    -1,    -1,
      13,    18,    19,    -1,    17,    18,     1,    -1,    21,    22,
      23,    24,    -1,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    17,    18,    20,    -1,    21,    22,    23,    24,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,     7,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    -1,    17,    18,    -1,    -1,    21,    22,
      23,    24,     7,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    17,    18,    -1,    -1,    21,    22,    23,    24,
       7,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      17,    18,    -1,    -1,    21,    22,    23,    24,     8,     9,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    17,    18,    -1,
      -1,    21,    22,    23,    24,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    -1,    17,    18,    -1,    -1,    21,    22,
      23,    24,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    17,    -1,    -1,    -1,    21,    22,    23,    24
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    44,    45,    46,     9,    74,     0,    45,    17,
      47,     7,    18,    19,    48,    49,    50,    51,    52,    74,
      11,    68,    69,    70,    74,    74,     7,    18,    49,    51,
      74,     7,    18,    50,    51,    74,     7,    53,    54,    55,
      74,    18,    52,    74,     1,    53,     5,    68,    74,     3,
       5,     6,     8,    12,    14,    15,    33,    34,    42,    62,
      66,    67,    74,    74,    68,    11,     5,    13,     5,    68,
      74,    18,    51,    18,    68,    74,    74,    53,    18,    74,
      74,     4,    20,    74,    53,     4,    74,     5,    13,    66,
       5,     7,    74,    66,    66,    66,     1,     5,    10,    11,
      71,    72,    73,    12,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    13,    12,    74,
      13,    18,    74,    13,     4,    17,    56,    55,     4,    56,
      13,     4,     4,    71,     5,    71,    74,    63,    65,    66,
       8,    74,    12,    66,    71,    11,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    13,
      13,    56,     7,    13,    17,    18,    21,    22,    23,    24,
      57,    58,    59,    60,    61,    62,    64,    74,    56,    63,
       4,    20,    12,    12,    68,    74,     5,     5,    13,    66,
       5,     7,    18,    58,    74,     1,    18,    59,    18,    57,
      58,     5,    26,    68,    74,     4,    65,    74,     1,    13,
      63,    66,    13,    66,    68,    74,    18,    68,    74,    18,
      58,     1,    18,    63,    66,    74,     1,    13,    13,     4,
       4,     4,    74,    13,    74,    13,    18,     4,    13,    13,
      13,    59,    59,    13,    13,    13,    25,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    44,    45,    46,    47,    47,    47,    47,
      47,    47,    47,    47,    48,    48,    48,    48,    48,    48,
      48,    48,    49,    49,    50,    51,    51,    51,    52,    52,
      52,    53,    53,    54,    54,    55,    55,    56,    56,    56,
      56,    56,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    58,    58,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    60,    60,    60,    60,    60,    61,    62,
      62,    62,    62,    62,    62,    63,    63,    64,    64,    65,
      65,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    67,    67,    67,    67,    67,    68,
      68,    68,    69,    70,    70,    71,    71,    71,    72,    73,
      73,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     5,     4,     4,
       4,     3,     3,     3,     3,     3,     4,     4,     4,     4,
       5,     5,     4,     5,     2,     4,     5,     2,     3,     3,
       3,     0,     1,     1,     3,     2,     2,     4,     3,     3,
       2,     3,     3,     3,     4,     4,     4,     4,     5,     5,
       3,     3,     1,     2,     1,     4,     5,     5,     1,     5,
       2,     3,     1,     4,     3,     3,     2,     3,     1,     1,
       1,     3,     2,     3,     3,     0,     1,     5,     7,     1,
       3,     1,     1,     1,     4,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     3,     2,     5,     2,     3,     2,     3,     1,
       2,     1,     3,     2,     3,     1,     2,     1,     3,     2,
       3,     1
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
#line 100 "program5.ypp" /* yacc.c:1646  */
    {
                          tree=(yyvsp[0].ttype);
                          (yyval.ttype)=(yyvsp[0].ttype);
                        }
#line 1532 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 104 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyvsp[-1].ttype)->setnext((yyvsp[0].ttype));
                          (yyval.ttype)=(yyvsp[-1].ttype);
                        }
#line 1541 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 110 "program5.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new nodeClassDec(2, 1, (yyvsp[-1].ttype), (yyvsp[0].ttype));
                        current = current->getParent();
                        }
#line 1550 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 116 "program5.ypp" /* yacc.c:1646  */
    {
                          SymbolTable* classTable = new SymbolTable(current,\
                          (yyvsp[0].ttype)->getstring());
                          Entry * myEntry = new Entry("",(yyvsp[0].ttype)->getstring(), \
                          classTable, "class_type");
                          current->insert((yyvsp[0].ttype)->getstring(), myEntry);
                          current = classTable;
                          myTypeTable.insert((yyvsp[0].ttype)->getstring(), myEntry);
                          (yyval.ttype) = new Node((yyvsp[0].ttype));
                        }
#line 1565 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 128 "program5.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new nodeClassBody(3, 1);
                        }
#line 1573 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 131 "program5.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new nodeClassBody(3, 2, (yyvsp[-3].ttype), new Node((yyvsp[-2].ttype), (yyvsp[-1].ttype)));
                        }
#line 1581 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 134 "program5.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new nodeClassBody(3, 3, (yyvsp[-2].ttype), (yyvsp[-1].ttype));
                        }
#line 1589 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 137 "program5.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new nodeClassBody(3, 4, (yyvsp[-2].ttype), (yyvsp[-1].ttype));
                        }
#line 1597 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 140 "program5.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new nodeClassBody(3, 5, (yyvsp[-2].ttype), (yyvsp[-1].ttype));
                        }
#line 1605 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 143 "program5.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new nodeClassBody(3, 6, (yyvsp[-1].ttype));
                        }
#line 1613 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 146 "program5.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new nodeClassBody(3, 7, (yyvsp[-1].ttype));
                        }
#line 1621 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 149 "program5.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new nodeClassBody(3, 8, (yyvsp[-1].ttype));
                        }
#line 1629 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 155 "program5.ypp" /* yacc.c:1646  */
    {
                          Entry * myEntry = new Entry((yyvsp[-1].ttype)->getstring(), "int");
                          current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                          (yyval.ttype) = new nodeVardec(4, 1, (yyvsp[-1].ttype));
                        }
#line 1639 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 160 "program5.ypp" /* yacc.c:1646  */
    {
                          Entry * myEntry = new Entry((yyvsp[-1].ttype)->getstring(), \
                          (yyvsp[-2].ttype)->getstring());
                          current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                          (yyval.ttype) = new nodeVardec(4, 1, (yyvsp[-2].ttype), (yyvsp[-1].ttype));
                        }
#line 1650 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 166 "program5.ypp" /* yacc.c:1646  */
    {
                          Entry * myEntry = new Entry((yyvsp[-1].ttype)->getstring(), "int");
                          current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                          (yyval.ttype) = new nodeVardec(4, 2, (yyvsp[-3].ttype), (yyvsp[-1].ttype));
                        }
#line 1660 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 171 "program5.ypp" /* yacc.c:1646  */
    {
                          Entry * myEntry = new Entry((yyvsp[-1].ttype)->getstring(), \
                          (yyvsp[-2].ttype)->getstring());
                          current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                          (yyval.ttype) = new nodeVardec(4, 2, (yyvsp[-3].ttype), new Node ((yyvsp[-2].ttype), (yyvsp[-1].ttype)));
                        }
#line 1671 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 177 "program5.ypp" /* yacc.c:1646  */
    {
                          Entry * myEntry = new Entry((yyvsp[-1].ttype)->getstring(), "int");
                          for (int i = 0; i < (yyvsp[-2].ttype)->getint(); i++)
                          {
                            myEntry->myType += "[]";
                          }
                          current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                          (yyval.ttype) = new nodeVardec(4, 1, (yyvsp[-2].ttype), (yyvsp[-1].ttype));
                        }
#line 1685 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 186 "program5.ypp" /* yacc.c:1646  */
    {
                          Entry * myEntry = new Entry((yyvsp[-1].ttype)->getstring(), \
                          (yyvsp[-2].ttype)->getstring());
                          for (int i = 0; i < (yyvsp[-2].ttype)->getint(); i++)
                          {
                            myEntry->myType += "[]";
                          }
                          current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                          (yyval.ttype) = new nodeVardec(4, 1, (yyvsp[-3].ttype), new Node((yyvsp[-2].ttype), (yyvsp[-1].ttype)));
                        }
#line 1700 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 196 "program5.ypp" /* yacc.c:1646  */
    {
                          Entry * myEntry = new Entry((yyvsp[-1].ttype)->getstring(), "int");
                          for (int i = 0; i < (yyvsp[-2].ttype)->getint(); i++)
                          {
                            myEntry->myType += "[]";
                          }
                          current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                          (yyval.ttype) = new nodeVardec(4, 2, (yyvsp[-4].ttype), new Node((yyvsp[-2].ttype), (yyvsp[-1].ttype)));
                        }
#line 1714 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 205 "program5.ypp" /* yacc.c:1646  */
    {
                          Entry * myEntry = new Entry((yyvsp[-1].ttype)->getstring(), \
                          (yyvsp[-3].ttype)->getstring());
                          for (int i = 0; i < (yyvsp[-2].ttype)->getint(); i++)
                          {
                            myEntry->myType += "[]";
                          }
                          current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                          (yyval.ttype) = new nodeVardec(4, 2, new Node((yyvsp[-4].ttype), (yyvsp[-3].ttype)), new Node\
                           ((yyvsp[-2].ttype), (yyvsp[-1].ttype)));
                        }
#line 1730 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 218 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeConsdec(4, 1, (yyvsp[-3].ttype), new Node((yyvsp[-2].ttype), (yyvsp[0].ttype)));
                          current = current->getParent();
                          parNum = 1;
                        }
#line 1740 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 223 "program5.ypp" /* yacc.c:1646  */
    {
                         (yyval.ttype) = new nodeConsdec(4, 2, new Node((yyvsp[-4].ttype), (yyvsp[-3].ttype)), new Node\
                          ((yyvsp[-2].ttype), (yyvsp[0].ttype)));
                          current = current->getParent();
                          parNum = 1;
                        }
#line 1751 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 231 "program5.ypp" /* yacc.c:1646  */
    {
                          SymbolTable* classTable = new SymbolTable(current,\
                           (yyvsp[-1].ttype)->getstring());
                          Entry * myEntry = new Entry(""+classTable->consCount\
                          ,(yyvsp[-1].ttype)->getstring(), classTable, "constructor_type");
                          current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                          classTable->consCount ++;
                          current = classTable;
                          (yyval.ttype) = new Node((yyvsp[-1].ttype));
                        }
#line 1766 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 242 "program5.ypp" /* yacc.c:1646  */
    {
                          if(current->myName == "main" && current->paramList \
                          != "")
                          {
                            cout << "Error: Line " << scanner.lineno() << \
                            " main shouldn't have parameters.";
                          }
                          (yyval.ttype) = new nodeMethdec(4, 1, (yyvsp[-3].ttype), new Node((yyvsp[-2].ttype), (yyvsp[0].ttype)));
                          current = current->getParent();
                          parNum = 1;
                        }
#line 1782 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 253 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeMethdec(4, 2, new Node((yyvsp[-4].ttype), (yyvsp[-3].ttype))\
                          , new Node((yyvsp[-2].ttype), (yyvsp[0].ttype)));
                          current = current->getParent();
                          parNum = 1;
                        }
#line 1793 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 259 "program5.ypp" /* yacc.c:1646  */
    {
                          cout << scanner.lineno() << ":" << firstColumn;
                          cout << ":: "; //<<contents of line << endl;
                          cout << "Error. Expected ) or parameters." << endl;
                          yyerrok;
                        }
#line 1804 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 267 "program5.ypp" /* yacc.c:1646  */
    {
                              if((yyvsp[-1].ttype)->getstring() == "main")
                              {
                                if(current->lookup("main") == "not found");
                                {
                              SymbolTable* classTable = new SymbolTable\
                              (current, (yyvsp[-1].ttype)->getstring());
                              Entry * myEntry = new Entry((yyvsp[-1].ttype)-> getstring(),\
                              "int", classTable, "method_type");
                              current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                              current = classTable;
                              (yyval.ttype) = new Node((yyvsp[-1].ttype));
                                }
                              }
                            }
#line 1824 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 282 "program5.ypp" /* yacc.c:1646  */
    {
                              if((yyvsp[-1].ttype)->getstring() == "main")
                              {
                                if(current->lookup("main") == "not found");
                                {
                              SymbolTable* classTable = new SymbolTable\
                              (current, (yyvsp[-1].ttype)->getstring());
                              Entry * myEntry = new Entry((yyvsp[-1].ttype)-> getstring(),\
                              "void", classTable, "method_type");
                              current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                              current = classTable;
                              (yyval.ttype) = new Node((yyvsp[-1].ttype));
                                }
                              }
                            }
#line 1844 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 297 "program5.ypp" /* yacc.c:1646  */
    {
                              if((yyvsp[-1].ttype)->getstring() == "main")
                              {
                                if(current->lookup("main") == "not found");
                                {
                              SymbolTable* classTable = new SymbolTable\
                              (current, (yyvsp[-1].ttype)->getstring());
                              Entry * myEntry = new Entry((yyvsp[-1].ttype)-> getstring(),\
                              (yyvsp[-2].ttype)->getstring(), classTable, "method_type");
                              current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                              current = classTable;
                              (yyval.ttype) = new Node((yyvsp[-2].ttype), (yyvsp[-1].ttype));
                                }
                              }
                            }
#line 1864 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 313 "program5.ypp" /* yacc.c:1646  */
    {(yyval.ttype) = nullptr;}
#line 1870 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 314 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeParlist(5, 2, (yyvsp[0].ttype));
                        }
#line 1878 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 319 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeParameters(6, 1, (yyvsp[0].ttype));
                        }
#line 1886 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 322 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeParameters(6, 2, (yyvsp[-2].ttype), (yyvsp[0].ttype));
                        }
#line 1894 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 327 "program5.ypp" /* yacc.c:1646  */
    {
                          Entry * myEntry = new Entry((yyvsp[0].ttype)->getstring(), "int",\
                          nullptr, "", parNum);
                          parNum++;
                          current->paramList+=" int";
                          current->insert((yyvsp[0].ttype)->getstring(), myEntry);
                          (yyval.ttype) = new nodeParameter(7, 1, (yyvsp[0].ttype));
                        }
#line 1907 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 335 "program5.ypp" /* yacc.c:1646  */
    {
                          Entry * myEntry = new Entry((yyvsp[0].ttype)->getstring(), \
                          (yyvsp[-1].ttype)->getstring(), nullptr, "", parNum);
                          parNum++;
                          current->paramList = current->paramList + " "\
                          + (yyvsp[-1].ttype)->getstring();
                          current->insert((yyvsp[0].ttype)->getstring(), myEntry);
                          (yyval.ttype) = new nodeParameter(7, 1, (yyvsp[-1].ttype), (yyvsp[0].ttype));
                        }
#line 1921 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 346 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBlock(5, 1, (yyvsp[-2].ttype), (yyvsp[-1].ttype));
                        }
#line 1929 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 349 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBlock(5, 2, (yyvsp[-1].ttype));
                        }
#line 1937 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 352 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBlock(5, 3, (yyvsp[-1].ttype));
                        }
#line 1945 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 355 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBlock(5, 4);
                        }
#line 1953 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 358 "program5.ypp" /* yacc.c:1646  */
    {
                          cout << scanner.lineno() << ":" << firstColumn;
                          cout << ":: "; //<<contents of line << endl;
                          cout << "Error. Expected }" << endl;
                          yyerrok;
                        }
#line 1964 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 366 "program5.ypp" /* yacc.c:1646  */
    {
                          Entry * myEntry = new Entry((yyvsp[-1].ttype)->getstring(), "int");
                          current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                          (yyval.ttype) = new nodeVardec(4, 1, (yyvsp[-1].ttype));
                        }
#line 1974 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 371 "program5.ypp" /* yacc.c:1646  */
    {
                          Entry * myEntry = new Entry((yyvsp[-1].ttype)->getstring(), \
                          (yyvsp[-2].ttype)->getstring());
                          current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                          (yyval.ttype) = new nodeVardec(4, 1, (yyvsp[-2].ttype), (yyvsp[-1].ttype));
                        }
#line 1985 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 377 "program5.ypp" /* yacc.c:1646  */
    {
                          Entry * myEntry = new Entry((yyvsp[-1].ttype)->getstring(), "int");
                          current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                          (yyval.ttype) = new nodeVardec(4, 2, (yyvsp[-3].ttype), (yyvsp[-1].ttype));
                        }
#line 1995 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 382 "program5.ypp" /* yacc.c:1646  */
    {
                          Entry * myEntry = new Entry((yyvsp[-1].ttype)->getstring(), \
                          (yyvsp[-2].ttype)->getstring());
                          current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                          (yyval.ttype) = new nodeVardec(4, 2, (yyvsp[-3].ttype), new Node ((yyvsp[-2].ttype), (yyvsp[-1].ttype)));
                        }
#line 2006 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 388 "program5.ypp" /* yacc.c:1646  */
    {
                          Entry * myEntry = new Entry((yyvsp[-1].ttype)->getstring(), "int");
                          for (int i = 0; i < (yyvsp[-2].ttype)->getint(); i++)
                          {
                            myEntry->myType += "[]";
                          }
                          current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                          (yyval.ttype) = new nodeVardec(4, 1, (yyvsp[-2].ttype), (yyvsp[-1].ttype));
                        }
#line 2020 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 397 "program5.ypp" /* yacc.c:1646  */
    {
                          Entry * myEntry = new Entry((yyvsp[-1].ttype)->getstring(), \
                          (yyvsp[-2].ttype)->getstring());
                          for (int i = 0; i < (yyvsp[-2].ttype)->getint(); i++)
                          {
                            myEntry->myType += "[]";
                          }
                          current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                          (yyval.ttype) = new nodeVardec(4, 1, (yyvsp[-3].ttype), new Node((yyvsp[-2].ttype), (yyvsp[-1].ttype)));
                        }
#line 2035 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 407 "program5.ypp" /* yacc.c:1646  */
    {
                          Entry * myEntry = new Entry((yyvsp[-1].ttype)->getstring(), "int");
                          for (int i = 0; i < (yyvsp[-2].ttype)->getint(); i++)
                          {
                            myEntry->myType += "[]";
                          }
                          current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                          (yyval.ttype) = new nodeVardec(4, 2, (yyvsp[-4].ttype), new Node((yyvsp[-2].ttype), (yyvsp[-1].ttype)));
                        }
#line 2049 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 416 "program5.ypp" /* yacc.c:1646  */
    {
                          Entry * myEntry = new Entry((yyvsp[-1].ttype)->getstring(), \
                          (yyvsp[-3].ttype)->getstring());
                          for (int i = 0; i < (yyvsp[-2].ttype)->getint(); i++)
                          {
                            myEntry->myType += "[]";
                          }
                          current->insert((yyvsp[-1].ttype)->getstring(), myEntry);
                          (yyval.ttype) = new nodeVardec(4, 2, new Node((yyvsp[-4].ttype), (yyvsp[-3].ttype)), new Node ((yyvsp[-2].ttype), (yyvsp[-1].ttype)));
                        }
#line 2064 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 426 "program5.ypp" /* yacc.c:1646  */
    {
                          cout << scanner.lineno() << ":" << firstColumn;
                          cout << ":: "; //<<contents of line << endl;
                          cout << "Error. Suspect missing semicolon." << endl;
                          yyerrok;
                        }
#line 2075 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 432 "program5.ypp" /* yacc.c:1646  */
    {
                          cout << scanner.lineno() << ":" << firstColumn;
                          cout << ":: "; //<<contents of line << endl;
                          cout << "Error. Suspect missing semicolon." << endl;
                          yyerrok;
                        }
#line 2086 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 440 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatements(6, 1, (yyvsp[0].ttype));
                        }
#line 2094 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 443 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatements(6, 2, (yyvsp[-1].ttype), (yyvsp[0].ttype));
                        }
#line 2102 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 448 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatement(7, 1);
                        }
#line 2110 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 451 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatement(7, 2, (yyvsp[-3].ttype),(yyvsp[-1].ttype));
                        }
#line 2118 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 454 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatement(7, 4, (yyvsp[-4].ttype), (yyvsp[-2].ttype));
                        }
#line 2126 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 457 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatement(7, 6, (yyvsp[-2].ttype));
                        }
#line 2134 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 460 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatement(7, 7, (yyvsp[0].ttype));
                        }
#line 2142 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 463 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatement(7, 8, (yyvsp[-2].ttype), (yyvsp[0].ttype));
                        }
#line 2150 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 466 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatement(7, 9);
                        }
#line 2158 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 469 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatement(7, 10, (yyvsp[-1].ttype));
                        }
#line 2166 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 472 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatement(7, 11, (yyvsp[0].ttype));
                        }
#line 2174 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 477 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBlock(5, 1, (yyvsp[-2].ttype), (yyvsp[-1].ttype));
                          current = current->getParent();
                        }
#line 2183 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 481 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBlock(5, 2, (yyvsp[-1].ttype));
                          current = current->getParent();
                        }
#line 2192 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 485 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBlock(5, 3, (yyvsp[-1].ttype));
                          current = current->getParent();
                        }
#line 2201 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 489 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBlock(5, 4);
                          current = current->getParent();
                        }
#line 2210 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 493 "program5.ypp" /* yacc.c:1646  */
    {
                          cout << scanner.lineno() << ":" << firstColumn;
                          cout << ":: "; //<<contents of line << endl;
                          cout << "Error. Expected }" << endl;
                          yyerrok;
                        }
#line 2221 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 501 "program5.ypp" /* yacc.c:1646  */
    {
                          SymbolTable* classTable = new SymbolTable(current,\
                          "@" + blkNum);
                          Entry * myEntry = new Entry("@" + blkNum,\
                          "", classTable);
                          current->insert("@" + blkNum, myEntry);
                          blkNum++;
                          current = classTable;
                        }
#line 2235 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 512 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeName(8, 1);
                        }
#line 2243 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 515 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeName(8, 2, (yyvsp[0].ttype));
                        }
#line 2251 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 518 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeName(8, 3, (yyvsp[-2].ttype), (yyvsp[0].ttype));
                        }
#line 2259 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 521 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeName(8, 5, (yyvsp[-1].ttype), (yyvsp[0].ttype));
                        }
#line 2267 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 524 "program5.ypp" /* yacc.c:1646  */
    {
                          cout << scanner.lineno() << ":" << firstColumn;
                          cout << ":: "; //<<contents of line << endl;
                          cout << "Error. Perhaps you meant period?" << endl;
                          yyerrok;
                        }
#line 2278 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 530 "program5.ypp" /* yacc.c:1646  */
    {                          
                          cout << scanner.lineno() << ":" << firstColumn;
                          cout << "Error. keyword THIS must be start of name"\
                          << endl << "This variable will be ignored." << endl;
                        }
#line 2288 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 538 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeArglist(8, 2, (yyvsp[0].ttype));
                        }
#line 2296 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 543 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeConStatement(8, 1, (yyvsp[-2].ttype), (yyvsp[0].ttype));
                        }
#line 2304 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 546 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeConStatement(8, 2, (yyvsp[-4].ttype), \
                          new Node((yyvsp[-2].ttype), (yyvsp[0].ttype)));
                        }
#line 2313 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 553 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeExps(9, 1, (yyvsp[0].ttype));
                        }
#line 2321 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 556 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeExps(9, 2, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2329 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 561 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeExp(10, 1, (yyvsp[0].ttype));
                        }
#line 2337 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 564 "program5.ypp" /* yacc.c:1646  */
    {       
                          (yyval.ttype)=new nodeExp(10, 2);
                          (yyval.ttype)->setval((yyvsp[0].ttype)->getint());
                        }
#line 2346 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 568 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 3);
                        }
#line 2354 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 571 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeExp(10, 4, (yyvsp[-3].ttype), (yyvsp[-1].ttype));
                        }
#line 2362 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 574 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeExp(10, 5);
                        }
#line 2370 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 577 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeExp(10, 6, (yyvsp[0].ttype));
                        }
#line 2378 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 580 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 7, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                          if ((yyvsp[-2].ttype)->check(current) != "int")
                          {
                            cout << "Error " << scanner.lineno() << ": left arg is not of type int." << endl;
                          }
                        }
#line 2390 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 587 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 8, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2398 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 590 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 9, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2406 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 593 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 10, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2414 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 596 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype)=new nodeExp(10, 11, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2422 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 599 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype)=new nodeExp(10, 12, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2430 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 602 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype)=new nodeExp(10, 13, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2438 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 605 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype)=new nodeExp(10, 14, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2446 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 608 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype)=new nodeExp(10, 15, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2454 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 611 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype)=new nodeExp(10, 16, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2462 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 614 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 17, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2470 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 617 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype)=new nodeExp(10, 18, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2478 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 620 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 19, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2486 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 623 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 20, (yyvsp[0].ttype));
                        }
#line 2494 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 626 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 21, (yyvsp[0].ttype));
                        }
#line 2502 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 629 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 22, (yyvsp[-1].ttype));
                        }
#line 2510 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 632 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 23, (yyvsp[0].ttype));
                        }
#line 2518 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 637 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeNewexp(11, 1, (yyvsp[-1].ttype)); 
                        }
#line 2526 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 640 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new Node(); 
                        }
#line 2534 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 643 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeNewexp(11, 3, (yyvsp[0].ttype)); 
                        }
#line 2542 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 646 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeNewexp(11, 2, (yyvsp[0].ttype)); 
                        }
#line 2550 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 649 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeNewexp(11, 3, (yyvsp[-1].ttype),(yyvsp[0].ttype)); 
                        }
#line 2558 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 654 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBracketExps(12, 1, (yyvsp[0].ttype));
                          (yyval.ttype)->setval(1);
                        }
#line 2567 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 658 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBracketExps(12, 2, (yyvsp[-1].ttype),(yyvsp[0].ttype));
                          (yyval.ttype)->setval(1 + (yyvsp[0].ttype)->getint());
                        }
#line 2576 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 662 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new Node((yyvsp[0].ttype));
                          (yyval.ttype)->setval((yyvsp[0].ttype)->getint());
                        }
#line 2585 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 668 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBracketExp(13, 1, (yyvsp[-1].ttype));
                        }
#line 2593 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 673 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeMultibrackets(12, 1);
                          (yyval.ttype)->setval(1);
                        }
#line 2602 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 677 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeMultibrackets(12, 2, (yyvsp[-2].ttype));
                          (yyval.ttype)->setval(1+ (yyvsp[-2].ttype)->getint());
                        }
#line 2611 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 683 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBracketExps(12, 1, (yyvsp[0].ttype));
                        }
#line 2619 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 686 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBracketExps(12, 2, (yyvsp[-1].ttype),(yyvsp[0].ttype));
                        }
#line 2627 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 689 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new Node((yyvsp[0].ttype));
                        }
#line 2635 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 694 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBracketExp(13, 1, (yyvsp[-1].ttype));
                        }
#line 2643 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 699 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeMultibrackets(12, 1);
                        }
#line 2651 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 702 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeMultibrackets(12, 2, (yyvsp[-2].ttype));
                        }
#line 2659 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 707 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new Node();
                          (yyval.ttype) -> setval(scanner.YYText());
                        }
#line 2668 "program5.tab.cpp" /* yacc.c:1646  */
    break;


#line 2672 "program5.tab.cpp" /* yacc.c:1646  */
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
#line 712 "program5.ypp" /* yacc.c:1906  */

