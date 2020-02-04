#include<stdio.h>
int main()
{
    long long int i,t,a,b,c,d,gcd,lcm;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        gcd=1;
        scanf("%lld%lld",&a,&b);
        c=a,d=b;
        if(a>b)
            printf("-1\n");
        else if(a<=b)
        {
            while(gcd!=0)
            {
                gcd=b%a;
                b=a;
                a=gcd;
            }
            lcm=(c*d)/b;
            printf("%lld %lld\n",b,lcm);
        }
    }

    return 0;
}
