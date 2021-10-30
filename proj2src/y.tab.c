/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAMnum = 258,
     IDnum = 259,
     SEMInum = 260,
     CLASSnum = 261,
     DECLARATIONSnum = 262,
     ENDDECLARATIONSnum = 263,
     COMMAnum = 264,
     EQUALnum = 265,
     LBRACEnum = 266,
     RBRACEnum = 267,
     LBRACnum = 268,
     RBRACnum = 269,
     LPARENnum = 270,
     RPARENnum = 271,
     VOIDnum = 272,
     INTnum = 273,
     METHODnum = 274,
     VALnum = 275,
     DOTnum = 276,
     ASSGNnum = 277,
     RETURNnum = 278,
     IFnum = 279,
     ELSEnum = 280,
     WHILEnum = 281,
     LTnum = 282,
     LEnum = 283,
     EQnum = 284,
     NEnum = 285,
     GEnum = 286,
     GTnum = 287,
     PLUSnum = 288,
     MINUSnum = 289,
     ORnum = 290,
     TIMESnum = 291,
     DIVIDEnum = 292,
     ANDnum = 293,
     NOTnum = 294,
     ICONSTnum = 295,
     SCONSTnum = 296
   };
#endif
/* Tokens.  */
#define PROGRAMnum 258
#define IDnum 259
#define SEMInum 260
#define CLASSnum 261
#define DECLARATIONSnum 262
#define ENDDECLARATIONSnum 263
#define COMMAnum 264
#define EQUALnum 265
#define LBRACEnum 266
#define RBRACEnum 267
#define LBRACnum 268
#define RBRACnum 269
#define LPARENnum 270
#define RPARENnum 271
#define VOIDnum 272
#define INTnum 273
#define METHODnum 274
#define VALnum 275
#define DOTnum 276
#define ASSGNnum 277
#define RETURNnum 278
#define IFnum 279
#define ELSEnum 280
#define WHILEnum 281
#define LTnum 282
#define LEnum 283
#define EQnum 284
#define NEnum 285
#define GEnum 286
#define GTnum 287
#define PLUSnum 288
#define MINUSnum 289
#define ORnum 290
#define TIMESnum 291
#define DIVIDEnum 292
#define ANDnum 293
#define NOTnum 294
#define ICONSTnum 295
#define SCONSTnum 296




/* Copy the first part of user declarations.  */
#line 1 "grammar.y"

#include  "proj2.h"

#include  <stdio.h>

tree type_record, type_method, argtype, bractemp; /* globals used to store treenode pointers */

