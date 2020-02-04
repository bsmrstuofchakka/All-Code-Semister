/* Mini Calculator */
/* calc.y */

%{
#include <stdio.h>
#include <stdlib.h>
extern int yylex();
void yyerror(char *s);
%}

%union{float a_number;}

%start	line 
%token	<a_number> number
%type	<a_number> exp term factor

%%

line	: exp {printf("Result is %.2f\n", $1);}
	;

exp	: term		{ $$ = $1; }
	| exp '+' term	{ $$ = $1 + $3; }
	| exp '-' term	{ $$ = $1 - $3; }
	;

term	: factor		{ $$ = $1; }
	| term '*' factor	{ $$ = $1 * $3; }
	| term '/' factor	{ $$ = $1 / $3; }
	;

factor	: number		{ $$ = $1; }
	| '(' exp ')'		{ $$ = $2; }
	| '-' factor 		{ $$ = $2; }
	;

%%

int main ()
{
  yyparse();
  getch();
  return 0;
}

void yyerror(char *s)
{
  fprintf(stderr, "%s\n",s);
}