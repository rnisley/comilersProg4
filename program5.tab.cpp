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
SymbolTable *global = new SymbolTable();
SymbolTable *current = global;
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


#line 113 "program5.tab.cpp" /* yacc.c:339  */

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
#line 63 "program5.ypp" /* yacc.c:355  */

  Node *ttype;

#line 200 "program5.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROGRAM5_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 217 "program5.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   466

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  205

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
       0,    98,    98,   102,   108,   117,   120,   123,   126,   129,
     132,   135,   138,   144,   150,   158,   164,   174,   179,   182,
     187,   194,   204,   212,   219,   227,   235,   243,   244,   249,
     252,   257,   263,   266,   269,   272,   275,   283,   286,   289,
     297,   300,   305,   308,   311,   314,   317,   320,   323,   326,
     329,   334,   337,   340,   343,   346,   354,   355,   360,   363,
     370,   373,   378,   381,   385,   388,   391,   394,   397,   400,
     403,   406,   409,   412,   415,   418,   421,   424,   427,   430,
     433,   436,   439,   442,   445,   450,   453,   456,   459,   462,
     467,   470,   475,   480,   483,   488
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
  "$accept", "program", "classDeclaration", "classBody", "vardec", "type",
  "simpletype", "consdec", "methdec", "parList", "parameters", "parameter",
  "block", "lVarDecs", "statements", "statement", "name", "arglist",
  "conStatement", "exps", "exp", "newexp", "bracketexps", "bracketexp",
  "multibrackets", "ident", YY_NULLPTR
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

#define YYPACT_NINF -128

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-128)))

