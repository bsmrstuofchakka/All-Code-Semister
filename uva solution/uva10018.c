#include<stdio.h>
int reverse(long long p,long long rev,long long a)
{
    while(p<0)
    {
        a=p%10;
        rev=rev*10+a;
        p=p/10;
    }
    p=rev+p;
    return p;
}

int main()
{
    long long int i,j,n,p,a,rev,sum;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        rev=0;
        scanf("%lld",&p);
        reverse(p,rev,a);
        while(1)
        {
            if(rev==p)
                printf("%lld",sum);
            else
                reverse(p,rev,a);
        }
    }

    return 0;
}

