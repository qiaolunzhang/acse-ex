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
#line 1 "Acse.y" /* yacc.c:339  */

/*
 * Andrea Di Biagio
 * Politecnico di Milano, 2007
 * 
 * Acse.y
 * Formal Languages & Compilers Machine, 2007/2008
 * 
 */

/*************************************************************************

                   Compiler for the language LANCE

***************************************************************************/

#include <stdio.h>       
#include <stdlib.h>
#include <assert.h>
#include "axe_struct.h"
#include "axe_engine.h"
#include "symbol_table.h"
#include "axe_errors.h"
#include "collections.h"
#include "axe_expressions.h"
#include "axe_gencode.h"
#include "axe_utils.h"
#include "axe_array.h"
#include "axe_cflow_graph.h"
#include "cflow_constants.h"
#include "axe_transform.h"
#include "axe_reg_alloc.h"
#include "reg_alloc_constants.h"
#include "axe_io_manager.h"
#ifndef NDEBUG
#  include "axe_debug.h"
#endif



/* global variables */
int line_num;        /* this variable will keep track of the
                      * source code line number. Every time that a newline
                      * is encountered while parsing the input file, this
                      * value is increased by 1. This value is then used
                      * for error tracking: if the parser returns an error
                      * or a warning, this value is used in order to notify
                      * in which line of code the error has been found */
int num_error;       /* the number of errors found in the code. This value
                      * is increased by 1 every time a new error is found
                      * in the code. */
int num_warning;     /* As for the `num_error' global variable, this one
                      * keeps track of all the warning messages displayed */

/* errorcode is defined inside "axe_engine.c" */
extern int errorcode;   /* this variable is used to test if an error is found
                         * while parsing the input file. It also is set
                         * to notify if the compiler internal state is invalid.
                         * When the parsing process is started, the value
                         * of `errorcode' is set to the value of the macro
                         * `AXE_OK' defined in "axe_constants.h".
                         * As long as everything (the parsed source code and
                         * the internal state of the compiler) is correct,
                         * the value of `errorcode' is set to `AXE_OK'.
                         * When an error occurs (because the input file contains
                         * one or more syntax errors or because something went
                         * wrong in the machine internal state), the errorcode
                         * is set to a value that is different from `AXE_OK'. */
                         

extern int cflow_errorcode;   /* As for `errorcode' this value is used to
                        * test if an error occurs during the creation process of
                        * a control flow graph. More informations can be found
                        * analyzing the file `axe_cflow_graph.h'. */
                     
/* program informations */
t_program_infos *program;  /* The singleton instance of `program'.
                            * An instance of `t_program_infos' holds in its
                            * internal structure, all the useful informations
                            * about a program. For example: the assembly
                            * (code and directives); the symbol table;
                            * the label manager (see axe_labels.h) etc. */
t_cflow_Graph *graph;      /* An instance of a control flow graph. This instance
                            * will be generated starting from `program' and will
                            * be used during the register allocation process */

t_reg_allocator *RA;       /* Register allocator. It implements the "Linear scan"
                            * algorythm */

t_io_infos *file_infos;    /* input and output files used by the compiler */

struct t_stack {
    char* id;
    int index_reg;
} stack = {NULL, 0};




#line 166 "Acse.tab.c" /* yacc.c:339  */

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
   by #include "Acse.tab.h".  */
#ifndef YY_YY_ACSE_TAB_H_INCLUDED
# define YY_YY_ACSE_TAB_H_INCLUDED
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
    LBRACE = 258,
    RBRACE = 259,
    LPAR = 260,
    RPAR = 261,
    LSQUARE = 262,
    RSQUARE = 263,
    SEMI = 264,
    COLON = 265,
    PLUS = 266,
    MINUS = 267,
    MUL_OP = 268,
    DIV_OP = 269,
    MOD_OP = 270,
    AND_OP = 271,
    OR_OP = 272,
    NOT_OP = 273,
    ASSIGN = 274,
    LT = 275,
    GT = 276,
    SHL_OP = 277,
    SHR_OP = 278,
    EQ = 279,
    NOTEQ = 280,
    LTEQ = 281,
    GTEQ = 282,
    ANDAND = 283,
    OROR = 284,
    COMMA = 285,
    FOR = 286,
    RETURN = 287,
    READ = 288,
    WRITE = 289,
    PUSH = 290,
    POP = 291,
    FROM = 292,
    INTO = 293,
    ISEMPTY = 294,
    ISFULL = 295,
    DO = 296,
    WHILE = 297,
    IF = 298,
    ELSE = 299,
    TYPE = 300,
    IDENTIFIER = 301,
    NUMBER = 302,
    NOT = 303
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 107 "Acse.y" /* yacc.c:355  */
            
   int intval;
   char *svalue;
   t_axe_expression expr;
   t_axe_declaration *decl;
   t_list *list;
   t_axe_label *label;
   t_while_statement while_stmt;