#define YYTABLE_NINF -63

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -15,    11,     5,  -128,  -128,     6,  -128,  -128,    50,  -128,
      11,  -128,    11,   111,    11,  -128,   166,   297,     3,    -3,
      20,    11,  -128,   338,   366,     3,    24,  -128,  -128,   443,
      29,  -128,    11,    11,  -128,     4,    23,  -128,     4,    35,
    -128,   447,  -128,    41,    79,  -128,     4,    37,    62,    11,
      58,    53,  -128,  -128,    66,  -128,  -128,  -128,  -128,    70,
      74,     4,     4,  -128,    65,     4,    65,    65,    65,    83,
      86,   248,  -128,  -128,  -128,  -128,  -128,    65,    65,  -128,
    -128,  -128,    93,   103,   148,   105,    11,  -128,   402,   370,
    -128,    40,  -128,    82,  -128,  -128,   183,   183,  -128,   183,
    -128,  -128,   107,     4,   183,   183,   183,   201,   304,  -128,
    -128,   183,     1,  -128,    11,   419,  -128,  -128,  -128,    11,
     183,    11,   183,   183,  -128,   109,  -128,   369,   214,   250,
     112,   104,   121,  -128,  -128,  -128,   183,  -128,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   263,  -128,  -128,   114,  -128,  -128,   127,  -128,   291,
     331,   124,   183,   436,  -128,  -128,   162,   104,  -128,   123,
     183,   151,   274,   274,   274,   274,   274,   274,    57,    57,
      57,  -128,  -128,  -128,  -128,   436,  -128,   139,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,   123,   146,   155,  -128,   135,
    -128,  -128,  -128,   436,  -128
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,    95,     0,     1,     3,     0,     4,
       0,     5,     0,     0,     0,    17,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,    18,    11,     0,
      19,    12,     0,     0,    19,    27,     0,    13,    27,     0,
       7,     0,     9,     0,     0,     8,    27,     0,     0,     0,
       0,    28,    29,    14,     0,    15,     6,    16,    26,     0,
       0,    27,    27,    31,     0,     0,     0,     0,     0,     0,
       0,     0,    20,    30,    23,    22,    21,     0,     0,    51,
      42,    35,     0,     0,     0,     0,     0,    50,     0,     0,
      40,     0,    46,    52,    25,    24,    56,     0,    63,     0,
      64,    48,     0,     0,     0,     0,     0,     0,     0,    67,
      52,     0,     0,    33,     0,     0,    36,    34,    41,     0,
      56,     0,     0,     0,    54,     0,    57,    60,     0,     0,
       0,    86,    19,    82,    81,    84,    56,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    37,     0,    32,    55,     0,    53,     0,
       0,     0,     0,     0,    83,    66,     0,    87,    90,    88,
      56,     0,    75,    76,    77,    78,    79,    80,    68,    69,
      70,    71,    72,    73,    74,     0,    38,     0,    92,    43,
      45,    61,    47,    93,    91,    89,     0,     0,    65,    58,
      44,    94,    85,     0,    59
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -128,  -128,   167,  -128,  -128,    48,    61,   159,    -7,    63,
    -128,   113,   196,  -128,    91,   -82,   -71,  -117,  -128,    18,
       0,  -128,  -128,  -127,    16,    14
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     9,    13,    49,    15,    16,    17,    50,
      51,    52,    87,    88,    89,    90,   107,   125,    92,   126,
     127,   109,   167,   124,   169,   110
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,     1,   152,   157,   168,     6,    24,   118,    35,    29,
      37,    27,     4,     4,   153,     5,    41,    91,    91,   171,
       4,     1,    18,     8,    19,    38,    20,    25,    26,    44,
      30,    34,    36,   118,    46,    39,    53,    30,    34,    43,
     194,   119,    61,    34,    91,   120,    47,    48,    55,    34,
     121,   122,    34,   197,    57,    34,    14,    10,    34,     4,
      34,    14,    64,    63,    14,    33,   123,    62,    11,    12,
      66,    14,    33,    65,    67,    34,    34,    33,    68,    34,
      58,   192,    71,   -27,   108,    93,    27,    77,     4,    33,
      78,   -19,    91,   147,   148,   149,   150,   128,    96,   129,
     112,    54,    93,   199,   133,   134,   135,    59,    97,    60,
     111,   151,   130,   161,    91,   166,   165,   132,    21,    86,
       4,   204,   159,   160,    69,    70,   170,   186,   154,    22,
      12,   187,    91,   156,   196,   158,   114,   190,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,    98,   200,    99,   100,   198,    79,     4,   201,   202,
     203,   101,   102,   103,   131,    98,   159,    99,   100,     7,
      79,     4,    23,    27,   193,     4,   102,   103,    73,   115,
     191,   104,   105,   195,    28,    12,    98,     0,    99,   100,
     106,    79,     4,     0,     0,   104,   105,   102,   103,     0,
       0,     0,   119,     0,   106,   -62,   136,     0,     0,     0,
       0,   121,   122,   -62,   -62,     0,   104,   105,   163,     0,
       0,   -62,     0,     0,     0,   106,     0,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   164,    27,    79,     4,     0,     0,
      72,    80,    74,    75,    76,    71,    81,   185,     0,    82,
      83,    84,    85,    94,    95,     0,     0,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   188,    27,     0,     4,   144,   145,   146,
     147,   148,   149,   150,     0,    31,    32,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   189,    27,     0,     4,     0,     0,
       0,     0,     0,     0,     0,     0,    40,    12,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   116,     0,    27,     0,     4,     0,     0,    79,     4,
       0,     0,     0,    80,    42,    32,     0,    71,   117,   162,
       0,    82,    83,    84,    85,     0,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,    27,
      79,     4,     0,     0,     0,    80,     0,     0,     0,    71,
     113,     0,     0,    82,    83,    84,    85,    79,     4,     0,
       0,     0,    80,     0,     0,     0,    71,   155,     0,     0,
      82,    83,    84,    85,    79,     4,     0,     0,     0,    80,
      27,     0,     4,    71,    27,     0,     4,    82,    83,    84,
      85,    45,    32,     0,     0,    56,    32
};

