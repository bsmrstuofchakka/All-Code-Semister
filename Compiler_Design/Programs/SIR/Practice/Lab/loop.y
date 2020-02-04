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

line:  expr'\n' {printf("%d",$1);}
;
expr : expr '+' term {$$=$1+$3;}
      |term
      ;
term: term '*' factor {$$=$1*$3;}
     |factor
     ;
factor:'('expr')'  {$$=$2;}
       |DIGIT
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