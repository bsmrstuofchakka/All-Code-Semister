/* Mini Calculator */
/* calc.y */

%{
#include <stdio.h>
#include <stdlib.h>
extern int yylex();
void yyerror(char *s);
%}

%union{int a_number;}

%start	line 
%token	<a_number> number
%type	<a_number> exp term factor

%%

line	: exp {printf("Result is %d\n", $1);}
	;

exp	: term		{ $$ = $1; }
	| exp term '+'	{ $$ = $1 + $2; }
	| exp term '-'  { $$ = $1 - $2; }
	;

term	: factor		{ $$ = $1; }
	| term factor '*'	{ $$ = $1 * $2; }
	| term factor '/'	{ $$ = $1 / $2; }
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