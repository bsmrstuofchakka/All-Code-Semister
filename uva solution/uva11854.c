#include<stdio.h>
int main()
{
    long long int a,b,c,sum;
    while(scanf("%lld%lld%lld",&a,&b,&c)!=EOF&&a>0&&b>0&&c>0)

    {

        if(c==sqrt(a*a+b*b))
            printf("right\n");
        else if(b==sqrt(a*a+c*c))
            printf("right\n");
        else if(a==sqrt(b*b+c*c))
            printf("right\n");
        else
            printf("wrong\n");
    }

    return 0;
}
