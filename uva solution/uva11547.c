#include<stdio.h>
int main()
{
    int i,t,n,result,dividor,remainder;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        result=((((n*567)/9+7492)*235)/47)-498;
        dividor=result/10;
        remainder=dividor%10;
        printf("%d\n",abs(remainder));
    }
    return 0;
}