extern int yylex();
void yyerror(char * str);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 199 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   169

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNRULES -- Number of states.  */
#define YYNSTATES  183

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    10,    13,    17,    21,    26,    27,
      29,    31,    34,    37,    41,    43,    46,    47,    52,    54,
      58,    60,    64,    66,    69,    72,    76,    78,    80,    82,
      86,    88,    92,    95,    99,   104,   105,   114,   115,   124,
     125,   127,   129,   133,   134,   138,   139,   144,   146,   150,
     152,   155,   157,   160,   165,   167,   169,   172,   176,   180,
     182,   186,   187,   189,   191,   193,   195,   197,   201,   204,
     208,   211,   213,   217,   219,   222,   226,   232,   236,   238,
     242,   244,   246,   248,   250,   252,   254,   256,   259,   262,
     266,   270,   274,   276,   280,   284,   288,   290,   292,   294,
     298,   301,   303,   305,   308,   309,   311,   313,   316,   320,
     323,   325
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,     3,     4,     5,    44,    -1,    45,    -1,
      44,    45,    -1,     6,     4,    46,    -1,    11,    47,    12,
      -1,    11,    49,    47,    12,    -1,    -1,    48,    -1,    62,
      -1,    48,    62,    -1,     7,     8,    -1,     7,    50,     8,
      -1,    51,    -1,    50,    51,    -1,    -1,    72,    52,    54,
       5,    -1,    55,    -1,    55,    10,    57,    -1,    53,    -1,
      54,     9,    53,    -1,     4,    -1,     4,    56,    -1,    13,
      14,    -1,    56,    13,    14,    -1,    85,    -1,    58,    -1,
      60,    -1,    11,    59,    12,    -1,    57,    -1,    59,     9,
      57,    -1,    18,    61,    -1,    13,    85,    14,    -1,    61,
      13,    85,    14,    -1,    -1,    19,    72,    63,     4,    15,
      65,    16,    71,    -1,    -1,    19,    17,    64,     4,    15,
      65,    16,    71,    -1,    -1,    66,    -1,    67,    -1,    66,
       5,    67,    -1,    -1,    18,    68,    70,    -1,    -1,    20,
      18,    69,    70,    -1,     4,    -1,    70,     9,     4,    -1,
      75,    -1,    49,    75,    -1,    73,    -1,    73,    74,    -1,
      73,    74,    21,    72,    -1,     4,    -1,    18,    -1,    13,
      14,    -1,    13,    14,    74,    -1,    11,    76,    12,    -1,
      77,    -1,    76,     5,    77,    -1,    -1,    78,    -1,    79,
      -1,    82,    -1,    83,    -1,    84,    -1,    91,    22,    85,
      -1,    91,    80,    -1,    15,    81,    16,    -1,    15,    16,
      -1,    85,    -1,    85,     9,    81,    -1,    23,    -1,    23,
      85,    -1,    24,    85,    75,    -1,    24,    85,    75,    25,
      75,    -1,    26,    85,    75,    -1,    87,    -1,    87,    86,
      87,    -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,
      31,    -1,    32,    -1,    88,    -1,    33,    88,    -1,    34,
      88,    -1,    87,    33,    88,    -1,    87,    34,    88,    -1,
      87,    35,    88,    -1,    89,    -1,    88,    36,    89,    -1,
      88,    37,    89,    -1,    88,    38,    89,    -1,    90,    -1,
      91,    -1,    79,    -1,    15,    85,    16,    -1,    39,    89,
      -1,    40,    -1,    41,    -1,     4,    92,    -1,    -1,    93,
      -1,    94,    -1,    94,    93,    -1,    13,    95,    14,    -1,
      21,     4,    -1,    85,    -1,    85,     9,    95,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    30,    30,    36,    38,    41,    44,    46,    57,    58,
      61,    63,    66,    68,    71,    73,    76,    76,    79,    85,
      92,    94,    97,    99,   102,   103,   105,   107,   109,   112,
     115,   117,   120,   123,   125,   128,   128,   135,   135,   143,
     144,   148,   150,   154,   153,   176,   175,   198,   200,   212,
     214,   217,   219,   221,   228,   230,   233,   235,   238,   241,
     243,   252,   253,   255,   257,   259,   261,   264,   267,   270,
     272,   275,   277,   280,   282,   290,   296,   309,   312,   314,
     320,   322,   324,   326,   328,   330,   333,   335,   337,   339,
     341,   343,   346,   348,   350,   352,   355,   357,   359,   361,
     363,   366,   368,   371,   375,   376,   379,   381,   384,   386,
     389,   391
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAMnum", "IDnum", "SEMInum",
  "CLASSnum", "DECLARATIONSnum", "ENDDECLARATIONSnum", "COMMAnum",
  "EQUALnum", "LBRACEnum", "RBRACEnum", "LBRACnum", "RBRACnum",
  "LPARENnum", "RPARENnum", "VOIDnum", "INTnum", "METHODnum", "VALnum",
  "DOTnum", "ASSGNnum", "RETURNnum", "IFnum", "ELSEnum", "WHILEnum",
  "LTnum", "LEnum", "EQnum", "NEnum", "GEnum", "GTnum", "PLUSnum",
  "MINUSnum", "ORnum", "TIMESnum", "DIVIDEnum", "ANDnum", "NOTnum",
  "ICONSTnum", "SCONSTnum", "$accept", "Program", "ClassDecl_rec",
  "ClassDecl", "ClassBody", "MethodDecl_z1", "MethodDecl_rec", "Decls",
  "FieldDecl_rec", "FieldDecl", "@1", "Tail", "FieldDecl_body",
  "VariableDeclId", "Bracket_rec1", "VariableInitializer",
  "ArrayInitializer", "ArrayInitializer_body", "ArrayCreationExpression",
  "ArrayCreationExpression_tail", "MethodDecl", "@2", "@3",
  "FormalParameterList_z1", "FormalParameterList",
  "FormalParameterList_rec", "@4", "@5", "IDENTIFIER_rec", "Block", "Type",
  "Type_front", "Bracket_rec2", "StatementList", "Statement_rec",
  "Statement", "AssignmentStatement", "MethodCallStatement",
  "MethodCallStatement_tail", "Expression_rec", "ReturnStatement",
  "IfStatement", "WhileStatement", "Expression", "Comp_op",
  "SimpleExpression", "Term", "Factor", "UnsignedConstant", "Variable",
  "Variable_tail", "Variable_rec", "Variable_1", "Expression_rec2", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    46,    46,    47,    47,
      48,    48,    49,    49,    50,    50,    52,    51,    53,    53,
      54,    54,    55,    55,    56,    56,    57,    57,    57,    58,
      59,    59,    60,    61,    61,    63,    62,    64,    62,    65,
      65,    66,    66,    68,    67,    69,    67,    70,    70,    71,
      71,    72,    72,    72,    73,    73,    74,    74,    75,    76,
      76,    77,    77,    77,    77,    77,    77,    78,    79,    80,
      80,    81,    81,    82,    82,    83,    83,    84,    85,    85,
      86,    86,    86,    86,    86,    86,    87,    87,    87,    87,
      87,    87,    88,    88,    88,    88,    89,    89,    89,    89,
      89,    90,    90,    91,    92,    92,    93,    93,    94,    94,
      95,    95
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     1,     2,     3,     3,     4,     0,     1,
       1,     2,     2,     3,     1,     2,     0,     4,     1,     3,
       1,     3,     1,     2,     2,     3,     1,     1,     1,     3,
       1,     3,     2,     3,     4,     0,     8,     0,     8,     0,
       1,     1,     3,     0,     3,     0,     4,     1,     3,     1,
       2,     1,     2,     4,     1,     1,     2,     3,     3,     1,
       3,     0,     1,     1,     1,     1,     1,     3,     2,     3,
       2,     1,     3,     1,     2,     3,     5,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       3,     3,     1,     3,     3,     3,     1,     1,     1,     3,
       2,     1,     1,     2,     0,     1,     1,     2,     3,     2,
       1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     2,     3,     0,
       4,     8,     5,     0,     0,     0,     9,     8,    10,    54,
      12,    55,     0,    14,    16,    51,    37,    35,     6,    11,
       0,    13,    15,     0,     0,    52,     0,     0,     7,    22,
      20,     0,    18,    56,     0,     0,     0,     0,    23,    17,
       0,     0,    57,    53,    39,    39,    24,     0,    21,   104,
       0,     0,     0,     0,     0,     0,   101,   102,    19,    27,
      28,    98,    26,    78,    86,    92,    96,    97,    43,     0,
       0,    40,    41,     0,    25,     0,     0,   103,   105,   106,
      30,     0,     0,     0,    32,    87,    88,   100,    80,    81,
      82,    83,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,    68,     0,    45,     0,     0,     0,   110,     0,
     109,   107,     0,    29,    99,     0,     0,    89,    90,    91,
      79,    93,    94,    95,    70,     0,    71,    47,    44,     0,
      61,     0,    38,    49,    42,    36,     0,   108,    31,    33,
       0,    69,     0,     0,    46,    73,     0,     0,     0,    59,
      62,    63,    64,    65,    66,     0,    50,   111,    34,    72,
      48,    74,     0,     0,    61,    58,     0,    75,    77,    60,
      67,     0,    76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     8,    12,    15,    16,   141,    22,    23,
      33,    40,    41,    42,    48,    68,    69,    91,    70,    94,
      18,    37,    36,    80,    81,    82,   113,   139,   138,   142,
      24,    25,    35,   143,   158,   159,   160,    71,   112,   135,
     162,   163,   164,    72,   107,    73,    74,    75,    76,    77,
      87,    88,    89,   119
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -139
static const yytype_int16 yypact[] =
{
      35,    40,    69,    56,  -139,    70,    73,    70,  -139,    72,
    -139,    18,  -139,     9,     3,    77,    65,    65,  -139,  -139,
    -139,  -139,    54,  -139,  -139,    68,  -139,  -139,  -139,  -139,
      78,  -139,  -139,    88,    79,    81,    95,   108,  -139,   100,
    -139,    61,   104,    68,    55,   110,   111,   113,   115,  -139,
      88,    15,  -139,  -139,    -2,    -2,  -139,   116,  -139,     1,
      15,    67,   118,     0,     0,     0,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,    89,    50,  -139,  -139,   114,  -139,   117,
     120,   127,  -139,   121,  -139,    67,   129,  -139,  -139,     1,
    -139,    66,   122,    67,   126,    50,    50,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,     0,     0,     0,    67,     0,     0,
       0,    64,  -139,   130,  -139,    53,    -2,    53,   131,   128,
    -139,  -139,    15,  -139,  -139,   132,    67,    50,    50,    50,
      76,  -139,  -139,  -139,  -139,   125,   134,  -139,   135,   130,
       5,   136,  -139,  -139,  -139,  -139,    67,  -139,  -139,  -139,
     137,  -139,    67,   141,   135,    67,    67,    67,    62,  -139,
    -139,  -139,  -139,  -139,  -139,   -10,  -139,  -139,  -139,  -139,
    -139,  -139,   136,   136,     5,  -139,    67,   123,  -139,  -139,
    -139,   136,  -139
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,  -139,   142,  -139,   133,  -139,   143,  -139,   138,
    -139,   102,  -139,  -139,  -139,   -59,  -139,  -139,  -139,  -139,
     139,  -139,  -139,    98,  -139,    41,  -139,  -139,    17,    42,
      -8,  -139,   119,  -138,  -139,   -16,  -139,  -132,  -139,    11,
    -139,  -139,  -139,   -61,  -139,    57,   -53,   -63,  -139,  -117,
    -139,    80,  -139,    19
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      92,    90,    97,   166,    59,   111,    27,    19,   161,    59,
      95,    96,   176,    19,    85,    61,    78,    20,    79,    59,
      26,    21,    86,   165,   118,    13,    60,    21,   155,   156,
      61,   157,   125,    62,   177,   178,    53,    14,     1,    65,
      66,    67,   161,   182,     3,   131,   132,   133,    63,    64,
     136,   127,   128,   129,    65,    66,    67,   165,    19,    19,
      13,     5,    31,   148,   140,   150,    49,   174,    59,     4,
      50,    59,    21,    21,   175,   122,     6,     9,   123,    61,
     134,    34,    61,    11,    14,   118,   108,   109,   110,    28,
      38,   136,    39,    43,   171,   172,   173,    63,    64,    45,
      63,    64,    44,    65,    66,    67,    65,    66,    67,   104,
     105,   106,    46,    47,    51,   180,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    54,    55,    56,    57,   111,
      84,    93,   116,   120,   137,   114,   115,   117,   124,   126,
     146,   151,   147,   152,   153,   170,   149,   140,   181,    10,
      30,   168,    58,    83,    17,    29,   154,   144,   179,   145,
      32,     0,    52,   169,   130,   167,     0,     0,     0,   121
};

