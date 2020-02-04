#include<stdio.h>
int main()
{
    int i,e,f,c,n,b,d,sum;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d%d",&e,&f,&c);
        b=e+f;
        sum=0;
        while(b>=c)
        {
            d=b/c;
            sum=sum+d;
            b=d+(b%c);
        }
        printf("%d\n",sum);
    }
    return 0;
}
