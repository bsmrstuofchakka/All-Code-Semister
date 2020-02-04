#include<stdio.h>
int main()
{
    long int i,t,a,b,c,sum;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld%ld%ld",&a,&b,&c);
        if(a<b&&b<c)
            sum=b;
        else if(a<c&&c<b)
            sum=c;
        else if(b<a&&a<c)
        sum=a;
        else if(b<c&&c<a)
            sum=c;
        else if(c<b&&b<a)
            sum=b;
        else if(c<a&&a<b)
            sum=a;


        printf("Case %ld: %ld\n",i,sum);
    }
    return 0;
}
