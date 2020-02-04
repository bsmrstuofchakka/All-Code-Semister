%{
#include<stdio.h>
#include "lex.yy.c"
int i=0;
%}
%token A B
%%
S: pal '\n' {i=1;}
pal:
   | A pal A {printf("my3");i=1;}
   | B pal B {printf("my4");i=1;}       
   | A {printf("my1");i=1;}
   | B {printf("my2");i=1;}         
   ;
%%
int main()
{
    printf("Enter Valid string\n");
    yyparse();
    if(i==1)
    printf("Valid");
    return 0;
}
int yyerror(char* s)
{
    printf("Invalid\n");
    return 0;
}