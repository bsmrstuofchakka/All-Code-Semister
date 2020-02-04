%{
    #include <stdio.h>
    #include <string.h>    
    #include <stdlib.h>
    extern int yylex();
    
    void yyerror(char *msg);
    int num, fact, i;        
%}

%union {
    int f;
}

%token <f> STR
%type <f> E 

%%

S : E	{
	    num = $1;
	    printf("Factorial of %d is : ", $1);
	    
	    if(num == 0)	printf("1\n\n");
	    else {
		fact = 1;
		for (i=0; i<num; i++) {
		     fact *= (num-i);
		}
		printf("%d\n", fact);
	    }
        }
  ;

E :  STR    {$$ = $1;}
  ;

%%

void yyerror(char *msg) 
{
    fprintf(stderr, "%s\n", msg);
    exit(1);
}

int main()
{
    yyparse();

    getch();
    return 0;
} 