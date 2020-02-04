#include<stdio.h>
int main()
{
    long long  n,p;
    while(scanf("%lld",&n)!=EOF)
    {
        p=(n*n*(n+1)*(n+1))/4;
        printf("%lld\n",p);

    }
    return 0;
}