static const yytype_int16 yycheck[] =
{
      61,    60,    65,   141,     4,    15,    14,     4,   140,     4,
      63,    64,    22,     4,    13,    15,    18,     8,    20,     4,
      17,    18,    21,   140,    85,     7,    11,    18,    23,    24,
      15,    26,    93,    18,   172,   173,    44,    19,     3,    39,
      40,    41,   174,   181,     4,   108,   109,   110,    33,    34,
     111,   104,   105,   106,    39,    40,    41,   174,     4,     4,
       7,     5,     8,   122,    11,   126,     5,     5,     4,     0,
       9,     4,    18,    18,    12,     9,     6,     4,    12,    15,
      16,    13,    15,    11,    19,   146,    36,    37,    38,    12,
      12,   152,     4,    14,   155,   156,   157,    33,    34,     4,
      33,    34,    21,    39,    40,    41,    39,    40,    41,    33,
      34,    35,     4,    13,    10,   176,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    15,    15,    14,    13,    15,
      14,    13,     5,     4,     4,    18,    16,    16,    16,    13,
       9,    16,    14,     9,     9,     4,    14,    11,    25,     7,
      17,    14,    50,    55,    11,    16,   139,   116,   174,   117,
      22,    -1,    43,   152,   107,   146,    -1,    -1,    -1,    89
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    43,     4,     0,     5,     6,    44,    45,     4,
      45,    11,    46,     7,    19,    47,    48,    49,    62,     4,
       8,    18,    50,    51,    72,    73,    17,    72,    12,    62,
      47,     8,    51,    52,    13,    74,    64,    63,    12,     4,
      53,    54,    55,    14,    21,     4,     4,    13,    56,     5,
       9,    10,    74,    72,    15,    15,    14,    13,    53,     4,
      11,    15,    18,    33,    34,    39,    40,    41,    57,    58,
      60,    79,    85,    87,    88,    89,    90,    91,    18,    20,
      65,    66,    67,    65,    14,    13,    21,    92,    93,    94,
      57,    59,    85,    13,    61,    88,    88,    89,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    86,    36,    37,
      38,    15,    80,    68,    18,    16,     5,    16,    85,    95,
       4,    93,     9,    12,    16,    85,    13,    88,    88,    88,
      87,    89,    89,    89,    16,    81,    85,     4,    70,    69,
      11,    49,    71,    75,    67,    71,     9,    14,    57,    14,
      85,    16,     9,     9,    70,    23,    24,    26,    76,    77,
      78,    79,    82,    83,    84,    91,    75,    95,    14,    81,
       4,    85,    85,    85,     5,    12,    22,    75,    75,    77,
      85,    25,    75
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 31 "grammar.y"
    { 
                          (yyval.tptr) = MakeTree(ProgramOp, (yyvsp[(4) - (4)].tptr), MakeLeaf(IDNode, (yyvsp[(2) - (4)].intg))); 
                          printtree((yyval.tptr), 0);
                        }
    break;

  case 3:
#line 37 "grammar.y"
    {  (yyval.tptr) = MakeTree(ClassOp, NullExp(), (yyvsp[(1) - (1)].tptr)); }
    break;

  case 4:
#line 39 "grammar.y"
    {  (yyval.tptr) = MakeTree(ClassOp, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr)); }
    break;

  case 5:
