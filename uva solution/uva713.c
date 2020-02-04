#include<stdio.h>
int main()
{
    long long int i,a,b,n,rev,rem,add,sum;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld%lld",&a,&b);
        sum=0,rev=0;
        while(a>0)
        {
            rem=a%10;
            rev=rev*10+rem;
            a=a/10;
            if(a==0)
            {
                a=b;
               sum= sum+rev;
                rev=0;
                b=0;
            }
        }
        while(sum>0)
        {
            rem=sum%10;
            rev=rev*10+rem;
            sum=sum/10;
        }
        printf("%lld\n",rev);
    }
    return 0;
}
