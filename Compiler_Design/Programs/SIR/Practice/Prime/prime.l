%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h" 
%}

%%

[0-9]+	{ yylval.f = atoi(yytext); return NUM;}

%%

 int yywrap()
 { 
 return -1; 
 }