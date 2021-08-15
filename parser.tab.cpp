/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.ypp"

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <chrono>
#include <cstring>
#include "query.hpp"
using namespace std;

#define YYDEBUG 1

 char *filename = (char *)"formula";
 
 void yyerror(string s) {
   cerr << s << " in " << filename << endl;
   exit(EXIT_FAILURE);
 }

 extern int yylex();

 Query *subQuery = nullptr;
 Query *superQuery = nullptr;
 Query *schema = nullptr;
 

#line 97 "parser.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_TAB_HPP_INCLUDED
# define YY_YY_PARSER_TAB_HPP_INCLUDED
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
    select_token = 258,
    distinct_token = 259,
    where_token = 260,
    as_token = 261,
    union_token = 262,
    optional_token = 263,
    minus_token = 264,
    prefix_token = 265,
    schema_token = 266,
    superquery_token = 267,
    subquery_token = 268,
    limit_token = 269,
    from_token = 270,
    named_token = 271,
    order_by_token = 272,
    asc_token = 273,
    desc_token = 274,
    filter_token = 275,
    regex_token = 276,
    group_by_token = 277,
    and_token = 278,
    or_token = 279,
    graph_token = 280,
    builtin_str_token = 281,
    noteq_token = 282,
    bind_token = 283,
    round_token = 284,
    offset_token = 285,
    abs_token = 286,
    datatype_token = 287,
    values_token = 288,
    contains_token = 289,
    lcase_token = 290,
    is_literal_token = 291,
    is_uri_token = 292,
    bound_token = 293,
    var_token = 294,
    iri_token = 295,
    str_token = 296,
    string_token = 297,
    blank_node_token = 298,
    int_token = 299,
    geq_token = 300,
    leq_token = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "parser.ypp"

  string *s;
  Pattern *p;
  RDFValue *v;
  vector <RDFValue* > *v1;
  vector <pair<RDFValue*, vector<RDFValue*> > > *v2;
  vector <Expression*> *v3;
  map<string, string> *m;
  Query *q;
  Expression *e;
  int i;
  pair<set<string>, set<string> > *ss;
  pair<int, int> *pii;

#line 211 "parser.tab.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   595

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  234

#define YYUNDEFTOK  2
#define YYMAXUTOK   301


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,     2,     2,     2,     2,     2,
      56,    57,    53,    51,    63,    52,    60,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    55,    61,
      46,    48,    47,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    62,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,    59,     2,     2,     2,     2,
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
      49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    67,    67,    71,    77,    81,    86,    91,    96,   112,
     118,   123,   129,   134,   137,   142,   147,   150,   155,   158,
     163,   167,   173,   176,   182,   188,   191,   194,   197,   200,
     203,   206,   209,   212,   215,   218,   221,   224,   227,   230,
     233,   236,   239,   244,   249,   254,   259,   264,   269,   272,
     277,   283,   295,   301,   305,   310,   319,   324,   327,   332,
     336,   340,   345,   349,   356,   360,   365,   370,   377,   380,
     385,   389,   395,   400,   403,   406,   409,   412,   415,   420,
     431,   436,   441,   447,   450,   453,   458,   461,   464,   467,
     470,   475,   478,   483,   486,   489,   494,   497,   502,   505,
     510,   515,   518,   522,   525,   528,   531,   534,   537,   540,
     543,   546,   551,   556,   561,   566,   571,   575
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "select_token", "distinct_token",
  "where_token", "as_token", "union_token", "optional_token",
  "minus_token", "prefix_token", "schema_token", "superquery_token",
  "subquery_token", "limit_token", "from_token", "named_token",
  "order_by_token", "asc_token", "desc_token", "filter_token",
  "regex_token", "group_by_token", "and_token", "or_token", "graph_token",
  "builtin_str_token", "noteq_token", "bind_token", "round_token",
  "offset_token", "abs_token", "datatype_token", "values_token",
  "contains_token", "lcase_token", "is_literal_token", "is_uri_token",
  "bound_token", "var_token", "iri_token", "str_token", "string_token",
  "blank_node_token", "int_token", "'!'", "'<'", "'>'", "'='", "geq_token",
  "leq_token", "'+'", "'-'", "'*'", "'/'", "':'", "'('", "')'", "'{'",
  "'}'", "'.'", "';'", "'a'", "','", "$accept", "Program", "Schema",
  "SuperQuery", "SubQuery", "Query", "SubSelect", "Decl", "PrefixDecl",
  "Prefix", "SelectClause", "DistinctClause", "Selects", "Projections",
  "Projection", "Var", "Expression", "DatasetClause", "WhereClause",
  "GroupGraphPattern", "GroupGraphPatternSub", "GroupGraphPatternSubS",
  "TriplesBlock", "TriplesSameSubjectPath", "VarOrTerm", "VarOrIri",
  "IRIRef", "RDFLiteral", "PropertyListPathNotEmpty", "Verb", "ObjectList",
  "Object", "GraphPatternNotTriples", "GroupOrUnionGraphPattern",
  "OptionalGraphPattern", "MinusGraphPattern", "SolutionModifier",
  "LimitOffset", "OrderList", "OrderElem", "Filter", "GroupConditions",
  "GroupCondition", "BuiltInCall", "GraphGraphPattern", "Bind",
  "ValuesClause", "DataBlockValue", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,    33,    60,    62,    61,   300,
     301,    43,    45,    42,    47,    58,    40,    41,   123,   125,
      46,    59,    97,    44
};
# endif