static const yytype_int16 yycheck[] =
{
      71,    16,     1,   120,   131,     0,    13,    89,     5,    16,
      13,     7,     9,     9,    13,     1,    23,    88,    89,   136,
       9,    16,     8,    17,    10,     5,    12,    13,    14,     5,
      16,    17,    18,   115,     5,    21,    13,    23,    24,    25,
     167,     1,     5,    29,   115,     5,    32,    33,    13,    35,
      10,    11,    38,   170,    13,    41,     8,     7,    44,     9,
      46,    13,     4,    49,    16,    17,    26,     5,    18,    19,
       4,    23,    24,    20,     4,    61,    62,    29,     4,    65,
       1,   163,    17,     4,    84,    71,     7,     4,     9,    41,
       4,     9,   163,    36,    37,    38,    39,    97,     5,    99,
      86,    38,    88,   185,   104,   105,   106,    44,     5,    46,
       5,   111,     5,     4,   185,    11,     4,   103,     7,    71,
       9,   203,   122,   123,    61,    62,     5,    13,   114,    18,
      19,     4,   203,   119,    11,   121,    88,    13,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,     3,    13,     5,     6,     4,     8,     9,    12,     4,
      25,    13,    14,    15,   103,     3,   166,     5,     6,     2,
       8,     9,    13,     7,    12,     9,    14,    15,    65,    88,
     162,    33,    34,   167,    18,    19,     3,    -1,     5,     6,
      42,     8,     9,    -1,    -1,    33,    34,    14,    15,    -1,
      -1,    -1,     1,    -1,    42,     4,     5,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    -1,    33,    34,     4,    -1,
      -1,    20,    -1,    -1,    -1,    42,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,     4,     7,     8,     9,    -1,    -1,
      64,    13,    66,    67,    68,    17,    18,     4,    -1,    21,
      22,    23,    24,    77,    78,    -1,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    12,     7,    -1,     9,    33,    34,    35,
      36,    37,    38,    39,    -1,    18,    19,    13,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    13,     7,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,     1,    -1,     7,    -1,     9,    -1,    -1,     8,     9,
      -1,    -1,    -1,    13,    18,    19,    -1,    17,    18,    20,
      -1,    21,    22,    23,    24,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,     7,
       8,     9,    -1,    -1,    -1,    13,    -1,    -1,    -1,    17,
      18,    -1,    -1,    21,    22,    23,    24,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    17,    18,    -1,    -1,
      21,    22,    23,    24,     8,     9,    -1,    -1,    -1,    13,
       7,    -1,     9,    17,     7,    -1,     9,    21,    22,    23,
      24,    18,    19,    -1,    -1,    18,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    44,    45,     9,    68,     0,    45,    17,    46,
       7,    18,    19,    47,    48,    49,    50,    51,    68,    68,
      68,     7,    18,    50,    51,    68,    68,     7,    18,    51,
      68,    18,    19,    48,    68,     5,    68,    13,     5,    68,
      18,    51,    18,    68,     5,    18,     5,    68,    68,    48,
      52,    53,    54,    13,    52,    13,    18,    13,     1,    52,
      52,     5,     5,    68,     4,    20,     4,     4,     4,    52,
      52,    17,    55,    54,    55,    55,    55,     4,     4,     8,
      13,    18,    21,    22,    23,    24,    48,    55,    56,    57,
      58,    59,    61,    68,    55,    55,     5,     5,     3,     5,
       6,    13,    14,    15,    33,    34,    42,    59,    63,    64,
      68,     5,    68,    18,    48,    57,     1,    18,    58,     1,
       5,    10,    11,    26,    66,    60,    62,    63,    63,    63,
       5,    49,    68,    63,    63,    63,     5,    13,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    63,     1,    13,    68,    18,    68,    60,    68,    63,
      63,     4,    20,     4,     4,     4,    11,    65,    66,    67,
       5,    60,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,     4,    13,     4,    12,    13,
      13,    62,    58,    12,    66,    67,    11,    60,     4,    58,
      13,    12,     4,    25,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    44,    45,    46,    46,    46,    46,    46,
      46,    46,    46,    47,    47,    47,    47,    48,    49,    49,
      50,    50,    51,    51,    51,    51,    51,    52,    52,    53,
      53,    54,    55,    55,    55,    55,    55,    56,    56,    56,
      57,    57,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    59,    59,    59,    59,    59,    60,    60,    61,    61,
      62,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    64,    64,    64,    64,    64,
      65,    65,    66,    67,    67,    68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     2,     5,     4,     4,     4,
       3,     3,     3,     3,     3,     4,     4,     1,     1,     1,
       5,     6,     6,     6,     7,     7,     4,     0,     1,     1,
       3,     2,     4,     3,     3,     2,     3,     3,     4,     3,
       1,     2,     1,     4,     5,     5,     1,     5,     2,     3,
       1,     1,     1,     3,     2,     3,     0,     1,     5,     7,
       1,     3,     1,     1,     1,     4,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     2,     5,     2,     3,     3,     4,
       1,     2,     3,     2,     3,     1
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
#line 98 "program5.ypp" /* yacc.c:1646  */
    {
                          tree=(yyvsp[0].ttype);
                          (yyval.ttype)=(yyvsp[0].ttype);
                        }
#line 1484 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 102 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyvsp[-1].ttype)->setnext((yyvsp[0].ttype));
                          (yyval.ttype)=(yyvsp[-1].ttype);
                        }
