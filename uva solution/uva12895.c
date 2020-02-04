#include<stdio.h>
int main()
{
    long long i,j,t,n,m,o,sum;
    double mur,u;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        m=n;
        u=0;
        while(n!=0)
        {
            n=n/10;
            u++;

        }
        sum=0;
        o=m;
        while(m!=0)
        {

            mur=m%10;
            m=m/10;
            sum=sum+(double) pow((double) mur,(double) u);
        }
        if(sum==o)
            printf("Armstrong\n");
        else
            printf("Not Armstrong\n");



    }
    return 0;

}