#line 265 "Acse.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ACSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 282 "Acse.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   437

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  140

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   176,   176,   189,   190,   193,   200,   204,   211,   220,
     229,   242,   243,   247,   248,   253,   254,   255,   256,   257,
     260,   261,   263,   264,   265,   266,   269,   270,   273,   296,
     324,   341,   372,   378,   377,   397,   403,   396,   417,   426,
     416,   453,   452,   474,   481,   501,   520,   521,   534,   550,
     566,   579,   584,   606,   609,   612,   615,   618,   621,   624,
     627,   630,   633,   636,   639,   642,   643,   644,   645,   646,
     647
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LBRACE", "RBRACE", "LPAR", "RPAR",
  "LSQUARE", "RSQUARE", "SEMI", "COLON", "PLUS", "MINUS", "MUL_OP",
  "DIV_OP", "MOD_OP", "AND_OP", "OR_OP", "NOT_OP", "ASSIGN", "LT", "GT",
  "SHL_OP", "SHR_OP", "EQ", "NOTEQ", "LTEQ", "GTEQ", "ANDAND", "OROR",
  "COMMA", "FOR", "RETURN", "READ", "WRITE", "PUSH", "POP", "FROM", "INTO",
  "ISEMPTY", "ISFULL", "DO", "WHILE", "IF", "ELSE", "TYPE", "IDENTIFIER",
  "NUMBER", "NOT", "$accept", "program", "var_declarations",
  "var_declaration", "declaration_list", "declaration", "code_block",
  "statements", "statement", "stack_statement", "control_statement",
  "read_write_statement", "push_statement", "pop_statement",
  "assign_statement", "if_statement", "$@1", "if_stmt", "$@2", "$@3",
  "while_statement", "$@4", "$@5", "do_while_statement", "$@6",
  "return_statement", "read_statement", "write_statement", "exp", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

#define YYPACT_NINF -70

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-70)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -70,     4,    84,   -70,   -70,   -70,     8,    10,    64,   -24,
     -70,   -70,   -70,   -23,     5,   -70,    99,   -70,   -70,   -70,
      22,   -70,   -70,    23,   -70,    14,   -70,    54,    58,   -70,
     -70,    28,    64,    64,    64,   -40,    29,    31,    61,   -70,
     135,    41,    18,    74,    75,     9,    -4,   -70,    64,    64,
     -70,   -70,   -70,   -70,   -70,   -70,    77,   163,   187,    16,
     -70,   -70,   -70,   -70,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    38,    44,    99,    49,   -70,    64,    64,    45,    51,
     -70,   -23,   281,   322,    18,   -70,   -70,   -70,   303,    16,
      16,   -70,   -70,   393,   376,    -3,    -3,    59,    59,   410,
     410,    -3,    -3,   359,   341,   -70,   -70,    53,    95,   211,
     235,    94,   -70,   -70,    86,   -70,   -70,   -70,    64,   -70,
     -70,   -70,    64,   259,    18,    18,   322,   -70,   -70,   -70
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,    18,    43,     0,     0,     0,     0,
      41,    38,    35,     0,     0,     3,     2,    14,    19,    16,
       0,    21,    20,     0,    22,    32,    23,     0,     0,    26,
      27,     0,     0,     0,     0,     0,     0,     0,    47,    46,
       0,     0,     0,     0,     0,    10,     0,     7,     0,     0,
      13,    17,    15,    33,    24,    25,     0,     0,     0,    70,
      52,    51,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,     0,     0,     0,     0,
       5,     0,     0,    31,     0,    44,    45,    69,     0,    55,
      56,    57,    58,    53,    54,    59,    60,    65,    66,    61,
      62,    63,    64,    67,    68,    28,    29,     0,     0,     0,
       0,     0,     8,     6,     0,    34,    50,    12,     0,    39,
      36,     9,     0,     0,     0,     0,    30,    42,    40,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -70,   -70,   -70,   -70,   -70,    15,   -69,    24,    -2,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -31
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    15,    46,    47,    84,    16,    85,    18,
      19,    20,    21,    22,    23,    24,    94,    25,    44,   135,
      26,    43,   134,    27,    42,    28,    29,    30,    40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      17,    57,    58,    59,     3,    90,    60,    61,    65,    66,
      67,    68,    48,    31,    50,    32,    88,    92,    93,    73,
      74,    83,    41,    45,    49,   125,    91,     4,    89,    67,
      68,    51,    52,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
       5,     6,     7,     8,     9,   119,   120,   127,    53,    10,
      11,    12,     4,    54,    14,   138,   139,    55,    64,    33,
      65,    66,    67,    68,    56,    62,    34,    63,    82,    86,
      87,    17,    35,    95,   115,     5,     6,     7,     8,     9,
     116,   118,   121,     4,    10,    11,    12,   133,   122,    14,
     128,   136,   131,    36,    37,   132,   123,   117,     4,     0,
      38,    39,     0,     0,     0,    50,     5,     6,     7,     8,
       9,     0,     0,     0,     0,    10,    11,    12,     0,    13,
      14,     5,     6,     7,     8,     9,     0,     0,     0,     0,
      10,    11,    12,     0,     0,    14,    65,    66,    67,    68,
       0,    69,    70,     0,     0,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,     0,     0,     0,     0,    96,
       0,     0,     0,    81,    65,    66,    67,    68,     0,    69,
      70,     0,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    97,     0,     0,     0,     0,    65,    66,
      67,    68,     0,    69,    70,     0,     0,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,   129,     0,     0,
       0,     0,    65,    66,    67,    68,     0,    69,    70,     0,
       0,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,   130,     0,     0,     0,     0,    65,    66,    67,    68,
       0,    69,    70,     0,     0,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,   137,     0,     0,     0,     0,
      65,    66,    67,    68,     0,    69,    70,     0,     0,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,   124,
       0,     0,    65,    66,    67,    68,     0,    69,    70,     0,
       0,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,   126,     0,     0,    65,    66,    67,    68,     0,    69,
      70,     0,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    65,    66,    67,    68,     0,    69,    70,
       0,     0,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    65,    66,    67,    68,     0,    69,    70,     0,
       0,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      65,    66,    67,    68,     0,    69,    70,     0,     0,    71,
      72,    73,    74,    75,    76,    77,    78,    65,    66,    67,
      68,     0,    69,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    65,    66,    67,    68,     0,     0,
       0,     0,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    65,    66,    67,    68,     0,     0,     0,     0,     0,
      71,    72,    73,    74,     0,     0,    77,    78
};

