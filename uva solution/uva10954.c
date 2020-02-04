#include<stdio.h>
int main()
{
    long long int i,j,n,sum,add,temp,arr[100000];
    while(scanf("%lld",&n)!=EOF&&n>0)
    {
        sum=0,add=0;
        for(i=1; i<=n; i++)
            scanf("%lld",&arr[i]);
        for(i=1;i<n;i++)
        {
            for(j=1; j<=n-i; j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        for(i=1; i<=n; i++)
        {
            sum=sum+arr[i];
            if(i>1)
                add=add+sum;
        }
        printf("%lld\n",add);
    }
    return 0;
}
