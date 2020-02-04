%{
    #include <stdio.h>
    #include <string.h>    
    #include <stdlib.h>
    extern int yylex();
    
    void yyerror(char *msg);
    int flag;
    
    int i, j;
    int k =0;        
%}

%union {
    char* f;
}

%token <f> NUM
%type <f> E 

%%

S : E	{
            flag = 1;
	    k = strlen($1);

	    for(i=0, j=k-1; i<k/2; i++, j--) {
		if ($1[i] != $1[j])
                flag = 0;
            }

	     if (flag == 1)	printf("Palindrome.\n");
	     else		printf("Not Palindrome.\n");
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