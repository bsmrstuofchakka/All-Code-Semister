%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h" 
%}

/* %option noyywrap */
%%

[0-9]+		{	yylval.f = atoi(yytext); return STR;	}
[-+()*/]	{	return yytext[0];  }
[ \t\n]         {;}

%%

 int yywrap() { return 0; }