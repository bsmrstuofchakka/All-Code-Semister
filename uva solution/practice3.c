#include<stdio.h>
int main()
{
    long long int i,j,a,b,n,rev;
    double sum;
    while(scanf("%lld%lld",&a,&b)!=EOF&&0<a&&a<=b)
    {
        n=0;
        for(i=a; i<=b; i++)
        {
            sum=sqrt(i);
            for(j=1; j<=sum; j++)
            {
                if(sum==j)
                    n++;

            }

        }
        printf("%lld\n",n);
    }
    return 0;
}