#line 1493 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 108 "program5.ypp" /* yacc.c:1646  */
    {
                        //SymbolTable* classTable = new SymbolTable(current);
                        //current = classTable;
                        //myTypeTable.insert($2->getstring(), current);
                        (yyval.ttype) = new nodeClassDec(2, 1, (yyvsp[-1].ttype), (yyvsp[0].ttype));
                        //current = classTable->getParent();
                        }
#line 1505 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 117 "program5.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new nodeClassBody(3, 1);
                        }
#line 1513 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 120 "program5.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new nodeClassBody(3, 2, (yyvsp[-3].ttype), new Node((yyvsp[-2].ttype), (yyvsp[-1].ttype)));
                        }
#line 1521 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 123 "program5.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new nodeClassBody(3, 3, (yyvsp[-2].ttype), (yyvsp[-1].ttype));
                        }
#line 1529 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 126 "program5.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new nodeClassBody(3, 4, (yyvsp[-2].ttype), (yyvsp[-1].ttype));
                        }
#line 1537 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 129 "program5.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new nodeClassBody(3, 5, (yyvsp[-2].ttype), (yyvsp[-1].ttype));
                        }
#line 1545 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 132 "program5.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new nodeClassBody(3, 6, (yyvsp[-1].ttype));
                        }
#line 1553 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 135 "program5.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new nodeClassBody(3, 7, (yyvsp[-1].ttype));
                        }
#line 1561 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 138 "program5.ypp" /* yacc.c:1646  */
    {
                        (yyval.ttype) = new nodeClassBody(3, 8, (yyvsp[-1].ttype));
                        }
#line 1569 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 144 "program5.ypp" /* yacc.c:1646  */
    {
                          //string myID = $2->getstring();
                          //Entry * var = new Entry(myID, "int");
                          //current->insert(myID, var);
                          (yyval.ttype) = new nodeVardec(4, 1, (yyvsp[-1].ttype));
                        }
#line 1580 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 150 "program5.ypp" /* yacc.c:1646  */
    {
                          //string myType = $1->getstring();
                          //string myID = $2->getstring();
                          //Entry * var = new Entry(myID, \
                          //myType, myTypeTable.lookup(myType));
                          //current->insert($2->getstring(), var);
                          (yyval.ttype) = new nodeVardec(4, 1, (yyvsp[-2].ttype), (yyvsp[-1].ttype));
                        }
#line 1593 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 158 "program5.ypp" /* yacc.c:1646  */
    {
                          //string myID = $3->getstring();
                          //Entry * var = new Entry(myID, "int");
                          //current->insert(myID, var);
                          (yyval.ttype) = new nodeVardec(4, 2, (yyvsp[-3].ttype), (yyvsp[-1].ttype));
                        }
