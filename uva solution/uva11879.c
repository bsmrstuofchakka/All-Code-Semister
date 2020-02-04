#include<stdio.h>
int main()
{
    long long int n,sum;
    while(scanf("%lld",&n)!=EOF&&n!=0)
    {
        sum=n%17;
        if(sum==0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
