
%{
#include <stdio.h>
#include <stdlib.h>
extern int yylex();
void yyerror(char *s);
%}

%union{int a_number;}

%start	line  
%token	<a_number> number
%type	<a_number> exp term factor others

%%
 line	: exp {
        
         printf("Result is %d\n", $$);}
	;

exp	: term		{ $$= 1; }
	| exp '+' term	{ $$ = 1; }
	;

term	: factor		{ $$ = 1; }
	| term '*' factor	{ $$ =1; }
        ;

factor	: number		{ $$ = 1; }
	| '(' exp ')'		{ $$ = 1;}
	;

others  :                 {$$ = 0;}


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