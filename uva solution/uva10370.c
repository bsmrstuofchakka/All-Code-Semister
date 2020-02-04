#include<stdio.h>
int main()
{
    int t,n,i,j,sum,add,arr[1000];
    double av,av_av;
    char c='%';
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++)
            scanf("%d",&arr[j]);
        sum=0;
        for(j=1;j<=n;j++)
            sum=sum+arr[j];
        av=(double)sum/n;
        add=0;
        for(j=1;j<=n;j++)
        {
            if(av<arr[j])
                add++;
        }
        av_av=((double)add/n)*100;
        printf("%.3f%c\n",av_av,c);
    }
    return 0;
}
