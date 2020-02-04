#include<stdio.h>
int main()
{
    int i,j,n,t,low,high,arr[1000];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d\n",&n);
        low=0,high=0;
        for(j=1;j<=n;j++)
            scanf("%d",&arr[j]);
        for(j=1;j<=n-1;j++)
        {
            if(arr[j]<arr[j+1])
                high++;
            else if(arr[j]>arr[j+1])
                low++;
        }
        printf("Case %d: %d %d\n",i,high,low);
    }
    return 0;
}
