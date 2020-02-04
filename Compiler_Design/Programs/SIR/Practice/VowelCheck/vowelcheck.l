%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h" 
%}

%%

[a-zA-Z0-9]+           {	yylval.f = atoi(yytext); return NUM;	}
[-+()*/]            {	return yytext[0];  }
[ \t\n]             {;}

%%

 int yywrap() { return -1; } 