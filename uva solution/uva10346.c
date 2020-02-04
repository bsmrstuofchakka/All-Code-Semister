#include<stdio.h>
int main()
{
    int a,b,n,k,sum;
    while(scanf("%d%d",&n,&k)!=EOF&&k>1)
    {
        sum=n;
        while(n>=k)
        {
            b=n%k;
            n=n/k;
            sum=sum+n;
            a=n+b;
            n=a;
        }
        printf("%d\n",sum);
    }
    return 0;
}
