#include<stdio.h>
int main()
{
    long long int i,j,k,l,a,b,c,d,e,f,n,sum,prime;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        f=0;
        scanf("%lld%lld",&a,&b);
        for(j=a; j<=b; j++)
        {
            k=2;
            while(k<j)
            {
                sum=j%k;
                if(sum==0)
                    break;
                else
                    k++;

            }
            if(sum!=0)
            {
                prime=j;
                d=0;
                while(prime>0)
                {
                    c=prime%10;
                    d=d+c;
                    prime=prime/10;
                }
                if(d==2)
                    f++;
                else
                {
                    l=2;
                    while(l<d)
                    {
                        e=d%l;
                        if(e==0)
                            break;
                        else
                            l++;
                    }
                    if(e!=0)
                        f++;
                }
            }
        }
        printf("%lld\n",f);
    }
    return 0;
}
