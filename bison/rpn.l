%{
#define YYSTYPE double
#include "rpn.tab.h"
#include <stdlib.h>
%}

%option noyywrap

DIGIT [0-9]
BLANKS [ \t]

%%

{BLANKS}+
"+" return OP_PLUS;
"-" return OP_MINUS;
"/" return OP_DIV;
"*" return OP_MUL;
"^" return OP_EXP;
"n" return UN_MINUS;
"\n" return NEWLINE;
{DIGIT}+ |
{DIGIT}*"."{DIGIT}+ { yylval=atof(yytext); return NUM; }


%%