#line 1604 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 164 "program5.ypp" /* yacc.c:1646  */
    {
                          //string myType = $2->getstring();
                          //string myID = $3->getstring();
                          //Entry * var = new Entry(myID, \
                          //myType, myTypeTable.lookup(myType));
                          //current->insert($3->getstring(), var);
                          (yyval.ttype) = new nodeVardec(4, 2, (yyvsp[-3].ttype), new Node ((yyvsp[-2].ttype), (yyvsp[-1].ttype)));
                        }
#line 1617 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 174 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeType(5, 1, (yyvsp[0].ttype));
                        }
#line 1625 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 179 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype)= new nodeSimpletype(6, 1);
                        }
#line 1633 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 182 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype)= new nodeSimpletype(6, 2, (yyvsp[0].ttype));
                        }
#line 1641 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 187 "program5.ypp" /* yacc.c:1646  */
    {
                          //insert ID into symbol table. type is class ID
                          //SymbolTable* classTable = new SymbolTable(current);
                          //current = classTable;
                          (yyval.ttype) = new nodeConsdec(4, 1, (yyvsp[-4].ttype), new Node((yyvsp[-2].ttype), (yyvsp[0].ttype)));
                          //current = classTable->getParent();
                        }
#line 1653 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 194 "program5.ypp" /* yacc.c:1646  */
    {
                          //insert ID into symbol table. type is class ID
                          //SymbolTable* classTable = new SymbolTable(current);
                          //current = classTable;
                         (yyval.ttype) = new nodeConsdec(4, 2, new Node((yyvsp[-5].ttype), (yyvsp[-4].ttype)), new Node\
                          ((yyvsp[-2].ttype), (yyvsp[0].ttype)));
                          //current = classTable->getParent();
                        }
#line 1666 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 204 "program5.ypp" /* yacc.c:1646  */
    {
                          //insert ID into symbol table. type is $1
                          //SymbolTable* classTable = new SymbolTable(current);
                          //current = classTable;
                          (yyval.ttype) = new nodeMethdec(4, 1, new Node((yyvsp[-5].ttype), (yyvsp[-4].ttype)),new Node\
                          ((yyvsp[-2].ttype), (yyvsp[0].ttype)));
                          //current = classTable->getParent();
                        }
#line 1679 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 212 "program5.ypp" /* yacc.c:1646  */
    {
                          //insert ID into symbol table. type is void
                          //SymbolTable* classTable = new SymbolTable(current);
                          //current = classTable;
                          (yyval.ttype) = new nodeMethdec(4, 1, (yyvsp[-4].ttype), new Node((yyvsp[-2].ttype), (yyvsp[0].ttype)));
                          //current = classTable->getParent();
                        }
#line 1691 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 219 "program5.ypp" /* yacc.c:1646  */
    {
                          //insert ID into symbol table. type is $2
                          //SymbolTable* classTable = new SymbolTable(current);
                          //current = classTable;
                          (yyval.ttype) = new nodeMethdec(4, 2, new Node((yyvsp[-6].ttype), new Node((yyvsp[-5].ttype),\
                          (yyvsp[-4].ttype))), new Node((yyvsp[-2].ttype), (yyvsp[0].ttype)));
                          //current = classTable->getParent();
                        }
#line 1704 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 227 "program5.ypp" /* yacc.c:1646  */
    {
                          //insert ID into symbol table. type is void
                          //SymbolTable* classTable = new SymbolTable(current);
                          //current = classTable;
                          (yyval.ttype) = new nodeMethdec(4, 2, new Node((yyvsp[-6].ttype), (yyvsp[-4].ttype)), \
                          new Node((yyvsp[-2].ttype), (yyvsp[0].ttype)));
                          //current = classTable->getParent();
                        }