#line 42 "grammar.y"
    {  (yyval.tptr) = MakeTree(ClassDefOp, (yyvsp[(3) - (3)].tptr), MakeLeaf(IDNode, (yyvsp[(2) - (3)].intg))); }
    break;

  case 6:
#line 45 "grammar.y"
    {  (yyval.tptr) = (yyvsp[(2) - (3)].tptr); }
    break;

  case 7:
#line 47 "grammar.y"
    {  /*tree tt;
			       tt = MakeTree(BodyOp, NullExp(), $2);*/

                             if ( NodeKind((yyvsp[(3) - (4)].tptr)) == DUMMYNode )/* $3 is a NULL node */
                               (yyval.tptr) = (yyvsp[(2) - (4)].tptr);
                             else/* $2 is the left child of $3 */
			       (yyval.tptr) = MkLeftC((yyvsp[(2) - (4)].tptr), (yyvsp[(3) - (4)].tptr));
			  }
    break;

  case 8:
#line 57 "grammar.y"
    {  (yyval.tptr) = NullExp(); }
    break;

  case 9:
#line 59 "grammar.y"
    {  (yyval.tptr) = (yyvsp[(1) - (1)].tptr); }
    break;

  case 10:
#line 62 "grammar.y"
    {  (yyval.tptr) = MakeTree(BodyOp, NullExp(), (yyvsp[(1) - (1)].tptr)); }
    break;

  case 11:
#line 64 "grammar.y"
    {  (yyval.tptr) = MakeTree(BodyOp, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr)); }
    break;

  case 12:
