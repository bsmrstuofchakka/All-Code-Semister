%{
#include<string.h>
#include<math.h>
void check(char *);
%}
%%
[0-9]+ check(yytext);
%%
int yywrap(){
return 1;
}

int main()
{
yylex();
getch();
}
void check(char *a)
{
    int len=strlen(a),i,num=0,s,j;
    for(i=0;i<len;i++)
        num=num*10+(a[i]-'0');
    int n=num;
    s=sqrt(n);
        for(j=2; j<=s; j++)
        {
            if(n%j==0)
            {
                printf("The number is not prime\n");
                break;
            }
        }
        if(j>s)
        {
            printf("The number is prime.\n");
        }
}