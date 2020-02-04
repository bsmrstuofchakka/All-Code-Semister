#include<stdio.h>
#include<math.h>
int main()
{

    long long int a,b,c,d,e,n,i,j,f,k,l,sum;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        sum=0,c=1;
        scanf("%lld%lld",&a,&b);
        f=a-1;
        k=1;
        while(k<=f)
        {
            c=c*10;
            k++;
        }
        l=1,d=1;
        while(l<=a)
        {
            d=d*10;
            l++;
        }
        d=d-1;

        for(j=c; j<=d; j++)
        {
            e=j%b;
            if(e==0)
                sum++;
        }
        printf("%lld %lld% lld\n",c,d,sum);


    }


    return 0;
}
