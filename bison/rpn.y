%{
#define YYSTYPE double
#include <math.h>
%}

%token NUM
%token OP_PLUS
%token OP_MINUS
%token OP_MUL
%token OP_DIV
%token OP_EXP
%token UN_MINUS
%token NEWLINE

%%
input: /*empty*/
    | input line
    ;

line: NEWLINE
    | exp NEWLINE {printf("\t%.10g\n", $1);}
    ;

exp: NUM               {$$ = $1;}
    | exp exp OP_PLUS   {$$ = $1 + $2;}
    | exp exp OP_MINUS  {$$ = $1 - $2;}
    | exp exp OP_MUL    {$$ = $1 * $2;}
    | exp exp OP_DIV    {$$ = $1 / $2;}
    | exp exp OP_EXP    {$$ = pow($1, $2);} 
    | exp UN_MINUS      {$$ = -$1;}
%%

int yyerror(char *s) {
    printf("%s\n", s);
}

int main() {
    yyparse();
}
