%{
    #include <stdio.h>
    #include <string.h>    
    #include <stdlib.h>
    extern int yylex();
    
    void yyerror(char *msg);
    int flag;
    
    int i, j,num,num1;
    int k =0;        
%}

%union {
    char* f;
    char* f1;
}

%token <f> STR 

%type <f> E 

%%

S : E	{
          num = $1;
	  for(i=0;i<=num;i++){

           k= k+i;
	  }

	 printf("Value is: %d",k);
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