static const yytype_int16 yycheck[] =
{
       2,    32,    33,    34,     0,     9,    46,    47,    11,    12,
      13,    14,     7,     5,    16,     5,     7,    48,    49,    22,
      23,     3,    46,    46,    19,    94,    30,     9,    19,    13,
      14,     9,     9,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      32,    33,    34,    35,    36,    86,    87,     4,    44,    41,
      42,    43,     9,     9,    46,   134,   135,     9,     7,     5,
      11,    12,    13,    14,    46,    46,    12,    46,    37,     5,
       5,    83,    18,     6,    46,    32,    33,    34,    35,    36,
      46,    42,    47,     9,    41,    42,    43,   128,    47,    46,
       5,   132,     8,    39,    40,    19,    91,    83,     9,    -1,
      46,    47,    -1,    -1,    -1,   117,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    41,    42,    43,    -1,    45,
      46,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      41,    42,    43,    -1,    -1,    46,    11,    12,    13,    14,
      -1,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,     6,
      -1,    -1,    -1,    38,    11,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     6,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     6,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    -1,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     6,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      -1,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     6,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    -1,    16,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     8,
      -1,    -1,    11,    12,    13,    14,    -1,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     8,    -1,    -1,    11,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    11,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    11,    12,    13,    14,    -1,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      11,    12,    13,    14,    -1,    16,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    11,    12,    13,
      14,    -1,    16,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    -1,    -1,    26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    51,     0,     9,    32,    33,    34,    35,    36,
      41,    42,    43,    45,    46,    52,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    66,    69,    72,    74,    75,
      76,     5,     5,     5,    12,    18,    39,    40,    46,    47,
      77,    46,    73,    70,    67,    46,    53,    54,     7,    19,
      57,     9,     9,    44,     9,     9,    46,    77,    77,    77,
      46,    47,    46,    46,     7,    11,    12,    13,    14,    16,
      17,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    38,    37,     3,    55,    57,     5,     5,     7,    19,
       9,    30,    77,    77,    65,     6,     6,     6,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    46,    46,    56,    42,    77,
      77,    47,    47,    54,     8,    55,     8,     4,     5,     6,
       6,     8,    19,    77,    71,    68,    77,     6,    55,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    53,    53,    54,    54,
      54,    55,    55,    56,    56,    57,    57,    57,    57,    57,
      58,    58,    59,    59,    59,    59,    60,    60,    61,    62,
      63,    63,    64,    65,    64,    67,    68,    66,    70,    71,
      69,    73,    72,    74,    75,    76,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     3,     3,     1,     3,     4,
       1,     1,     3,     2,     1,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     4,     4,
       6,     3,     1,     0,     4,     0,     0,     7,     0,     0,
       7,     0,     7,     1,     4,     4,     1,     1,     2,     2,
       4,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2
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
#line 177 "Acse.y" /* yacc.c:1646  */
    {
            /* Notify the end of the program. Once called
             * the function `set_end_Program' - if necessary -
             * introduces a `HALT' instruction into the
             * list of instructions. */
            set_end_Program(program);

            /* return from yyparse() */
            YYACCEPT;
         }
#line 1526 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 189 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1532 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 190 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1538 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 194 "Acse.y" /* yacc.c:1646  */
    {
                     /* update the program infos by adding new variables */
                     set_new_variables(program, (yyvsp[-2].intval), (yyvsp[-1].list));
                  }
#line 1547 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 201 "Acse.y" /* yacc.c:1646  */
    {  /* add the new declaration to the list of declarations */
                     (yyval.list) = addElement((yyvsp[-2].list), (yyvsp[0].decl), -1);
                  }
#line 1555 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 205 "Acse.y" /* yacc.c:1646  */
    {
                     /* add the new declaration to the list of declarations */
                     (yyval.list) = addElement(NULL, (yyvsp[0].decl), -1);
                  }
#line 1564 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 212 "Acse.y" /* yacc.c:1646  */
    {
               /* create a new instance of t_axe_declaration */
               (yyval.decl) = alloc_declaration((yyvsp[-2].svalue), 0, 0, (yyvsp[0].intval));

               /* test if an `out of memory' occurred */
               if ((yyval.decl) == NULL)
                  notifyError(AXE_OUT_OF_MEMORY);
            }
#line 1577 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 221 "Acse.y" /* yacc.c:1646  */
    {
               /* create a new instance of t_axe_declaration */
               (yyval.decl) = alloc_declaration((yyvsp[-3].svalue), 1, (yyvsp[-1].intval), 0);

                  /* test if an `out of memory' occurred */
               if ((yyval.decl) == NULL)
                  notifyError(AXE_OUT_OF_MEMORY);
            }
#line 1590 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 230 "Acse.y" /* yacc.c:1646  */
    {
               /* create a new instance of t_axe_declaration */
               (yyval.decl) = alloc_declaration((yyvsp[0].svalue), 0, 0, 0);
               
               /* test if an `out of memory' occurred */
               if ((yyval.decl) == NULL)
                  notifyError(AXE_OUT_OF_MEMORY);
            }
#line 1603 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 242 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1609 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 243 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1615 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 247 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1621 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 248 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1627 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 253 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1633 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 254 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1639 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 255 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1645 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 256 "Acse.y" /* yacc.c:1646  */
    { gen_nop_instruction(program); }
#line 1651 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 257 "Acse.y" /* yacc.c:1646  */
    {}
#line 1657 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 260 "Acse.y" /* yacc.c:1646  */
    {}
#line 1663 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 261 "Acse.y" /* yacc.c:1646  */
    {}
#line 1669 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 263 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1675 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 264 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1681 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 265 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1687 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 266 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1693 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 269 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1699 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 270 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1705 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 274 "Acse.y" /* yacc.c:1646  */
    {
                t_axe_variable *array = getVariable(program,(yyvsp[0].svalue));
                if (!array->isArray)
                    notifyError(AXE_SYNTAX_ERROR);
                if (stack.id == NULL) {
                    stack.id = strdup((yyvsp[0].svalue));
                    stack.index_reg = gen_load_immediate(program, 0);
                }
                if (strcmp(stack.id, (yyvsp[0].svalue)))
                    notifyError(AXE_SYNTAX_ERROR);
                else {
                    t_axe_label *l_end = newLabel(program);
                    int tmp_reg = getNewRegister(program);
                    gen_subi_instruction(program, tmp_reg, stack.index_reg, array->arraySize);
                    gen_beq_instruction(program, l_end, 0);
                    storeArrayElement(program, (yyvsp[0].svalue), create_expression(stack.index_reg, REGISTER), (yyvsp[-2].expr));
                    gen_addi_instruction(program, stack.index_reg, stack.index_reg, 1);
                    assignLabel(program, l_end);
                }
                free((yyvsp[0].svalue));
               }
#line 1731 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 297 "Acse.y" /* yacc.c:1646  */
    {
                t_axe_variable *array = getVariable(program, (yyvsp[0].svalue));
                if (!array->isArray) {
                    notifyError(AXE_SYNTAX_ERROR);
                }
                if (stack.id == NULL) {
                    stack.id = strdup((yyvsp[0].svalue));
                    stack.index_reg = gen_load_immediate(program, 0);
                }
                if (strcmp(stack.id, (yyvsp[0].svalue))) {
                    notifyError(AXE_SYNTAX_ERROR);
                } else {
                    t_axe_label *l_end = newLabel(program);
                    int tmp_reg = getNewRegister(program);
                    gen_subi_instruction(program, tmp_reg, stack.index_reg, 0);
                    gen_beq_instruction(program, l_end, 0);
                    gen_subi_instruction(program, tmp_reg, stack.index_reg, 1);
                    tmp_reg = loadArrayElement(program, (yyvsp[0].svalue), create_expression(tmp_reg, REGISTER));
                    int location = get_symbol_location(program, (yyvsp[-2].svalue), 0);
                    gen_add_instruction(program, location, REG_0, tmp_reg, CG_DIRECT_ALL);
                    gen_subi_instruction(program, stack.index_reg, stack.index_reg, 1);
                    assignLabel(program, l_end);
                }
                free((yyvsp[-2].svalue));
                free((yyvsp[0].svalue));
              }
#line 1762 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 325 "Acse.y" /* yacc.c:1646  */
    {
               /* Notify to `program' that the value $6
                * have to be assigned to the location
                * addressed by $1[$3]. Where $1 is obviously
                * the array/pointer identifier, $3 is an expression
                * that holds an integer value. That value will be
                * used as an index for the array $1 */
               storeArrayElement(program, (yyvsp[-5].svalue), (yyvsp[-3].expr), (yyvsp[0].expr));

               /* free the memory associated with the IDENTIFIER.
                * The use of the free instruction is required
                * because of the value associated with IDENTIFIER.
                * The value of IDENTIFIER is a string created
                * by a call to the function `strdup' (see Acse.lex) */
               free((yyvsp[-5].svalue));
            }
#line 1783 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 342 "Acse.y" /* yacc.c:1646  */
    {
               int location;
               t_axe_instruction *instr;

               /* in order to assign a value to a variable, we have to
                * know where the variable is located (i.e. in which register).
                * the function `get_symbol_location' is used in order
                * to retrieve the register location assigned to
                * a given identifier.
                * A symbol table keeps track of the location of every
                * declared variable.
                * `get_symbol_location' perform a query on the symbol table
                * in order to discover the correct location of
                * the variable with $1 as identifier */
               
               /* get the location of the symbol with the given ID. */
               location = get_symbol_location(program, (yyvsp[-2].svalue), 0);

               /* update the value of location */
               if ((yyvsp[0].expr).expression_type == IMMEDIATE)
                  gen_move_immediate(program, location, (yyvsp[0].expr).value);
               else
                  instr = gen_add_instruction
                        (program, location, REG_0, (yyvsp[0].expr).value, CG_DIRECT_ALL);

               /* free the memory associated with the IDENTIFIER */
               free((yyvsp[-2].svalue));
            }
#line 1816 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 373 "Acse.y" /* yacc.c:1646  */
    {
                  /* fix the `label_else' */
                  assignLabel(program, (yyvsp[0].label));
               }
#line 1825 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 378 "Acse.y" /* yacc.c:1646  */
    {
                  /* reserve a new label that points to the address where to jump if
                   * `exp' is verified */
                  (yyvsp[0].label) = newLabel(program);
   
                  /* exit from the if-else */
                  gen_bt_instruction (program, (yyvsp[0].label), 0);
   
                  /* fix the `label_else' */
                  assignLabel(program, (yyvsp[-1].label));
               }
#line 1841 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 390 "Acse.y" /* yacc.c:1646  */
    {
                  /* fix the `label_else' */
                  assignLabel(program, (yyvsp[-2].label));
               }
#line 1850 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 397 "Acse.y" /* yacc.c:1646  */
    {
                  /* the label that points to the address where to jump if
                   * `exp' is not verified */
                  (yyvsp[0].label) = newLabel(program);
               }
#line 1860 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 403 "Acse.y" /* yacc.c:1646  */
    {
                     if ((yyvsp[-1].expr).expression_type == IMMEDIATE)
                         gen_load_immediate(program, (yyvsp[-1].expr).value);
                     else
                         gen_andb_instruction(program, (yyvsp[-1].expr).value,
                             (yyvsp[-1].expr).value, (yyvsp[-1].expr).value, CG_DIRECT_ALL);

                     /* if `exp' returns FALSE, jump to the label $1 */
                     gen_beq_instruction (program, (yyvsp[-4].label), 0);
               }
#line 1875 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 413 "Acse.y" /* yacc.c:1646  */
    { (yyval.label) = (yyvsp[-6].label); }
#line 1881 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 417 "Acse.y" /* yacc.c:1646  */
    {
                     /* initialize the value of the non-terminal */
                     (yyvsp[0].while_stmt) = create_while_statement();

                     /* reserve and fix a new label */
                     (yyvsp[0].while_stmt).label_condition
                           = assignNewLabel(program);
                  }
#line 1894 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 426 "Acse.y" /* yacc.c:1646  */
    {
                     if ((yyvsp[-1].expr).expression_type == IMMEDIATE)
                        gen_load_immediate(program, (yyvsp[-1].expr).value);
                     else
                         gen_andb_instruction(program, (yyvsp[-1].expr).value,
                             (yyvsp[-1].expr).value, (yyvsp[-1].expr).value, CG_DIRECT_ALL);

                     /* reserve a new label. This new label will point
                      * to the first instruction after the while code
                      * block */
                     (yyvsp[-4].while_stmt).label_end = newLabel(program);

                     /* if `exp' returns FALSE, jump to the label $1.label_end */
                     gen_beq_instruction (program, (yyvsp[-4].while_stmt).label_end, 0);
                  }
#line 1914 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 442 "Acse.y" /* yacc.c:1646  */
    {
                     /* jump to the beginning of the loop */
                     gen_bt_instruction
                           (program, (yyvsp[-6].while_stmt).label_condition, 0);

                     /* fix the label `label_end' */
                     assignLabel(program, (yyvsp[-6].while_stmt).label_end);
                  }
#line 1927 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 453 "Acse.y" /* yacc.c:1646  */
    {
                        /* the label that points to the address where to jump if
                         * `exp' is not verified */
                        (yyvsp[0].label) = newLabel(program);
                        
                        /* fix the label */
                        assignLabel(program, (yyvsp[0].label));
                     }
#line 1940 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 462 "Acse.y" /* yacc.c:1646  */
    {
                           if ((yyvsp[-1].expr).expression_type == IMMEDIATE)
                               gen_load_immediate(program, (yyvsp[-1].expr).value);
                           else
                               gen_andb_instruction(program, (yyvsp[-1].expr).value,
                                   (yyvsp[-1].expr).value, (yyvsp[-1].expr).value, CG_DIRECT_ALL);

                           /* if `exp' returns TRUE, jump to the label $1 */
                           gen_bne_instruction (program, (yyvsp[-6].label), 0);
                     }
#line 1955 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 475 "Acse.y" /* yacc.c:1646  */
    {
               /* insert an HALT instruction */
               gen_halt_instruction(program);
            }
#line 1964 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 482 "Acse.y" /* yacc.c:1646  */
    {
               int location;
               
               /* read from standard input an integer value and assign
                * it to a variable associated with the given identifier */
               /* get the location of the symbol with the given ID */
               
               /* lookup the symbol table and fetch the register location
                * associated with the IDENTIFIER $3. */
               location = get_symbol_location(program, (yyvsp[-1].svalue), 0);

               /* insert a read instruction */
               gen_read_instruction (program, location);

               /* free the memory associated with the IDENTIFIER */
               free((yyvsp[-1].svalue));
            }
#line 1986 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 502 "Acse.y" /* yacc.c:1646  */
    {
   
               int location;

               if ((yyvsp[-1].expr).expression_type == IMMEDIATE)
               {
                  /* load `immediate' into a new register. Returns the new register
                   * identifier or REG_INVALID if an error occurs */
                  location = gen_load_immediate(program, (yyvsp[-1].expr).value);
               }
               else
                  location = (yyvsp[-1].expr).value;

               /* write to standard output an integer value */
               gen_write_instruction (program, location);
            }
#line 2007 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 520 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = create_expression ((yyvsp[0].intval), IMMEDIATE); }
#line 2013 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 521 "Acse.y" /* yacc.c:1646  */
    {
                     int location;
   
                     /* get the location of the symbol with the given ID */
                     location = get_symbol_location(program, (yyvsp[0].svalue), 0);
                     
                     /* return the register location of IDENTIFIER as
                      * a value for `exp' */
                     (yyval.expr) = create_expression (location, REGISTER);

                     /* free the memory associated with the IDENTIFIER */
                     free((yyvsp[0].svalue));
   }
#line 2031 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 534 "Acse.y" /* yacc.c:1646  */
    {
    t_axe_variable *array = getVariable(program, (yyvsp[0].svalue));
    if (!array->isArray) {
        notifyError(AXE_SYNTAX_ERROR);
    }
    if (stack.id = NULL) {
        stack.id = strdup((yyvsp[0].svalue));
        stack.index_reg = gen_load_immediate(program, 0);
    }
    if (strcmp(stack.id, (yyvsp[0].svalue))) {
        notifyError(AXE_SYNTAX_ERROR);
    } else {
        (yyval.expr) = handle_binary_comparison(program, create_expression(stack.index_reg, REGISTER), create_expression(0, IMMEDIATE), _EQ_);
    }
    free((yyvsp[0].svalue));
   }
#line 2052 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 550 "Acse.y" /* yacc.c:1646  */
    {
    t_axe_variable *array = getVariable(program, (yyvsp[0].svalue));
    if (!array->isArray) {
        notifyError(AXE_SYNTAX_ERROR);
    }
    if (stack.id == NULL) {
        stack.id = strdup((yyvsp[0].svalue));
        stack.index_reg = gen_load_immediate(program, 0);
    }
    if (strcmp(stack.id, (yyvsp[0].svalue))) {
        notifyError(AXE_SYNTAX_ERROR);
    } else {
        (yyval.expr) = handle_binary_comparison(program, create_expression(stack.index_reg, REGISTER),create_expression(array->arraySize, IMMEDIATE), _EQ_);
    }
    free((yyvsp[0].svalue));
   }
#line 2073 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 566 "Acse.y" /* yacc.c:1646  */
    {
                     int reg;
                     
                     /* load the value IDENTIFIER[exp]
                      * into `arrayElement' */
                     reg = loadArrayElement(program, (yyvsp[-3].svalue), (yyvsp[-1].expr));

                     /* create a new expression */
                     (yyval.expr) = create_expression (reg, REGISTER);

                     /* free the memory associated with the IDENTIFIER */
                     free((yyvsp[-3].svalue));
   }
#line 2091 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 579 "Acse.y" /* yacc.c:1646  */
    {  if ((yyvsp[0].intval) == 0)
                           (yyval.expr) = create_expression (1, IMMEDIATE);
                        else
                           (yyval.expr) = create_expression (0, IMMEDIATE);
   }
#line 2101 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 584 "Acse.y" /* yacc.c:1646  */
    {
                           int identifier_location;
                           int output_register;
   
                           /* get the location of the symbol with the given ID */
                           identifier_location =
                                 get_symbol_location(program, (yyvsp[0].svalue), 0);

                           /* generate a NOT instruction. In order to do this,
                            * at first we have to ask for a free register where
                            * to store the result of the NOT instruction. */
                           output_register = getNewRegister(program);

                           /* Now we are able to generate a NOT instruction */
                           gen_notl_instruction (program, output_register
                                 , identifier_location);

                           (yyval.expr) = create_expression (output_register, REGISTER);

                           /* free the memory associated with the IDENTIFIER */
                           free((yyvsp[0].svalue));
   }
#line 2128 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 606 "Acse.y" /* yacc.c:1646  */
    {
                           (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), ANDB);
   }