#line 1717 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 235 "program5.ypp" /* yacc.c:1646  */
    {
                          cout << scanner.lineno() << ":" << firstColumn;
                          cout << ":: "; //<<contents of line << endl;
                          cout << "Error. Expected ) or parameters." << endl;
                          yyerrok;
                        }
#line 1728 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 244 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeParlist(5, 2, (yyvsp[0].ttype));
                        }
#line 1736 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 249 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeParameters(6, 1, (yyvsp[0].ttype));
                        }
#line 1744 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 252 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeParameters(6, 2, (yyvsp[-2].ttype), (yyvsp[0].ttype));
                        }
#line 1752 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 257 "program5.ypp" /* yacc.c:1646  */
    {
                          //insert ID into symbol table. type is $1
                          (yyval.ttype) = new nodeParameter(7, 1, (yyvsp[-1].ttype), (yyvsp[0].ttype));
                        }
#line 1761 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 263 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBlock(5, 1, (yyvsp[-2].ttype), (yyvsp[-1].ttype));
                        }
#line 1769 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 266 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBlock(5, 2, (yyvsp[-1].ttype));
                        }
#line 1777 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 269 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBlock(5, 3, (yyvsp[-1].ttype));
                        }
#line 1785 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 272 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBlock(5, 4);
                        }
#line 1793 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 275 "program5.ypp" /* yacc.c:1646  */
    {
                          cout << scanner.lineno() << ":" << firstColumn;
                          cout << ":: "; //<<contents of line << endl;
                          cout << "Error. Expected }" << endl;
                          yyerrok;
                        }
#line 1804 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 283 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeLVarDecs(6, 1, (yyvsp[-2].ttype), (yyvsp[-1].ttype));
                        }
#line 1812 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 286 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeLVarDecs(6, 2, (yyvsp[-3].ttype), new Node((yyvsp[-2].ttype), (yyvsp[-1].ttype)));
                        }
#line 1820 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 289 "program5.ypp" /* yacc.c:1646  */
    {
                          cout << scanner.lineno() << ":" << firstColumn;
                          cout << ":: "; //<<contents of line << endl;
                          cout << "Error. Suspect missing semicolon." << endl;
                          yyerrok;
                        }
#line 1831 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 297 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatements(6, 1, (yyvsp[0].ttype));
                        }
#line 1839 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 300 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatements(6, 2, (yyvsp[-1].ttype), (yyvsp[0].ttype));
                        }
#line 1847 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 305 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatement(7, 1);
                        }
#line 1855 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 308 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatement(7, 2, (yyvsp[-3].ttype),(yyvsp[-1].ttype));
                        }
#line 1863 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 311 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatement(7, 4, (yyvsp[-4].ttype), (yyvsp[-2].ttype));
                        }
#line 1871 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 314 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatement(7, 6, (yyvsp[-2].ttype));
                        }
#line 1879 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 317 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatement(7, 7, (yyvsp[0].ttype));
                        }
#line 1887 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 320 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatement(7, 8, (yyvsp[-2].ttype), (yyvsp[0].ttype));
                        }
#line 1895 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 323 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatement(7, 9);
                        }
#line 1903 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 326 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatement(7, 10, (yyvsp[-1].ttype));
                        }
#line 1911 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 329 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeStatement(7, 11, (yyvsp[0].ttype));
                        }
#line 1919 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 334 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeName(8, 1);
                        }
#line 1927 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 337 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeName(8, 2, (yyvsp[0].ttype));
                        }
#line 1935 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 340 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeName(8, 3, (yyvsp[-2].ttype), (yyvsp[0].ttype));
                        }
#line 1943 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 343 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeName(8, 5, (yyvsp[-1].ttype), (yyvsp[0].ttype));
                        }
#line 1951 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 346 "program5.ypp" /* yacc.c:1646  */
    {
                          cout << scanner.lineno() << ":" << firstColumn;
                          cout << ":: "; //<<contents of line << endl;
                          cout << "Error. Perhaps you meant period?" << endl;
                          yyerrok;
                        }
#line 1962 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 355 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeArglist(8, 2, (yyvsp[0].ttype));
                        }
