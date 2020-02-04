#include<stdio.h>
int main()
{
    long long int n,a,b,c,sum,digit;
    while(scanf("%lld",&n)!=EOF&&n>0)
    {
        if(n<10)
            printf("%lld\n",n);
        else
        {
            while(n>9)
            {
                sum=0;
                b=n;
                while(b>0)
                {
                    a=b%10;
                    sum=sum+a;
                    b=b/10;
                }
                if(sum>9)
                    n=sum;
                else
                    break;
            }
            printf("%lld\n",sum);
        }
    }
    return 0;
}