#line 67 "grammar.y"
    {  (yyval.tptr) = MakeTree(BodyOp, NullExp(), NullExp()); }
    break;

  case 13:
#line 69 "grammar.y"
    {  (yyval.tptr) = (yyvsp[(2) - (3)].tptr); }
    break;

  case 14:
#line 72 "grammar.y"
    {  (yyval.tptr) = MakeTree(BodyOp, NullExp(), (yyvsp[(1) - (1)].tptr)); }
    break;

  case 15:
#line 74 "grammar.y"
    {  (yyval.tptr) = MakeTree(BodyOp, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr)); }
    break;

  case 16:
#line 76 "grammar.y"
    { type_record = (yyvsp[(1) - (1)].tptr); }
    break;

  case 17:
#line 77 "grammar.y"
    {  (yyval.tptr) = (yyvsp[(3) - (4)].tptr); /* $3 is FieldDecl_body */ }
    break;

  case 18:
#line 80 "grammar.y"
    { 
                              tree commat;
                              commat = MakeTree(CommaOp, type_record, NullExp());
                              (yyval.tptr) = MakeTree(CommaOp, (yyvsp[(1) - (1)].tptr), commat);
                           }
    break;

  case 19:
#line 86 "grammar.y"
    {
                              tree commat;
                              commat = MakeTree(CommaOp, type_record, (yyvsp[(3) - (3)].tptr));
                              (yyval.tptr) = MakeTree(CommaOp, (yyvsp[(1) - (3)].tptr), commat);
                           }
    break;

  case 20:
#line 93 "grammar.y"
    {  (yyval.tptr) = MakeTree(DeclOp, NullExp(), (yyvsp[(1) - (1)].tptr));  }
    break;

  case 21:
#line 95 "grammar.y"
    {  (yyval.tptr) = MakeTree(DeclOp, (yyvsp[(1) - (3)].tptr), (yyvsp[(3) - (3)].tptr));  }
    break;

  case 22:
#line 98 "grammar.y"
    {  (yyval.tptr) = MakeLeaf(IDNode, (yyvsp[(1) - (1)].intg)); }
    break;

  case 23:
#line 100 "grammar.y"
    {   (yyval.tptr) = MakeLeaf(IDNode, (yyvsp[(1) - (2)].intg)); /* "[]" do not construct tree */ }
    break;

  case 24:
#line 102 "grammar.y"
    { (yyval.tptr) = NullExp(); }
    break;

  case 25:
#line 103 "grammar.y"
    { (yyval.tptr) = NullExp(); }
    break;

  case 26:
#line 106 "grammar.y"
    {  (yyval.tptr) = (yyvsp[(1) - (1)].tptr); }
    break;

  case 27:
#line 108 "grammar.y"
    {  (yyval.tptr) = (yyvsp[(1) - (1)].tptr); }
    break;

  case 28:
#line 110 "grammar.y"
    {  (yyval.tptr) = (yyvsp[(1) - (1)].tptr); }
    break;

  case 29:
#line 113 "grammar.y"
    {  (yyval.tptr) = MakeTree(ArrayTypeOp, (yyvsp[(2) - (3)].tptr), type_record); }
    break;

  case 30:
#line 116 "grammar.y"
    { (yyval.tptr) = MakeTree( CommaOp, NullExp(), (yyvsp[(1) - (1)].tptr)); }
    break;

  case 31:
#line 118 "grammar.y"
    { (yyval.tptr) = MakeTree( CommaOp, (yyvsp[(1) - (3)].tptr), (yyvsp[(3) - (3)].tptr) ); }
    break;

  case 32:
#line 121 "grammar.y"
    {  (yyval.tptr) = MakeTree( ArrayTypeOp, (yyvsp[(2) - (2)].tptr), MakeLeaf(INTEGERTNode, (yyvsp[(1) - (2)].intg)) ); }
    break;

  case 33:
#line 124 "grammar.y"
    { (yyval.tptr) = MakeTree( BoundOp, NullExp(), (yyvsp[(2) - (3)].tptr) ); }
    break;

  case 34:
#line 126 "grammar.y"
    { (yyval.tptr) = MakeTree( BoundOp, (yyvsp[(1) - (4)].tptr), (yyvsp[(3) - (4)].tptr) ); }
    break;

  case 35:
#line 128 "grammar.y"
    {type_method=(yyvsp[(2) - (2)].tptr);}
    break;

  case 36:
#line 130 "grammar.y"
    { 
                        tree head;
                        head = MakeTree(HeadOp, MakeLeaf(IDNode, (yyvsp[(4) - (8)].intg)), (yyvsp[(6) - (8)].tptr));
                        (yyval.tptr) = MakeTree(MethodOp, head, (yyvsp[(8) - (8)].tptr));
                      }
    break;

  case 37:
#line 135 "grammar.y"
    {type_method=NullExp();}
    break;

  case 38:
#line 136 "grammar.y"
    { 
                        tree head;
                        head = MakeTree(HeadOp, MakeLeaf(IDNode, (yyvsp[(4) - (8)].intg)), (yyvsp[(6) - (8)].tptr));
                        (yyval.tptr) = MakeTree(MethodOp, head, (yyvsp[(8) - (8)].tptr));
                      }
    break;

  case 39:
#line 143 "grammar.y"
    {  (yyval.tptr) = MakeTree(SpecOp, NullExp(), type_method); }
    break;

  case 40:
#line 145 "grammar.y"
    {  (yyval.tptr) = MakeTree(SpecOp, (yyvsp[(1) - (1)].tptr), type_method); }
    break;

  case 41:
#line 149 "grammar.y"
    { (yyval.tptr) = (yyvsp[(1) - (1)].tptr); }
    break;

  case 42:
#line 151 "grammar.y"
    { (yyval.tptr) = MkRightC((yyvsp[(3) - (3)].tptr), (yyvsp[(1) - (3)].tptr)); }
    break;

  case 43:
#line 154 "grammar.y"
    {
                                      argtype = MakeTree(RArgTypeOp, NullExp(), NullExp());
                                      bractemp= MakeTree(RArgTypeOp, NullExp(), argtype);
                                    }
    break;

  case 44:
#line 159 "grammar.y"
    { 
			              SetLeftChild(bractemp, (yyvsp[(3) - (3)].tptr)); 
                                      if ( NodeKind(LeftChild(RightChild(bractemp))) == DUMMYNode )/* no comma */
                                         SetRightChild( bractemp, NullExp() );
                                      else
					{
					  tree t = bractemp; /* head of the tree */
                                          /* delete the tangling right most child */
                                          while ( t->RightC != argtype )
                                                 t = t->RightC;
                                          t->RightC = NullExp();
                                          free( argtype );
                                        }
                                      (yyval.tptr) = bractemp;  /* return to FormalParameterList_rec */                  
                                    }
    break;

  case 45:
#line 176 "grammar.y"
    {
                                      argtype = MakeTree(VArgTypeOp, NullExp(), NullExp());
                                      bractemp= MakeTree(VArgTypeOp, NullExp(), argtype);/* lchild is unknown*/
				    }
    break;

  case 46:
#line 181 "grammar.y"
    {
                                      SetLeftChild(bractemp, (yyvsp[(4) - (4)].tptr)); 
                                      if ( NodeKind(LeftChild(RightChild(bractemp))) == DUMMYNode )/* no comma */
                                         SetRightChild( bractemp, NullExp() );  
                                      else
					{
					  tree t = bractemp; /* head of the tree */
                                          /* delete the tangling right most child */
                                          while ( t->RightC != argtype )
                                                 t = t->RightC;
                                          t->RightC = NullExp();
                                          free( argtype );
                                        }
                                      (yyval.tptr) = bractemp;  /* return to FormalParameterList_rec */                  
			            }
    break;

  case 47:
#line 199 "grammar.y"
    { (yyval.tptr) = MakeTree(CommaOp, MakeLeaf(IDNode,(yyvsp[(1) - (1)].intg)), MakeLeaf(INTEGERTNode,0)); }
    break;

  case 48:
#line 201 "grammar.y"
    { 
                                    tree comma, temp;

                                    (yyval.tptr) = (yyvsp[(1) - (3)].tptr);
                                    comma = MakeTree(CommaOp, MakeLeaf(IDNode,(yyvsp[(3) - (3)].intg)), MakeLeaf(INTEGERTNode,0));
                                    MkLeftC( comma, argtype );
                                    temp = MakeTree(NodeOp(argtype), NullExp(), NullExp());
                                    SetRightChild(argtype, temp);
                                    argtype = temp;
                                  }
    break;

  case 49:
#line 213 "grammar.y"
    { (yyval.tptr) = MakeTree(BodyOp, NullExp(), (yyvsp[(1) - (1)].tptr)); }
    break;

  case 50:
#line 215 "grammar.y"
    { (yyval.tptr) = MakeTree(BodyOp, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr)); }
    break;

  case 51:
#line 218 "grammar.y"
    { (yyval.tptr) = MakeTree(TypeIdOp, (yyvsp[(1) - (1)].tptr), NullExp()); }
    break;

  case 52:
#line 220 "grammar.y"
    { (yyval.tptr) = MakeTree(TypeIdOp, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr)); }
    break;

  case 53:
#line 222 "grammar.y"
    { 
                         tree temp;
                         temp = MakeTree(TypeIdOp, (yyvsp[(1) - (4)].tptr), (yyvsp[(2) - (4)].tptr));
                         (yyval.tptr) = MkRightC( (yyvsp[(4) - (4)].tptr), temp );
		       }
    break;

  case 54:
#line 229 "grammar.y"
    { (yyval.tptr) = MakeLeaf(IDNode, (yyvsp[(1) - (1)].intg)); }
    break;

  case 55:
#line 231 "grammar.y"
    { (yyval.tptr) = MakeLeaf(INTEGERTNode, (yyvsp[(1) - (1)].intg));}
    break;

  case 56:
#line 234 "grammar.y"
    { (yyval.tptr) = MakeTree(IndexOp, NullExp(), NullExp()); }
    break;

  case 57:
#line 236 "grammar.y"
    { (yyval.tptr) = MakeTree(IndexOp, NullExp(), (yyvsp[(3) - (3)].tptr)); }
    break;

  case 58:
#line 239 "grammar.y"
    { (yyval.tptr) = (yyvsp[(2) - (3)].tptr); }
    break;

  case 59:
#line 242 "grammar.y"
    { (yyval.tptr) = MakeTree(StmtOp, NullExp(), (yyvsp[(1) - (1)].tptr));  }
    break;

  case 60:
#line 244 "grammar.y"
    { 
                        if ( NodeKind((yyvsp[(3) - (3)].tptr)) == DUMMYNode )
                           (yyval.tptr) = (yyvsp[(1) - (3)].tptr);
                        else
                           (yyval.tptr) = MakeTree(StmtOp, (yyvsp[(1) - (3)].tptr), (yyvsp[(3) - (3)].tptr));
                      }
    break;

  case 61:
#line 252 "grammar.y"
    { (yyval.tptr) = NullExp(); }
    break;

  case 62:
#line 254 "grammar.y"
    { (yyval.tptr) = (yyvsp[(1) - (1)].tptr); }
    break;

  case 63:
#line 256 "grammar.y"
    { (yyval.tptr) = (yyvsp[(1) - (1)].tptr); }
    break;

  case 64:
#line 258 "grammar.y"
    { (yyval.tptr) = (yyvsp[(1) - (1)].tptr); }
    break;

  case 65:
#line 260 "grammar.y"
    { (yyval.tptr) = (yyvsp[(1) - (1)].tptr); }
    break;

  case 66:
#line 262 "grammar.y"
    { (yyval.tptr) = (yyvsp[(1) - (1)].tptr); }
    break;

  case 67:
#line 265 "grammar.y"
    { (yyval.tptr) = MakeTree(AssignOp, MakeTree(AssignOp, NullExp(), (yyvsp[(1) - (3)].tptr)), (yyvsp[(3) - (3)].tptr)); }
    break;

  case 68:
#line 268 "grammar.y"
    { (yyval.tptr) = MakeTree(RoutineCallOp, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr)); }
    break;

  case 69:
#line 271 "grammar.y"
    { (yyval.tptr) = (yyvsp[(2) - (3)].tptr); }
    break;

  case 70:
#line 273 "grammar.y"
    { (yyval.tptr) = NullExp(); }
    break;

  case 71:
#line 276 "grammar.y"
    {  (yyval.tptr) = MakeTree( CommaOp, (yyvsp[(1) - (1)].tptr), NullExp() ); }
    break;

  case 72:
#line 278 "grammar.y"
    {  (yyval.tptr) = MakeTree( CommaOp, (yyvsp[(1) - (3)].tptr), (yyvsp[(3) - (3)].tptr) ); }
    break;

  case 73:
#line 281 "grammar.y"
    {  (yyval.tptr) = MakeTree(ReturnOp, NullExp(), NullExp() ); }
    break;

  case 74:
#line 283 "grammar.y"
    {  (yyval.tptr) = MakeTree(ReturnOp, (yyvsp[(2) - (2)].tptr), NullExp()); }
    break;

  case 75:
#line 291 "grammar.y"
    { 
                              tree commat = MakeTree(CommaOp, (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr));
                              (yyval.tptr) = MakeTree(IfElseOp, NullExp(), commat); 

                          }
    break;

  case 76:
#line 297 "grammar.y"
    {
                              tree commat = MakeTree(CommaOp, (yyvsp[(2) - (5)].tptr), (yyvsp[(3) - (5)].tptr));
                              tree ift = MakeTree(IfElseOp, NullExp(), commat);
                              (yyval.tptr) = MakeTree(IfElseOp, ift, (yyvsp[(5) - (5)].tptr));
                          }
    break;

  case 77:
#line 310 "grammar.y"
    {  (yyval.tptr) = MakeTree(LoopOp, (yyvsp[(2) - (3)].tptr), (yyvsp[(3) - (3)].tptr)); }
    break;

  case 78:
#line 313 "grammar.y"
    {(yyval.tptr) = (yyvsp[(1) - (1)].tptr);}
    break;

  case 79:
#line 315 "grammar.y"
    {
                            MkLeftC((yyvsp[(1) - (3)].tptr), (yyvsp[(2) - (3)].tptr));
                            (yyval.tptr) = MkRightC((yyvsp[(3) - (3)].tptr), (yyvsp[(2) - (3)].tptr));
                          }
    break;

  case 80:
#line 321 "grammar.y"
    { (yyval.tptr) = MakeTree(LTOp, NullExp(), NullExp()); }
    break;

  case 81:
#line 323 "grammar.y"
    { (yyval.tptr) = MakeTree(LEOp, NullExp(), NullExp()); }
    break;

  case 82:
#line 325 "grammar.y"
    { (yyval.tptr) = MakeTree(EQOp, NullExp(), NullExp()); }
    break;

  case 83:
#line 327 "grammar.y"
    { (yyval.tptr) = MakeTree(NEOp, NullExp(), NullExp()); }
    break;

  case 84:
#line 329 "grammar.y"
    { (yyval.tptr) = MakeTree(GEOp, NullExp(), NullExp()); }
    break;

  case 85:
