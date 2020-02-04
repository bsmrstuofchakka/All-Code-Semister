#include<stdio.h>
int main()
{
    long long int i,t,a,b,c,d,e,gcd,lcm;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        gcd=1;
        scanf("%lld%lld",&a,&b);
        c=a,d=b;
        while(a>b)
        {
            e=a;
            a=b;
            b=e;
        }
        while(gcd!=0)
        {
            gcd=b%a;
            b=a;
            a=gcd;
        }
        lcm=(c*d)/b;
        printf("%lld %lld\n",b,lcm);
    }

    return 0;
}
