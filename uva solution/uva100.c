#include<stdio.h>
int main()
{
    int i,j,k,n,m,max,sum;
    while(scanf("%d%d",&n,&m)==2&&m>0&&n>0)
    {
        printf("%d %d ",n,m);
        max=0;
        if(n>m)
        {
            k=n;
            n=m;
            m=k;
        }
        for(i=n;i<=m;i++)
        {
            sum=1;
            j=i;
            while(1)
            {
                if(j==1)
                    break;
                else if(j&1==1)
                    j=3*j+1;
                else
                    j=j/2;

                sum++;
            }
            if(sum>=max)
                max=sum;
        }
        printf("%d\n",max);
    }
    return 0;


}
