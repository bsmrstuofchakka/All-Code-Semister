%{
    #include <stdio.h>
    #include <string.h>    
    #include <stdlib.h>
    extern int yylex();
    
    void yyerror(char *msg);
    int num,i,flag=0,n;   
%}

%union
{
    int f;
}

%token <f> NUM
%type <f> E 

%%

S : E	{
	    num = $1;
            for(i=2; i<=num/2; ++i)
             {
               if(num%i==0)
                 {
                  flag=1;
                  break;
                 }
              }

          if (flag==0)
          printf("%d is a prime number.",num);
          else
           printf("%d is not a prime number.",num);
    
        }
  ;

E :  NUM    {$$ = $1;}
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