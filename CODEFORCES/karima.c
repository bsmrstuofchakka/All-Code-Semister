#include<stdio.h>
int main()
{
    long long  A,B,T,gcd,lcm,n,C,D,i;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%lld %lld",&A,&B);
        C=A;
        D=B;
        while(B!=0)
        {

            T=A%B;
            A=B;
            B=T;
        }
        gcd=A;
        lcm=(C*D)/gcd;
        printf("%lld %lld\n",gcd,lcm);

    }
    return 0;

}

