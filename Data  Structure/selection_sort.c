#include<stdio.h>
void selection_sort(int n,int arr[])
{
    int i,j,max,index;
    for(i=n-1; i>=1; i--)
    {
        max=arr[0];
        index=0;
        for(j=1; j<=i; j++)
        {
            if(arr[j]>max)
            {
                max=arr[j];
                index=j;
            }
        }
        arr[index]=arr[i];
        arr[i]=max;
    }
}
void display_of_output(int n,int arr[])
{
    int i;
     printf("\ndisplaying the sorting elements: ");
    for(i=0;i<n;i++)
       printf("%d ",arr[i]);
}
int main()
{
    int i,n=5;
    int arr[5]={67,78,5,1,7};
    printf("The element number is:%d\n",n);
    printf("The input elements are: ");
    for(i=0;i<n;i++)
       printf("%d ",arr[i]);
    selection_sort(n,arr);
    display_of_output(n,arr);
    return 0;
}
