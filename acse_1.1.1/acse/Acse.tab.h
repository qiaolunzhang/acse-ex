/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
    DO = 290,
    WHILE = 291,
    IF = 292,
    ELSE = 293,
    TYPE = 294,
    IDENTIFIER = 295,
    NUMBER = 296,
    NOT = 297
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 100 "Acse.y" /* yacc.c:1909  */
            
   int intval;
   char *svalue;
   t_axe_expression expr;
   t_axe_declaration *decl;
   t_list *list;
   t_axe_label *label;
   t_while_statement while_stmt;

#line 107 "Acse.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ACSE_TAB_H_INCLUDED  */
