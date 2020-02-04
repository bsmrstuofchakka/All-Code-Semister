#include<stdio.h>
int main()
{
    long long int n,a,b,rev,tnry;
    while(scanf("%lld",&n)!=EOF)

    {
        if(n<0)
            break;
        tnry=0;
        while(n>0)
        {
            a=n%3;
            n=n/3;
            tnry=tnry*10+a;
        }
        rev=0;
        while(tnry>0)
        {
            b=tnry%10;
            tnry=tnry/10;
            rev=rev*10+b;
        }
        printf("%lld\n",rev);

    }
    return 0;
}
