#include<stdio.h>
int main()
{
    int i,j,k,n,m,sum,temp;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&m);
        int arr[m];
        sum=0;
        for(j=0; j<m; j++)
            scanf("%d",&arr[j]);

        for(j=0; j<m-1; j++)
        {
            for(k=0; k<m-j-1; k++)
            {
                if(arr[k]>arr[k+1])
                {
                    temp=arr[k];
                    arr[k]=arr[k+1];
                    arr[k+1]=arr[k];
                    sum++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps\n",sum);
    }
    return 0;
}
