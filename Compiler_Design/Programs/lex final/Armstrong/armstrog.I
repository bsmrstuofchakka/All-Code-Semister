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

main()
{

yylex();
}
void check(char *a)
{
    int len=strlen(a),i,num=0;
    for(i=0;i<len;i++)
        num=num*10+(a[i]-'0');
    int x=0,temp=num,t;
    while(num>0)
    {  
       t=num%10;
        x=x+(t*t*t);
        num=num/10;
    }
    if(x==temp)
        printf("%d is armstrong \n",temp);
    else
        printf("%d is not armstrong \n",temp);
}