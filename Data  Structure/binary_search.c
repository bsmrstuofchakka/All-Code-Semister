#include<stdio.h>
int bisearch_function(int n,int arr[],int a);
int main()
{
    int i,a,n,arr[1000];
    printf("ENTER THE ELEMENT NUMBER: \n");
    scanf("%d",&n);
    printf("ENTER THE ELEMENT: \n");
    for(i=1; i<=n; i++)
        scanf("%d",&arr[i]);
    printf("ENTER THE SEARCHING ELEMENT: \n");
    scanf("%d",&a);
    bisearch_function(n,arr,a);
    return 0;
}
int bisearch_function(int n,int arr[],int a)
{
    int j,temp,mid;
    mid=n/2;
    if(arr[mid]==a)
        printf("%d\n",mid);
    else if(a<arr[mid])
    {
        while(mid>0)
        {
            if(arr[mid]==a)
                break;
            mid--;
        }
        printf("%d\n",mid);
    }
    else
    {
        while(mid<n)
        {
            if(arr[mid]==a)
                break;
            mid++;
        }
        printf("%d\n",mid);
    }
}
