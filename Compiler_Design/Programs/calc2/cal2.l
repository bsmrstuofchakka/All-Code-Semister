%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
%}

%%

[-+]?[0-9]*\.?[0-9]+	{yylval.a_number = atof(yytext); return number;}
[-+*/();]	{return yytext[0];}
[ \t\n]		{;}
.		{ECHO; yyerror("Unexpected character");}

%%
int yywrap(void)
{
return 1;
}