#define YYPACT_NINF (-76)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-15)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,   -76,    24,   110,   310,     3,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,    -6,   -26,   -76,   -24,   -76,
     -76,   -76,    27,    68,   -76,    93,   104,   -76,    79,   310,
     -76,   -76,    77,   185,    98,   -76,   151,   -76,   -76,   -76,
     -76,   -24,   -76,    91,   -76,   118,   -76,   -76,    73,     7,
     -76,   185,   185,   -76,   -76,   -76,   247,   -76,   -21,   -76,
     -76,   101,    14,   102,    91,   -76,   106,   116,   119,   123,
     124,   126,   129,   130,   132,   133,   247,   247,   -76,   150,
     134,   -76,   -76,   -76,     2,   -76,    87,   -76,    76,   122,
       9,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     153,   541,   274,   153,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   136,   188,   146,
     105,   -76,   163,   164,   -76,    76,   -76,   -76,   122,   -76,
     178,   186,   198,   194,   289,   321,   333,   365,   212,   377,
     409,   421,   175,   -76,   176,    25,    13,   117,   117,   117,
     117,   117,   117,    78,    78,   -76,   -76,   453,   -76,   102,
     -76,   101,   101,   273,    96,   181,   -76,   -76,   310,   227,
     -76,   -76,   -76,   -76,   -76,   199,   210,   -76,   -76,   220,
     237,   153,   -76,   247,   -76,   -76,   -76,   -76,   247,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   247,   -76,
     101,   247,   105,   101,   195,   196,   211,   223,   213,    94,
     465,   497,   -76,   160,   -76,   -76,   -76,   -76,   -76,   -76,
      87,   -76,   247,   -76,   -76,   153,   -76,   -33,   509,   197,
     -76,   -76,   -76,   -76
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,    12,     0,     0,    56,    10,     1,    12,    12,    59,
      62,    13,    64,    60,    65,     0,     4,    54,    14,    57,
      61,    58,    14,     0,     6,     0,     0,     7,     0,    56,
      69,    68,    55,    14,     0,    12,    17,    46,    12,    63,
      53,    14,    72,    67,    71,     0,     3,    16,     0,     0,
       2,    14,    14,    11,    24,    19,    14,    15,    18,    21,
      22,     0,    14,    85,    66,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    14,    40,     0,
      43,    41,    39,    20,    56,    47,    14,    44,     0,     0,
      90,    14,    14,    14,    14,    14,    14,    14,    14,    14,
       0,    37,     0,     0,    14,    14,    14,    14,    14,    14,
      14,    14,    14,    14,    14,    14,    14,     0,     0,     0,
      52,    45,     0,     0,    95,    83,    92,   100,    84,    99,
       0,     0,   115,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,    35,    36,    34,    29,    30,
      31,    32,    33,    25,    26,    27,    28,     0,    49,    85,
      48,     0,     0,     0,    14,     0,    80,    50,    56,    73,
      74,    75,    76,    77,    78,     0,     0,    91,    98,    88,
      89,     0,     8,    14,   103,   104,   105,   106,    14,   108,
     109,   110,   111,    23,    42,     9,    81,    82,    14,    97,
       0,    14,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,     0,    51,    79,    94,    93,    86,    87,
      14,   101,    14,   107,    96,     0,   117,    14,     0,     0,
     114,   116,   102,   113
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -76,   -76,   -76,   218,   234,    -2,   -76,   269,   -76,   250,
     190,   -76,   -76,   -76,   219,   -47,    -7,   -76,   162,   -51,
     -76,    88,   -75,   264,   -31,   -14,    -4,    -1,   -76,   254,
     245,   248,   -76,   -76,   -76,   -76,   147,   -76,   -76,   189,
     -76,   -76,   187,   154,   -76,   -76,   -76,   -76
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    23,    26,    24,   117,    25,     5,    15,
      37,    48,    57,    58,    59,    78,    79,    49,    63,   166,
     119,   167,    16,    17,    18,    19,    80,    81,    32,    33,
      43,    44,   168,   169,   170,   171,    90,   132,   125,   126,
     172,   128,   129,    82,   173,   174,   182,   227
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    60,    42,    21,    31,    36,    27,    10,    11,   120,
      85,    60,    61,    22,    20,     9,    10,    11,    54,    13,
      42,    42,    62,   130,     6,    20,   230,    31,    21,    20,
      86,     1,    21,    27,    29,    56,   104,    20,    30,   131,
     106,     9,    10,    11,    12,    13,    14,    20,    20,    28,
      21,    21,   106,   142,    10,    11,   144,   -14,    87,   107,
     108,   109,   110,   111,   112,   113,   114,   115,    11,   101,
     102,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      20,    35,   121,    21,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   202,   122,   123,    36,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     196,   197,    54,   161,   162,   124,    38,   104,   105,    88,
      39,   106,     7,     8,    89,   163,    55,    10,    11,    56,
     164,   114,   115,   165,   208,     9,    10,    11,    41,    13,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   212,
     200,   221,   215,    45,    52,    47,   103,   222,    53,    84,
      20,   127,    91,    84,    20,    29,   225,    21,   112,   113,
     114,   115,    92,   104,   105,    93,   209,   106,   229,    94,
      95,   210,    96,   104,   105,    97,    98,   106,    99,   100,
     116,   211,    54,    61,   213,   158,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   160,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   228,   226,   104,   105,   175,
     176,   106,   179,   231,     9,    10,    11,    12,    13,    14,
     180,   181,   192,   193,   203,   104,   105,   201,   204,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   205,
     206,   207,   216,   217,   233,   218,    50,   183,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   219,    66,    46,
       4,   220,    34,    67,   118,   188,    68,    83,    69,    70,
     159,    71,    72,    73,    74,    75,    54,    10,    11,    12,
     214,    14,    76,    40,    66,    51,    64,   104,   105,    67,
      65,   106,    68,    77,    69,    70,   195,    71,    72,    73,
      74,    75,   104,   105,   177,   178,   106,   199,     0,     0,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   198,
       0,   143,     0,     0,     0,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   104,   105,   184,     0,   106,     9,
      10,    11,    12,    13,    14,     0,   104,   105,     0,     0,
     106,     0,     0,     0,     0,   -14,     0,   107,   108,   109,
     110,   111,   112,   113,   114,   115,     0,     0,   185,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   104,   105,
     186,     0,   106,     0,     0,     0,     0,     0,     0,     0,
     104,   105,     0,     0,   106,     0,     0,     0,     0,     0,
       0,   107,   108,   109,   110,   111,   112,   113,   114,   115,
       0,     0,   187,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   104,   105,   189,     0,   106,     0,     0,     0,
       0,     0,     0,     0,   104,   105,     0,     0,   106,     0,
       0,     0,     0,     0,     0,   107,   108,   109,   110,   111,
     112,   113,   114,   115,     0,     0,   190,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   104,   105,   191,     0,
     106,     0,     0,     0,     0,     0,     0,     0,   104,   105,
       0,     0,   106,     0,     0,     0,     0,     0,     0,   107,
     108,   109,   110,   111,   112,   113,   114,   115,     0,     0,
     194,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     104,   105,   223,     0,   106,     0,     0,     0,     0,     0,
       0,     0,   104,   105,     0,     0,   106,     0,     0,     0,
       0,     0,     0,   107,   108,   109,   110,   111,   112,   113,
     114,   115,     0,     0,   224,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   104,   105,   232,     0,   106,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   107,   108,   109,
     110,   111,   112,   113,   114,   115
};

