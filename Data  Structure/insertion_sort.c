#include<stdio.h>
int insertion_sort(int arr[],int n);
int main()
{
    int i,n,arr[1000];
    printf("ENTER THE ELEMENT NUMBER: \n");
    scanf("%d",&n);
    printf("BEFORE THE SORTING ELEMENT: \n");
    for(i=1; i<=n; i++)
        scanf("%d",&arr[i]);
    insorting_function(arr,n);
    printf("AFTER THE SORTING ELEMENT: \n");
    for(i=1; i<=n; i++)
        printf("%d ",arr[i]);
    return 0;
}
int insorting_function(int arr[],int n)
{
    int i,j,a;
    for(i=1; i<=n; i++)
    {
        j=i;
        while(j>0)
        {
            if(arr[j]>arr[j+1])
            {
                a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
            }
            else
                break;
            j--;
        }
    }
}
