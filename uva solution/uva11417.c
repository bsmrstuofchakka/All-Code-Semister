#include<stdio.h>
int main()
{
    long long int n,i,j,gcd=0,a,b;
    while(scanf("%lld",&n)!=EOF)
    {
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                gcd=gcd+j;
            }
        }
         printf("%lld\n",gcd);


    }
    return 0;
}
