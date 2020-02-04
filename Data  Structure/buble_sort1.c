#include<stdio.h>
int buble_sort(int n, int arr[]);
int main()
{

    int n,i;
    int arr[5]={9,8,6,5,4};
    printf("INPUT ELEMENTS ARE: ");
    for(i=0;i<5;i++)
        printf("%d ",arr[i]);
    buble_sort(5,arr);
    printf("\nSORTING ELEMENTS: ");
    for(i=0;i<5;i++)
        printf("%d ",arr[i]);

    return 0;
}
int buble_sort(int n,int arr[])
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
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
