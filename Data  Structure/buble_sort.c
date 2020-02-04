#include<stdio.h>
int buble_sorting_function(int n,int arr[]);
int main()
{
    int n,i,arr[1000];
    printf("enter the number: \n");
    scanf("%d",&n);
    printf("before the buble sort: \n");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    buble_sorting_function(n,arr);
    printf("after the buble sort: \n");
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}
int buble_sorting_function(int n,int arr[])
{
    int i,j,temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
