#include<stdio.h>
int main()
{
    long long int i,a,b,c,n,sum,add;
    while(scanf("%lld",&n)!=EOF&&n>=0)
    {
        a=0,b=1,i=1,sum=0;
        while(i<=n)
        {
            sum=sum+b;
            c=a+b;
            a=b;
            b=c;
            i++;
        }
        add=sum+b;
        printf("%lld %lld\n",sum,add);

    }
    return 0;
}
