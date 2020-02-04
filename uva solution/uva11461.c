#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,a,b,sum,n;
    while(scanf("%d%d",&a,&b)!=EOF&&a>0&&b>0)
    {
        n=0;
        for(i=a; i<=b; i++)
        {
            sum=sqrt(i);
            if(sum*sum==i)
                n++;
        }
        printf("%d\n",n);
    }
    return 0;
}