#line 2136 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 609 "Acse.y" /* yacc.c:1646  */
    {
                           (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), ORB);
   }
#line 2144 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 612 "Acse.y" /* yacc.c:1646  */
    {
                           (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), ADD);
   }
#line 2152 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 615 "Acse.y" /* yacc.c:1646  */
    {
                           (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), SUB);
   }
#line 2160 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 618 "Acse.y" /* yacc.c:1646  */
    {
                           (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), MUL);
   }
#line 2168 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 621 "Acse.y" /* yacc.c:1646  */
    {
                           (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), DIV);
   }
#line 2176 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 624 "Acse.y" /* yacc.c:1646  */
    {
                        (yyval.expr) = handle_binary_comparison (program, (yyvsp[-2].expr), (yyvsp[0].expr), _LT_);
   }
#line 2184 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 627 "Acse.y" /* yacc.c:1646  */
    {
                        (yyval.expr) = handle_binary_comparison (program, (yyvsp[-2].expr), (yyvsp[0].expr), _GT_);
   }
#line 2192 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 630 "Acse.y" /* yacc.c:1646  */
    {
                        (yyval.expr) = handle_binary_comparison (program, (yyvsp[-2].expr), (yyvsp[0].expr), _EQ_);
   }
#line 2200 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 633 "Acse.y" /* yacc.c:1646  */
    {
                        (yyval.expr) = handle_binary_comparison (program, (yyvsp[-2].expr), (yyvsp[0].expr), _NOTEQ_);
   }
