#include<stdio.h>
int main()
{
    long long int n,p;
    while(scanf("%lld",&n)!=EOF&&n>=0)
    {
        p=(n*(n+1))/2+1;
        printf("%lld\n",p);

    }

    return 0;
}