#line 331 "grammar.y"
    { (yyval.tptr) = MakeTree(GTOp, NullExp(), NullExp()); }
    break;

  case 86:
#line 334 "grammar.y"
    { (yyval.tptr) = (yyvsp[(1) - (1)].tptr); }
    break;

  case 87:
#line 336 "grammar.y"
    { (yyval.tptr) = (yyvsp[(2) - (2)].tptr); }
    break;

  case 88:
#line 338 "grammar.y"
    { (yyval.tptr) = MakeTree(UnaryNegOp, (yyvsp[(2) - (2)].tptr), NullExp()); }
    break;

  case 89:
#line 340 "grammar.y"
    { (yyval.tptr) = MakeTree(AddOp, (yyvsp[(1) - (3)].tptr), (yyvsp[(3) - (3)].tptr)); }
    break;

  case 90:
#line 342 "grammar.y"
    { (yyval.tptr) = MakeTree(SubOp, (yyvsp[(1) - (3)].tptr), (yyvsp[(3) - (3)].tptr)); }
    break;

  case 91:
#line 344 "grammar.y"
    { (yyval.tptr) = MakeTree(OrOp, (yyvsp[(1) - (3)].tptr), (yyvsp[(3) - (3)].tptr)); }
    break;

  case 92:
#line 347 "grammar.y"
    { (yyval.tptr) = (yyvsp[(1) - (1)].tptr); }
    break;

  case 93:
#line 349 "grammar.y"
    { (yyval.tptr) = MakeTree(MultOp, (yyvsp[(1) - (3)].tptr), (yyvsp[(3) - (3)].tptr)); }
    break;

  case 94:
#line 351 "grammar.y"
    { (yyval.tptr) = MakeTree(DivOp, (yyvsp[(1) - (3)].tptr), (yyvsp[(3) - (3)].tptr)); }
    break;

  case 95:
#line 353 "grammar.y"
    { (yyval.tptr) = MakeTree(AndOp, (yyvsp[(1) - (3)].tptr), (yyvsp[(3) - (3)].tptr)); }
    break;

  case 96:
#line 356 "grammar.y"
    { (yyval.tptr) = (yyvsp[(1) - (1)].tptr); }
    break;

  case 97:
#line 358 "grammar.y"
    { (yyval.tptr) = (yyvsp[(1) - (1)].tptr); }
    break;

  case 98:
#line 360 "grammar.y"
    { (yyval.tptr) = (yyvsp[(1) - (1)].tptr); }
    break;

  case 99:
#line 362 "grammar.y"
    { (yyval.tptr) = (yyvsp[(2) - (3)].tptr); }
    break;

  case 100:
#line 364 "grammar.y"
    { (yyval.tptr) = MakeTree(NotOp, (yyvsp[(2) - (2)].tptr), NullExp()); }
    break;

  case 101:
#line 367 "grammar.y"
    { (yyval.tptr) = MakeLeaf(NUMNode, (yyvsp[(1) - (1)].intg)); }
    break;

  case 102:
#line 369 "grammar.y"
    { (yyval.tptr) = MakeLeaf(STRINGNode, (yyvsp[(1) - (1)].intg)); }
    break;

  case 103:
#line 372 "grammar.y"
    { (yyval.tptr) = MakeTree( VarOp, MakeLeaf(IDNode, (yyvsp[(1) - (2)].intg)), (yyvsp[(2) - (2)].tptr)); }
    break;

  case 104:
#line 375 "grammar.y"
    {  (yyval.tptr) = NullExp(); }
    break;

  case 105:
#line 377 "grammar.y"
    {  (yyval.tptr) = (yyvsp[(1) - (1)].tptr); }
    break;

  case 106:
#line 380 "grammar.y"
    { (yyval.tptr) = MakeTree( SelectOp, (yyvsp[(1) - (1)].tptr), NullExp() ); }
    break;

  case 107:
#line 382 "grammar.y"
    { (yyval.tptr) = MakeTree( SelectOp, (yyvsp[(1) - (2)].tptr), (yyvsp[(2) - (2)].tptr) ); }
    break;

  case 108:
#line 385 "grammar.y"
    {  (yyval.tptr) = (yyvsp[(2) - (3)].tptr); }
    break;

  case 109:
#line 387 "grammar.y"
    {  (yyval.tptr) = MakeTree(FieldOp, MakeLeaf(IDNode, (yyvsp[(2) - (2)].intg)), NullExp() ); }
    break;

  case 110:
#line 390 "grammar.y"
    { (yyval.tptr) = MakeTree(IndexOp, (yyvsp[(1) - (1)].tptr), NullExp()); }
    break;

  case 111:
#line 392 "grammar.y"
    { (yyval.tptr) = MakeTree(IndexOp, (yyvsp[(1) - (3)].tptr), (yyvsp[(3) - (3)].tptr)); }
    break;


/* Line 1267 of yacc.c.  */
#line 2216 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 395 "grammar.y"


#include "lex.yy.c"

extern int yycolumn, yyline;

void yyerror(char *str)
{
  printf("yyerror: %s at line %d\n", str, yyline);
}