#line 1970 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 360 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeConStatement(8, 1, (yyvsp[-2].ttype), (yyvsp[0].ttype));
                        }
#line 1978 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 363 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeConStatement(8, 2, (yyvsp[-4].ttype), \
                          new Node((yyvsp[-2].ttype), (yyvsp[0].ttype)));
                        }
#line 1987 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 370 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeExps(9, 1, (yyvsp[0].ttype));
                        }
#line 1995 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 373 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeExps(9, 2, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2003 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 378 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeExp(10, 1, (yyvsp[0].ttype));
                        }
#line 2011 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 381 "program5.ypp" /* yacc.c:1646  */
    {       
                          (yyval.ttype)=new nodeExp(10, 2);
                          (yyval.ttype)->setval((yyvsp[0].ttype)->getint());
                        }
#line 2020 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 385 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 3);
                        }
#line 2028 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 388 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeExp(10, 4, (yyvsp[-3].ttype), (yyvsp[-1].ttype));
                        }
#line 2036 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 391 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeExp(10, 5);
                        }
#line 2044 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 394 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeExp(10, 6, (yyvsp[0].ttype));
                        }
#line 2052 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 397 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 7, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2060 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 400 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 8, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2068 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 403 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 9, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2076 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 406 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 10, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2084 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 409 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype)=new nodeExp(10, 11, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2092 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 412 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype)=new nodeExp(10, 12, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2100 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 415 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype)=new nodeExp(10, 13, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2108 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 418 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype)=new nodeExp(10, 14, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2116 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 421 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype)=new nodeExp(10, 15, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2124 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 424 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype)=new nodeExp(10, 16, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2132 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 427 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 17, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2140 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 430 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype)=new nodeExp(10, 18, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2148 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 433 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 19, (yyvsp[-2].ttype),(yyvsp[0].ttype));
                        }
#line 2156 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 436 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 20, (yyvsp[0].ttype));
                        }
#line 2164 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 439 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 21, (yyvsp[0].ttype));
                        }
#line 2172 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 442 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 22, (yyvsp[-1].ttype));
                        }
#line 2180 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 445 "program5.ypp" /* yacc.c:1646  */
    { 
                          (yyval.ttype)=new nodeExp(10, 23, (yyvsp[0].ttype));
                        }
#line 2188 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 450 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeNewexp(11, 1, (yyvsp[-3].ttype), (yyvsp[-1].ttype)); 
                        }
#line 2196 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 453 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeNewexp(11, 2, (yyvsp[0].ttype)); 
                        }
#line 2204 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 456 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeNewexp(11, 3, (yyvsp[-1].ttype),(yyvsp[0].ttype)); 
                        }
#line 2212 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 459 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeNewexp(11, 4, (yyvsp[0].ttype)); 
                        }
#line 2220 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 462 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeNewexp(11, 5, (yyvsp[-2].ttype), new Node((yyvsp[-1].ttype),(yyvsp[0].ttype))); 
                        }
#line 2228 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 467 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBracketExps(12, 1, (yyvsp[0].ttype));
                        }
#line 2236 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 470 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBracketExps(12, 2, (yyvsp[-1].ttype),(yyvsp[0].ttype));
                        }
#line 2244 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 475 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeBracketExp(13, 1, (yyvsp[-1].ttype));
                        }
#line 2252 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 480 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeMultibrackets(12, 1);
                        }
#line 2260 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 483 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new nodeMultibrackets(12, 2, (yyvsp[-2].ttype));
                        }
#line 2268 "program5.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 488 "program5.ypp" /* yacc.c:1646  */
    {
                          (yyval.ttype) = new Node();
                          (yyval.ttype) -> setval(scanner.YYText());
                        }
#line 2277 "program5.tab.cpp" /* yacc.c:1646  */
    break;


#line 2281 "program5.tab.cpp" /* yacc.c:1646  */
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
#line 493 "program5.ypp" /* yacc.c:1906  */