#line 2208 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 636 "Acse.y" /* yacc.c:1646  */
    {
                        (yyval.expr) = handle_binary_comparison (program, (yyvsp[-2].expr), (yyvsp[0].expr), _LTEQ_);
   }
#line 2216 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 639 "Acse.y" /* yacc.c:1646  */
    {
                        (yyval.expr) = handle_binary_comparison (program, (yyvsp[-2].expr), (yyvsp[0].expr), _GTEQ_);
   }
#line 2224 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 642 "Acse.y" /* yacc.c:1646  */
    {  (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), SHL); }
#line 2230 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 643 "Acse.y" /* yacc.c:1646  */
    {  (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), SHR); }
#line 2236 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 644 "Acse.y" /* yacc.c:1646  */
    {  (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), ANDL); }
#line 2242 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 645 "Acse.y" /* yacc.c:1646  */
    {  (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), ORL); }
#line 2248 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 646 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 2254 "Acse.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 647 "Acse.y" /* yacc.c:1646  */
    {
                        if ((yyvsp[0].expr).expression_type == IMMEDIATE)
                        {
                           (yyval.expr) = (yyvsp[0].expr);
                           (yyval.expr).value = - ((yyval.expr).value);
                        }
                        else
                        {
                           t_axe_expression exp_r0;

                           /* create an expression for regisrer REG_0 */
                           exp_r0.value = REG_0;
                           exp_r0.expression_type = REGISTER;
                           
                           (yyval.expr) = handle_bin_numeric_op
                                 (program, exp_r0, (yyvsp[0].expr), SUB);
                        }
                     }