static const yytype_int16 yycheck[] =
{
       4,    48,    33,     4,    18,     3,     8,    40,    41,    84,
      61,    58,     5,    10,    18,    39,    40,    41,    39,    43,
      51,    52,    15,    14,     0,    29,    59,    41,    29,    33,
      16,    11,    33,    35,    60,    56,    23,    41,    62,    30,
      27,    39,    40,    41,    42,    43,    44,    51,    52,    55,
      51,    52,    27,   100,    40,    41,   103,    55,    62,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    41,    76,
      77,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      84,    13,    86,    84,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   168,    18,    19,     3,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     161,   162,    39,     8,     9,    39,    12,    23,    24,    17,
      41,    27,    12,    13,    22,    20,    53,    40,    41,    56,
      25,    53,    54,    28,   181,    39,    40,    41,    61,    43,
      46,    47,    48,    49,    50,    51,    52,    53,    54,   200,
     164,    57,   203,    55,    63,     4,     6,    63,    40,    58,
     164,    39,    56,    58,   168,    60,     6,   168,    51,    52,
      53,    54,    56,    23,    24,    56,   183,    27,   225,    56,
      56,   188,    56,    23,    24,    56,    56,    27,    56,    56,
      56,   198,    39,     5,   201,    59,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    59,    46,    47,    48,    49,
      50,    51,    52,    53,    54,   222,   220,    23,    24,    56,
      56,    27,    44,   227,    39,    40,    41,    42,    43,    44,
      44,    33,    57,    57,     7,    23,    24,    56,    39,    27,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    39,
      30,    14,    57,    57,    57,    44,    38,    63,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    44,    21,    35,
       1,    58,    22,    26,    84,    63,    29,    58,    31,    32,
     118,    34,    35,    36,    37,    38,    39,    40,    41,    42,
     202,    44,    45,    29,    21,    41,    51,    23,    24,    26,
      52,    27,    29,    56,    31,    32,   159,    34,    35,    36,
      37,    38,    23,    24,   125,   128,    27,   163,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    56,
      -1,    57,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    23,    24,    57,    -1,    27,    39,
      40,    41,    42,    43,    44,    -1,    23,    24,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    55,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    57,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    23,    24,
      57,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    57,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    23,    24,    57,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    57,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    23,    24,    57,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      57,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      23,    24,    57,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    57,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    23,    24,    57,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    65,    66,    71,    72,     0,    12,    13,    39,
      40,    41,    42,    43,    44,    73,    86,    87,    88,    89,
      90,    91,    10,    67,    69,    71,    68,    69,    55,    60,
      62,    89,    92,    93,    73,    13,     3,    74,    12,    41,
      87,    61,    88,    94,    95,    55,    68,     4,    75,    81,
      67,    93,    63,    40,    39,    53,    56,    76,    77,    78,
      79,     5,    15,    82,    94,    95,    21,    26,    29,    31,
      32,    34,    35,    36,    37,    38,    45,    56,    79,    80,
      90,    91,   107,    78,    58,    83,    16,    90,    17,    22,
     100,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    80,    80,     6,    23,    24,    27,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    56,    70,    74,    84,
      86,    90,    18,    19,    39,   102,   103,    39,   105,   106,
      14,    30,   101,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    79,    57,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    59,    82,
      59,     8,     9,    20,    25,    28,    83,    85,    96,    97,
      98,    99,   104,   108,   109,    56,    56,   103,   106,    44,
      44,    33,   110,    63,    57,    57,    57,    57,    63,    57,
      57,    57,    57,    57,    57,   100,    83,    83,    56,   107,
      89,    56,    86,     7,    39,    39,    30,    14,    79,    80,
      80,    80,    83,    80,    85,    83,    57,    57,    44,    44,
      58,    57,    63,    57,    57,     6,    90,   111,    80,    79,
      59,    90,    57,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    65,    66,    66,    67,    68,    69,    70,
      71,    72,    72,    73,    73,    74,    75,    75,    76,    76,
      77,    77,    78,    78,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    81,    81,    81,    82,    83,    83,
      84,    85,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    89,    90,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    95,    96,    96,    96,    96,    96,    96,    97,
      97,    98,    99,   100,   100,   100,   101,   101,   101,   101,
     101,   102,   102,   103,   103,   103,   104,   104,   105,   105,
     106,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   108,   109,   110,   110,   111,   111
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     5,     3,     0,     1,     1,     7,     3,
       1,     5,     0,     1,     0,     3,     1,     0,     1,     1,
       2,     1,     1,     5,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     1,
       1,     1,     4,     1,     3,     4,     0,     2,     3,     3,
       2,     3,     0,     3,     1,     2,     0,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     4,     2,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     2,     2,     2,     0,     4,     4,     2,     2,
       0,     2,     1,     4,     4,     1,     4,     2,     2,     1,
       1,     6,     8,     4,     4,     4,     4,     6,     4,     4,
       4,     4,     3,     6,     5,     0,     2,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 67 "parser.ypp"
                                                                    {
  subQuery = (yyvsp[-2].q);
  superQuery = (yyvsp[0].q);
 }
#line 1637 "parser.tab.cpp"
    break;

  case 3:
#line 71 "parser.ypp"
                                                             {
  subQuery = (yyvsp[0].q);
  superQuery = (yyvsp[-2].q);
 }
#line 1646 "parser.tab.cpp"
    break;

  case 4:
#line 77 "parser.ypp"
                                       {
  schema = new Query(*(yyvsp[-1].m), vector<Expression*>(), (yyvsp[0].p));
  delete (yyvsp[-1].m);
 }
#line 1655 "parser.tab.cpp"
    break;

  case 5:
#line 81 "parser.ypp"
  {
  schema = nullptr;
 }
#line 1663 "parser.tab.cpp"
    break;

  case 6:
#line 86 "parser.ypp"
                  {
  (yyval.q) = (yyvsp[0].q);
 }
#line 1671 "parser.tab.cpp"
    break;

  case 7:
#line 91 "parser.ypp"
                {
  (yyval.q) = (yyvsp[0].q);
 }
#line 1679 "parser.tab.cpp"
    break;

  case 8:
#line 96 "parser.ypp"
                                                                                             {
  RDFValue *v = nullptr;
  vector<RDFValue*> values;
  if ((yyvsp[0].v1)->size() > 0) {
    v = (*(yyvsp[0].v1))[0];
    values = vector<RDFValue*>((yyvsp[0].v1)->begin() + 1, (yyvsp[0].v1)->end());
  }
  delete (yyvsp[0].v1);
  (yyval.q) = new Query(*(yyvsp[-6].m), *(yyvsp[-5].v3), (yyvsp[-3].p), *(yyvsp[-4].ss), (yyvsp[-1].pii)->first, (yyvsp[-1].pii)->second, v, values);
  delete (yyvsp[-6].m);
  delete (yyvsp[-5].v3);
  delete (yyvsp[-4].ss);
  delete (yyvsp[-1].pii);
 }
#line 1698 "parser.tab.cpp"
    break;

  case 9:
#line 112 "parser.ypp"
                                                     {
  Query *q = new Query(map<string, string>(), *(yyvsp[-2].v3), (yyvsp[-1].p));
  (yyval.p) = new SubqueryPattern(q);
 }
#line 1707 "parser.tab.cpp"
    break;

  case 10:
#line 118 "parser.ypp"
                 {
  (yyval.m) = (yyvsp[0].m);
 }
#line 1715 "parser.tab.cpp"
    break;

  case 11:
#line 123 "parser.ypp"
                                                         {
  (yyval.m) = (yyvsp[-4].m);
  (*(yyval.m))[*(yyvsp[-2].s)] = *(yyvsp[0].s);
  delete (yyvsp[-2].s);
  delete (yyvsp[0].s);
 }
#line 1726 "parser.tab.cpp"
    break;

  case 12:
#line 129 "parser.ypp"
   {
  (yyval.m) = new map<string, string>();
 }
#line 1734 "parser.tab.cpp"
    break;

  case 13:
#line 134 "parser.ypp"
                  {
  (yyval.s) = (yyvsp[0].s);
 }
#line 1742 "parser.tab.cpp"
    break;

  case 14:
#line 137 "parser.ypp"
  {
  (yyval.s) = new string("");
 }
#line 1750 "parser.tab.cpp"
    break;

  case 15:
#line 142 "parser.ypp"
                                                  {
  (yyval.v3) = (yyvsp[0].v3);
}
#line 1758 "parser.tab.cpp"
    break;

  case 16:
#line 147 "parser.ypp"
                               {
  // Ovo nista ne znaci kod set-semantike
 }
#line 1766 "parser.tab.cpp"
    break;

  case 17:
#line 150 "parser.ypp"
  {
  // Ovo nista ne znaci kod set-semantike
 }
#line 1774 "parser.tab.cpp"
    break;

  case 18:
#line 155 "parser.ypp"
                     {
  (yyval.v3) = (yyvsp[0].v3);
 }
#line 1782 "parser.tab.cpp"
    break;

  case 19:
#line 158 "parser.ypp"
      {
  (yyval.v3) = new vector<Expression*>();
 }
#line 1790 "parser.tab.cpp"
    break;

  case 20:
#line 163 "parser.ypp"
                                    {
  (yyval.v3) = (yyvsp[-1].v3);
  (yyval.v3)->push_back((yyvsp[0].e));
 }
#line 1799 "parser.tab.cpp"
    break;

  case 21:
#line 167 "parser.ypp"
             {
  (yyval.v3) = new vector<Expression*>();
  (yyval.v3)->push_back((yyvsp[0].e));
 }
#line 1808 "parser.tab.cpp"
    break;

  case 22:
#line 173 "parser.ypp"
                {
  (yyval.e) = new PrimaryExpression((Variable*)(yyvsp[0].v));
 }
#line 1816 "parser.tab.cpp"
    break;

  case 23:
#line 176 "parser.ypp"
                                  {
  (yyval.e) = new EqExpression(new PrimaryExpression((yyvsp[-1].v)), (yyvsp[-3].e));
  //$$ = new PrimaryExpression($4);
 }
#line 1825 "parser.tab.cpp"
    break;

  case 24:
#line 182 "parser.ypp"
               {
  (yyval.v) = new Variable(*(yyvsp[0].s));
  delete (yyvsp[0].s);
 }
#line 1834 "parser.tab.cpp"
    break;

  case 25:
#line 188 "parser.ypp"
                                      {
  (yyval.e) = new BuiltinBinExpression("f_add", (yyvsp[-2].e), (yyvsp[0].e));
  }
#line 1842 "parser.tab.cpp"
    break;

  case 26:
#line 191 "parser.ypp"
                            {
  (yyval.e) = new BuiltinBinExpression("f_sub", (yyvsp[-2].e), (yyvsp[0].e));
  }
#line 1850 "parser.tab.cpp"
    break;

  case 27:
#line 194 "parser.ypp"
                            {
  (yyval.e) = new BuiltinBinExpression("f_mul", (yyvsp[-2].e), (yyvsp[0].e));
  }
#line 1858 "parser.tab.cpp"
    break;

  case 28:
#line 197 "parser.ypp"
                            {
  (yyval.e) = new BuiltinBinExpression("f_div", (yyvsp[-2].e), (yyvsp[0].e));
  }
#line 1866 "parser.tab.cpp"
    break;

  case 29:
#line 200 "parser.ypp"
                            {
  (yyval.e) = new BuiltinBinExpression("f_lt", (yyvsp[-2].e), (yyvsp[0].e));
  }
#line 1874 "parser.tab.cpp"
    break;

  case 30:
#line 203 "parser.ypp"
                            {
  (yyval.e) = new BuiltinBinExpression("f_gt", (yyvsp[-2].e), (yyvsp[0].e));
  }
#line 1882 "parser.tab.cpp"
    break;

  case 31:
#line 206 "parser.ypp"
                            {
  (yyval.e) = new EqExpression((yyvsp[-2].e), (yyvsp[0].e));
  }
#line 1890 "parser.tab.cpp"
    break;

  case 32:
#line 209 "parser.ypp"
                                  {
  (yyval.e) = new BuiltinBinExpression("f_geq", (yyvsp[-2].e), (yyvsp[0].e));
  }
#line 1898 "parser.tab.cpp"
    break;

  case 33:
#line 212 "parser.ypp"
                                  {
  (yyval.e) = new BuiltinBinExpression("f_leq", (yyvsp[-2].e), (yyvsp[0].e));
  }
#line 1906 "parser.tab.cpp"
    break;

  case 34:
#line 215 "parser.ypp"
                                    {
  (yyval.e) = new NotExpression(new EqExpression((yyvsp[-2].e), (yyvsp[0].e)));
 }
#line 1914 "parser.tab.cpp"
    break;

  case 35:
#line 218 "parser.ypp"
                                  {
  (yyval.e) = new AndExpression((yyvsp[-2].e), (yyvsp[0].e));
 }
#line 1922 "parser.tab.cpp"
    break;

  case 36:
#line 221 "parser.ypp"
                                 {
  (yyval.e) = new OrExpression((yyvsp[-2].e), (yyvsp[0].e));
 }
#line 1930 "parser.tab.cpp"
    break;

  case 37:
#line 224 "parser.ypp"
                 {
  (yyval.e) = new NotExpression((yyvsp[0].e));
  }
#line 1938 "parser.tab.cpp"
    break;

  case 38:
#line 227 "parser.ypp"
                     {
  (yyval.e) = (yyvsp[-1].e);
  }
#line 1946 "parser.tab.cpp"
    break;

  case 39:
#line 230 "parser.ypp"
              {
  (yyval.e) = (yyvsp[0].e);
  }
#line 1954 "parser.tab.cpp"
    break;

  case 40:
#line 233 "parser.ypp"
      {
  (yyval.e) = new PrimaryExpression((yyvsp[0].v));
  }
#line 1962 "parser.tab.cpp"
    break;

  case 41:
#line 236 "parser.ypp"
             {
  (yyval.e) = new PrimaryExpression((yyvsp[0].v));
  }
#line 1970 "parser.tab.cpp"
    break;

  case 42:
#line 239 "parser.ypp"
                            {
  if (((IRI*)(yyvsp[-3].v))->getIri() != "xsd:string")
    throw "TODO: IRIRef(Expression)";
  (yyval.e) = new BuiltinUnExpression("f_xsd_string", (yyvsp[-1].e));
  }
#line 1980 "parser.tab.cpp"
    break;

  case 43:
#line 244 "parser.ypp"
         {
  (yyval.e) = new PrimaryExpression((yyvsp[0].v));
  }
#line 1988 "parser.tab.cpp"
    break;

  case 44:
#line 249 "parser.ypp"
                                               {
  (yyval.ss) = (yyvsp[-2].ss);
  (yyval.ss)->first.insert(((IRI*)(yyvsp[0].v))->getIri());
  delete (yyvsp[0].v);
}
#line 1998 "parser.tab.cpp"
    break;

  case 45:
#line 254 "parser.ypp"
                                              {
  (yyval.ss) = (yyvsp[-3].ss);
  (yyval.ss)->second.insert(((IRI*)(yyvsp[0].v))->getIri());
  delete (yyvsp[0].v);
 }
#line 2008 "parser.tab.cpp"
    break;

  case 46:
#line 259 "parser.ypp"
  {
  (yyval.ss) = new pair<set<string>, set<string> > ();
 }
#line 2016 "parser.tab.cpp"
    break;

  case 47:
#line 264 "parser.ypp"
                                           {
  (yyval.p) = (yyvsp[0].p);
 }
#line 2024 "parser.tab.cpp"
    break;

  case 48:
#line 269 "parser.ypp"
                                                {
  (yyval.p) = (yyvsp[-1].p);
 }
#line 2032 "parser.tab.cpp"
    break;

  case 49:
#line 272 "parser.ypp"
                    {
  (yyval.p) = (yyvsp[-1].p);
  }
#line 2040 "parser.tab.cpp"
    break;

  case 50:
#line 277 "parser.ypp"
                                                         {
  (yyval.p) = (yyvsp[-1].p);
  addAddClausesToAdd((yyval.p), (yyvsp[0].p));
 }
#line 2049 "parser.tab.cpp"
    break;

  case 51:
#line 283 "parser.ypp"
                                                                                 {
  And* tmp = dynamic_cast<And*>((yyvsp[-2].p));
  if (tmp != nullptr) {
    (yyval.p) = (yyvsp[-2].p);
  }
  else {
    (yyval.p) = new And();
    ((And*)(yyval.p))->addPattern((yyvsp[-2].p));
  }
  addAddClausesToAdd((yyval.p), (yyvsp[-1].p));
  addAddClausesToAdd((yyval.p), (yyvsp[0].p));
 }
#line 2066 "parser.tab.cpp"
    break;

  case 52:
#line 295 "parser.ypp"
  {
  (yyval.p) = new And();
 }
#line 2074 "parser.tab.cpp"
    break;

  case 53:
#line 301 "parser.ypp"
                                                      {
  (yyval.p) = (yyvsp[-2].p);
  addAddClausesToAdd((yyval.p), (yyvsp[0].p));
 }
#line 2083 "parser.tab.cpp"
    break;

  case 54:
#line 305 "parser.ypp"
                         {
  (yyval.p) = (yyvsp[0].p);
 }
#line 2091 "parser.tab.cpp"
    break;

  case 55:
#line 310 "parser.ypp"
                                                           {
  (yyval.p) = new And();
  for (auto a : *(yyvsp[0].v2)) {
    for (auto b : a.second)
      ((And*)(yyval.p))->addPattern(new TriplePattern((yyvsp[-1].v)->clone(), a.first, b));
  }
  delete (yyvsp[-1].v);
  delete (yyvsp[0].v2);
 }
#line 2105 "parser.tab.cpp"
    break;

  case 56:
#line 319 "parser.ypp"
  {
  (yyval.p) = new And();
 }
#line 2113 "parser.tab.cpp"
    break;

  case 57:
#line 324 "parser.ypp"
                    {
  (yyval.v) = (yyvsp[0].v);
 }
#line 2121 "parser.tab.cpp"
    break;

  case 58:
#line 327 "parser.ypp"
             {
  (yyval.v) = (yyvsp[0].v);
 }
#line 2129 "parser.tab.cpp"
    break;

  case 59:
#line 332 "parser.ypp"
                    {
  (yyval.v) = new Variable(*(yyvsp[0].s));
  delete (yyvsp[0].s);
 }
#line 2138 "parser.tab.cpp"
    break;

  case 60:
#line 336 "parser.ypp"
                   {
  (yyval.v) = new BlankNode(*(yyvsp[0].s));
  delete (yyvsp[0].s);
  }
#line 2147 "parser.tab.cpp"
    break;

  case 61:
#line 340 "parser.ypp"
         {
  (yyval.v) = (yyvsp[0].v);
  }
#line 2155 "parser.tab.cpp"
    break;

  case 62:
#line 345 "parser.ypp"
                  {
  (yyval.v) = new IRI(*(yyvsp[0].s));
  delete (yyvsp[0].s);
  }
#line 2164 "parser.tab.cpp"
    break;

  case 63:
#line 349 "parser.ypp"
                       {
  (yyval.v) = new IRI(*(yyvsp[-2].s) + ":" + *(yyvsp[0].s));
  delete (yyvsp[-2].s);
  delete (yyvsp[0].s);
  }
#line 2174 "parser.tab.cpp"
    break;

  case 64:
#line 356 "parser.ypp"
                         {
  (yyval.v) = new Literal(*(yyvsp[0].s));
  delete (yyvsp[0].s);
 }
#line 2183 "parser.tab.cpp"
    break;

  case 65:
#line 360 "parser.ypp"
            {
  (yyval.v) = new Literal(to_string((yyvsp[0].i)));
  }
#line 2191 "parser.tab.cpp"
    break;

  case 66:
#line 365 "parser.ypp"
                                                                       {
  (yyval.v2) = (yyvsp[-3].v2);
  (yyval.v2)->push_back(make_pair((yyvsp[-1].v), *(yyvsp[0].v1)));
  delete (yyvsp[0].v1);
 }
#line 2201 "parser.tab.cpp"
    break;

  case 67:
#line 370 "parser.ypp"
                  {
  (yyval.v2) = new vector <pair<RDFValue*, vector<RDFValue*> > > ();
  (yyval.v2)->push_back(make_pair((yyvsp[-1].v), *(yyvsp[0].v1)));
  delete (yyvsp[0].v1);
 }
#line 2211 "parser.tab.cpp"
    break;

  case 68:
#line 377 "parser.ypp"
                {
  (yyval.v) = (yyvsp[0].v);
 }
#line 2219 "parser.tab.cpp"
    break;

  case 69:
#line 380 "parser.ypp"
      {
  (yyval.v) = new IRI("a");
 }
#line 2227 "parser.tab.cpp"
    break;

  case 70:
#line 385 "parser.ypp"
                                  {
  (yyval.v1) = (yyvsp[-2].v1);
  (yyval.v1)->push_back((yyvsp[0].v));
 }
#line 2236 "parser.tab.cpp"
    break;

  case 71:
#line 389 "parser.ypp"
         {
  (yyval.v1) = new vector<RDFValue*>();
  (yyval.v1)->push_back((yyvsp[0].v));
 }
#line 2245 "parser.tab.cpp"
    break;

  case 72:
#line 395 "parser.ypp"
                  {
  (yyval.v) = (yyvsp[0].v);
 }
#line 2253 "parser.tab.cpp"
    break;

  case 73:
#line 400 "parser.ypp"
                                                 {
  (yyval.p) = (yyvsp[0].p);
 }
#line 2261 "parser.tab.cpp"
    break;

  case 74:
#line 403 "parser.ypp"
                       {
  (yyval.p) = (yyvsp[0].p);
 }
#line 2269 "parser.tab.cpp"
    break;

  case 75:
#line 406 "parser.ypp"
                    {
  (yyval.p) = (yyvsp[0].p);
 }
#line 2277 "parser.tab.cpp"
    break;

  case 76:
#line 409 "parser.ypp"
         {
  (yyval.p) = (yyvsp[0].p);
  }
#line 2285 "parser.tab.cpp"
    break;

  case 77:
#line 412 "parser.ypp"
                    {
  (yyval.p) = (yyvsp[0].p);
  }
#line 2293 "parser.tab.cpp"
    break;

  case 78:
#line 415 "parser.ypp"
       {
  (yyval.p) = (yyvsp[0].p);
  }
#line 2301 "parser.tab.cpp"
    break;

  case 79:
#line 420 "parser.ypp"
                                                                                 {
  Union* tmp = dynamic_cast<Union*>((yyvsp[-2].p));
  if (tmp != nullptr)
    tmp->addPattern((yyvsp[0].p));
  else {
    tmp = new Union();
    tmp->addPattern((yyvsp[-2].p));
    tmp->addPattern((yyvsp[0].p));
  }
  (yyval.p) = tmp;
 }
#line 2317 "parser.tab.cpp"
    break;

  case 80:
#line 431 "parser.ypp"
                    {
  (yyval.p) = (yyvsp[0].p);
 }
#line 2325 "parser.tab.cpp"
    break;

  case 81:
#line 436 "parser.ypp"
                                                       {
  (yyval.p) = new OptionalPattern((yyvsp[0].p));
}
#line 2333 "parser.tab.cpp"
    break;

  case 82:
#line 441 "parser.ypp"
                                                 {
  (yyval.p) = new MinusPattern((yyvsp[0].p));
}
#line 2341 "parser.tab.cpp"
    break;

  case 83:
#line 447 "parser.ypp"
                                            {
  // Ovo nista ne znaci kod set-semantike
}
#line 2349 "parser.tab.cpp"
    break;

  case 84:
#line 450 "parser.ypp"
                                 {
  // ovo nista ne znaci bez agregatnih fja
 }
#line 2357 "parser.tab.cpp"
    break;

  case 85:
#line 453 "parser.ypp"
  {
  //Nothing here
  }
#line 2365 "parser.tab.cpp"
    break;

  case 86:
#line 458 "parser.ypp"
                                                          {
  (yyval.pii) = new pair<int, int>((yyvsp[-2].i), (yyvsp[0].i));
 }
#line 2373 "parser.tab.cpp"
    break;

  case 87:
#line 461 "parser.ypp"
                                               {
  (yyval.pii) = new pair<int, int>((yyvsp[0].i), (yyvsp[-2].i));
 }
#line 2381 "parser.tab.cpp"
    break;

  case 88:
#line 464 "parser.ypp"
                        {
  (yyval.pii) = new pair<int, int>((yyvsp[0].i), -1);
 }
#line 2389 "parser.tab.cpp"
    break;

  case 89:
#line 467 "parser.ypp"
                         {
  (yyval.pii) = new pair<int, int>(-1, (yyvsp[0].i));
 }
#line 2397 "parser.tab.cpp"
    break;

  case 90:
#line 470 "parser.ypp"
   {
  (yyval.pii) = new pair<int, int>(-1, -1);
  }
#line 2405 "parser.tab.cpp"
    break;

  case 91:
#line 475 "parser.ypp"
                               {
  //Nothing here
 }
#line 2413 "parser.tab.cpp"
    break;

  case 92:
#line 478 "parser.ypp"
            {
  //Nothing here
 }
#line 2421 "parser.tab.cpp"
    break;

  case 93:
#line 483 "parser.ypp"
                                        {
  // Ovo nista ne znaci kod set-semantike
 }
#line 2429 "parser.tab.cpp"
    break;

  case 94:
#line 486 "parser.ypp"
                              {
  // Ovo nista ne znaci kod set-semantike
 }
#line 2437 "parser.tab.cpp"
    break;

  case 95:
#line 489 "parser.ypp"
            {
  // Ovo nista ne znaci kod set-semantike
 }
#line 2445 "parser.tab.cpp"
    break;

  case 96:
#line 494 "parser.ypp"
                                        {
  (yyval.p) = (yyvsp[-1].e);
 }
#line 2453 "parser.tab.cpp"
    break;

  case 97:
#line 497 "parser.ypp"
                           {
  (yyval.p) = (yyvsp[0].e);
 }
#line 2461 "parser.tab.cpp"
    break;

  case 98:
#line 502 "parser.ypp"
                                                {
  // ovo nista ne znaci bez agregatnih fja
 }
#line 2469 "parser.tab.cpp"
    break;

  case 99:
#line 505 "parser.ypp"
                 {
  // ovo nista ne znaci bez agregatnih fja
  }
#line 2477 "parser.tab.cpp"
    break;

  case 100:
#line 510 "parser.ypp"
                          {
  // ovo nista ne znaci bez agregatnih fja
 }
#line 2485 "parser.tab.cpp"
    break;

  case 101:
#line 515 "parser.ypp"
                                                           {
  (yyval.e) = new BuiltinBinExpression("f_regex", (yyvsp[-3].e), (yyvsp[-1].e));
}
#line 2493 "parser.tab.cpp"
    break;

  case 102:
#line 518 "parser.ypp"
                                                               {
  (yyval.e) = new BuiltinBinExpression("f_regex", (yyvsp[-5].e), (yyvsp[-3].e));
  delete (yyvsp[-1].e);
}
#line 2502 "parser.tab.cpp"
    break;

  case 103:
#line 522 "parser.ypp"
                                       {
  (yyval.e) = new BuiltinUnExpression("f_str", (yyvsp[-1].e));
  }
#line 2510 "parser.tab.cpp"
    break;

  case 104:
#line 525 "parser.ypp"
                                 {
  (yyval.e) = new BuiltinUnExpression("f_round", (yyvsp[-1].e));
  }
#line 2518 "parser.tab.cpp"
    break;

  case 105:
#line 528 "parser.ypp"
                               {
  (yyval.e) = new BuiltinUnExpression("f_abs", (yyvsp[-1].e));
  }
#line 2526 "parser.tab.cpp"
    break;

  case 106:
#line 531 "parser.ypp"
                                    {
  (yyval.e) = new BuiltinUnExpression("f_datatype", (yyvsp[-1].e));
  }
#line 2534 "parser.tab.cpp"
    break;

  case 107:
#line 534 "parser.ypp"
                                                   {
  (yyval.e) = new BuiltinBinExpression("f_contains", (yyvsp[-3].e), (yyvsp[-1].e));
  }
#line 2542 "parser.tab.cpp"
    break;

  case 108:
#line 537 "parser.ypp"
                                 {
  (yyval.e) = new BuiltinUnExpression("f_lcase", (yyvsp[-1].e));
  }
#line 2550 "parser.tab.cpp"
    break;

  case 109:
#line 540 "parser.ypp"
                                      {
  (yyval.e) = new BuiltinUnExpression("f_isliteral", (yyvsp[-1].e));
  }
#line 2558 "parser.tab.cpp"
    break;

  case 110:
#line 543 "parser.ypp"
                                  {
  (yyval.e) = new BuiltinUnExpression("f_isuri", (yyvsp[-1].e));
  }
#line 2566 "parser.tab.cpp"
    break;

  case 111:
#line 546 "parser.ypp"
                          {
  (yyval.e) = new BuiltinUnExpression("f_bound", new PrimaryExpression((yyvsp[-1].v)));
  }
#line 2574 "parser.tab.cpp"
    break;

  case 112:
#line 551 "parser.ypp"
                                                          {
  (yyval.p) = new GraphPattern((yyvsp[-1].v), (yyvsp[0].p));
}
#line 2582 "parser.tab.cpp"
    break;

  case 113:
#line 556 "parser.ypp"
                                                 {
  (yyval.p) = new EqExpression(new PrimaryExpression((yyvsp[-1].v)), (yyvsp[-3].e));
 }
#line 2590 "parser.tab.cpp"
    break;

  case 114:
#line 561 "parser.ypp"
                                                      {
  (yyval.v1) = new vector<RDFValue*>();
  (yyval.v1)->push_back((yyvsp[-3].v));
  (yyval.v1)->insert((yyval.v1)->end(), (yyvsp[-1].v1)->begin(), (yyvsp[-1].v1)->end());
}
#line 2600 "parser.tab.cpp"
    break;

  case 115:
#line 566 "parser.ypp"
  {
  (yyval.v1) = new vector<RDFValue*>();
}
#line 2608 "parser.tab.cpp"
    break;

  case 116:
#line 571 "parser.ypp"
                                      {
  (yyval.v1) = (yyvsp[-1].v1);
  (yyval.v1)->push_back((yyvsp[0].v));
}
#line 2617 "parser.tab.cpp"
    break;

  case 117:
#line 575 "parser.ypp"
         {
  (yyval.v1) = new vector<RDFValue*>();
  (yyval.v1)->push_back((yyvsp[0].v));
 }
#line 2626 "parser.tab.cpp"
    break;


#line 2630 "parser.tab.cpp"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 581 "parser.ypp"

int main(int argc, char **argv) {
  //yydebug = 1;
  auto start = chrono::high_resolution_clock::now();
  bool valid_arguments = false;
  bool qc = false;
  extern FILE* yyin;
  if ((argc >= 3) && (string("-file") == argv[1])) {
    filename = argv[2];
    if ((yyin = fopen(filename, "r")) == NULL)
      yyerror(string("File ") + filename + " cannot be open for reading");
    valid_arguments = true;
    if (argc > 3 && (string("-qc") == argv[3]))
      qc = true;
  }
  else {
    int arg_no = 1;
    char *superquery_txt = nullptr;
    char *subquery_txt = nullptr;
    char *schema_txt = nullptr;
    while (arg_no < argc) {
      if (argv[arg_no] == string("-superquery")) {
	arg_no++;
	if (arg_no == argc)
	  yyerror("Missing superquery");
	superquery_txt = argv[arg_no];
	arg_no++;
      }
      else if (argv[arg_no] == string("-subquery")) {
	arg_no++;
	if (arg_no == argc)
	  yyerror("Missing subquery");
	subquery_txt = argv[arg_no];
	arg_no++;
      }
      else if (argv[arg_no] == string("-schema")) {
	arg_no++;
	if (arg_no == argc)
	  yyerror("Missing schema");
	schema_txt = argv[arg_no];
	arg_no++;
      }
      else if (argv[arg_no] == string("-qc")) {
	arg_no++;
	qc = true;
      }
      else {
	cerr << "Unknown argument" << argv[arg_no] << endl;
	break;
      }
    }
    if ((superquery_txt != nullptr) && (subquery_txt != nullptr)) {
      unsigned length = strlen(superquery_txt) + strlen(subquery_txt) + 32;
      if (schema_txt != nullptr)
	length += strlen(schema_txt) + 16;
      
      char* buffer = (char*)malloc(length * sizeof(char));
      if (buffer == nullptr)
	yyerror("malloc() error");

      buffer[0] = '\0';
      if (schema_txt != nullptr) {
	strcpy(buffer + strlen(buffer), "schema:\n");
	strcpy(buffer + strlen(buffer), schema_txt);
	strcpy(buffer + strlen(buffer), "\n\n");
      }
      strcpy(buffer + strlen(buffer), "superquery:\n");
      strcpy(buffer + strlen(buffer), superquery_txt);
      strcpy(buffer + strlen(buffer), "\n\n");
      strcpy(buffer + strlen(buffer), "subquery:\n");
      strcpy(buffer + strlen(buffer), subquery_txt);
      cout << buffer << endl;
      yyin = fmemopen(buffer, strlen(buffer), "r");
      valid_arguments = true;
    }
  }
  
  if (valid_arguments == false)
    yyerror(string("usage: \n") +
	    "\t" + argv[0] + " -file file_with_2_sparql_queries [-qc]\n" +
	    "\t" + argv[0] + " -superquery q1 -subquery q2 [-schema sc] [-qc]\n"
	    );
  
  try {
    yyparse();
  }
  catch (const char *s) {
    cout << s << endl;
    return 1;
  }

  auto end1 = chrono::high_resolution_clock::now();
  auto dur1 = end1 - start;

  subQuery->addCommonPrefixes();
  superQuery->addCommonPrefixes();
  
  set<string> subQueryProjVars = subQuery->projVars();
  set<string> superQueryProjVars = superQuery->projVars();
  /*
  cout << subQueryProjVars.size() << endl;
  cout << superQueryProjVars.size() << endl;
  for (auto a : subQueryProjVars)
    cout << "subQueryProjVar: " << a << endl;
  for (auto a : superQueryProjVars)
    cout << "superQueryProjVar: "  << a << endl;
  return 0;
  */

  
  /*
  if ((subQuery->isSelectStar() && !superQuery->isSelectStar()) ||
      (!subQuery->isSelectStar() && superQuery->isSelectStar()) ||
      (!subQuery->isSelectStar() && !superQuery->isSelectStar() &&
       subQuery->getProjections().size() != superQuery->getProjections().size()) ||
      (subQuery->isSelectStar() && superQuery->isSelectStar() &&
       subQueryProjVars.size() != superQueryProjVars.size())
      ) {
    cout << "Queries don't have the same projections" << endl;
    return 0;
  }
  */

  if (subQueryProjVars.size() > superQueryProjVars.size()) {
    //cout << "sat - Number of projections (or variables) in subquery cannot be greater than the number in superquery" << endl;
    //return 0;
  }

  if (superQuery->getLimit() >= 0 && ((subQuery->getLimit() >= 0 && superQuery->getLimit() < subQuery->getLimit()) || subQuery->getLimit() < 0)) {
    cout << "sat - Super query cannot have limit less than subquery" << endl;
    return 0;
  }
  
  set<string> superQueryFroms = superQuery->getFrom();
  set<string> subQueryFroms = subQuery->getFrom();
  superQueryFroms.erase("<default_graph>");
  subQueryFroms.erase("<default_graph>");
  set<string> superQueryFromNamed = superQuery->getFromNamed();
  set<string> subQueryFromNamed = subQuery->getFromNamed();
  /*
  if (superQueryFroms.size() != 0) {
    for (auto a : subQueryFroms)
      if (!superQueryFroms.count(a)) {
	//cout << filename << endl;
	cout << "sat - Froms in subquery is not subset of froms in superquery" << endl;
	return 0;
      }
    if (subQueryFroms.size() == 0) {
      //cout << filename << endl;
      cout << "sat - Froms in subquery is not subset of froms in superquery" << endl;
      return 0;
    }
  }
  */
  
  ofstream output;
  string outputname = string(filename) + ".smt";
  output.open(outputname);

  output << "; ------------ Sort and Predicate -------------------" << endl;
  output << common_formula() << endl;

  output << "; ------------ IRIs ---------------------------------" << endl;
  set<string> subQueryIRIs = subQuery->allIRIs();
  set<string> superQueryIRIs = superQuery->allIRIs();
  set<string> schemaIRIs;
  set<string> iris = subQueryIRIs;
  iris.insert(superQueryIRIs.begin(), superQueryIRIs.end());
  if (schema != nullptr) {
    schemaIRIs = schema->allIRIs();
    schemaIRIs.insert("<a>");
    iris.insert(schemaIRIs.begin(), schemaIRIs.end());
  }
  for (auto a : subQuery->getFrom())
    iris.insert(a);
  for (auto a : subQuery->getFromNamed())
    iris.insert(a);
  for (auto a : superQuery->getFrom())
    iris.insert(a);
  for (auto a : superQuery->getFromNamed())
    iris.insert(a);
  for (auto a : iris) {
    if (a != "<default_graph>")
      output << "(declare-const\t" << a << "\tRDFValue)" << endl;
  }
  output << endl;


  output << "; ------------ Literals -----------------------------" << endl;
  set<string> subQueryLiterals = subQuery->allLiterals();
  set<string> superQueryLiterals = superQuery->allLiterals();
  for (auto a : subQueryLiterals)
    output << "(declare-const\t" << a << "\tRDFValue)" << endl;
  for (auto a : superQueryLiterals)
    if (!subQueryLiterals.count(a))
      output << "(declare-const\t" << a << "\tRDFValue)" << endl;
  output << endl;

  if (schema != nullptr) {
    output << "; ------------ Schema -------------------------------" << endl;
    output << "(assert " << endl;
    output << schema->schemaFormula(1) << endl;
    output << ")" << endl << endl;
  }
  
  set<string> subQueryVariables = subQuery->allVariables();
  set<string> superQueryVariables = superQuery->allVariables();
  //set<string> subQueryGraphVariables = subQuery->allGraphVariables();
  //set<string> superQueryGraphVariables = superQuery->allGraphVariables();
  output << "; ------------ Variables ----------------------------" << endl;
  for (auto a : subQueryVariables)
    output << "(declare-const\t" << a << "\tRDFValue)" << endl;
  //for (auto a : subQueryGraphVariables)
  //  output << "(declare-const\t" << a << "\tRDFValue)" << endl;
  output << endl;
  
  output << "; ------------ Assumption ---------------------------" << endl;
  output << "(assert " << endl;
  output << subQuery->formula(1) << endl;
  output << ")" << endl << endl;

  output << "; ------------ Conjecture ---------------------------" << endl;
  output << "(assert (not (exists (";
  for (auto a : superQueryVariables)
    output << "(" << a << " RDFValue)";
  output << ") " << endl;
  string conjecture = superQuery->formula(1);
  try {
    conjecture = conjecture.substr(0, conjecture.size()-1) + "\t" + eqProj(superQueryProjVars, subQueryProjVars, qc) + "\n\t)";
  }
  catch (string s) {
    cout << "sat - " << s << endl;
    return 0;
  }
  output << conjecture << endl;
  output << ")))" << endl << endl;
  
  output << "; ------------ Check-Sat ----------------------------" << endl;
  output << "(check-sat)" << endl;
  
  fclose(yyin);
  output.close();

  delete subQuery;
  delete superQuery;

  auto end2 = chrono::high_resolution_clock::now();
  auto dur2 = end2 - end1;

  string solve = "z3 -T:60 -smt2 " + outputname;
  system(solve.c_str());

  auto end3 = chrono::high_resolution_clock::now();
  auto dur3 = end3 - end2;
  
  //cerr << chrono::duration_cast<std::chrono::nanoseconds>(dur1).count() << ";";
  //cerr << chrono::duration_cast<std::chrono::nanoseconds>(dur2).count() << ";";
  //cerr << chrono::duration_cast<std::chrono::nanoseconds>(dur3).count() << endl;

  return 0;
}