#line 2277 "Acse.tab.c" /* yacc.c:1646  */
    break;


#line 2281 "Acse.tab.c" /* yacc.c:1646  */
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
#line 667 "Acse.y" /* yacc.c:1906  */

/*=========================================================================
                                  MAIN
=========================================================================*/
int main (int argc, char **argv)
{
   /* initialize all the compiler data structures and global variables */
   init_compiler(argc, argv);
   
   /* start the parsing procedure */
   yyparse();
   
#ifndef NDEBUG
   fprintf(stdout, "Parsing process completed. \n");
#endif

   /* test if the parsing process completed succesfully */
   checkConsistency();
   
#ifndef NDEBUG
   fprintf(stdout, "Creating a control flow graph. \n");
#endif

   /* create the control flow graph */
   graph = createFlowGraph(program->instructions);
   checkConsistency();

#ifndef NDEBUG
   assert(program != NULL);
   assert(program->sy_table != NULL);
   assert(file_infos != NULL);
   assert(file_infos->syTable_output != NULL);
   printSymbolTable(program->sy_table, file_infos->syTable_output);
   printGraphInfos(graph, file_infos->cfg_1, 0);
      
   fprintf(stdout, "Updating the basic blocks. \n");
#endif
      
   /* update the control flow graph by inserting load and stores inside
   * every basic block */
   graph = insertLoadAndStoreInstr(program, graph);

#ifndef NDEBUG
   fprintf(stdout, "Executing a liveness analysis on the intermediate code \n");
#endif
   performLivenessAnalysis(graph);
   checkConsistency();

#ifndef NDEBUG
   printGraphInfos(graph, file_infos->cfg_2, 1);
#endif
      
#ifndef NDEBUG
   fprintf(stdout, "Starting the register allocation process. \n");
#endif
   /* initialize the register allocator by using the control flow
    * informations stored into the control flow graph */
   RA = initializeRegAlloc(graph);
      
   /* execute the linear scan algorythm */
   execute_linear_scan(RA);
      
#ifndef NDEBUG
   printRegAllocInfos(RA, file_infos->reg_alloc_output);
#endif

#ifndef NDEBUG
   fprintf(stdout, "Updating the control flow informations. \n");
#endif
   /* apply changes to the program informations by using the informations
   * of the register allocation process */
   updateProgramInfos(program, graph, RA);

#ifndef NDEBUG
   fprintf(stdout, "Writing the assembly file... \n");
#endif
   writeAssembly(program, file_infos->output_file_name);
      
#ifndef NDEBUG
   fprintf(stdout, "Assembly written on file \"%s\".\n", file_infos->output_file_name);
#endif
   
   /* shutdown the compiler */
   shutdownCompiler(0);

   return 0;
}

/*=========================================================================
                                 YYERROR
=========================================================================*/
int yyerror(const char* errmsg)
{
   errorcode = AXE_SYNTAX_ERROR;
   
   return 0;
}
