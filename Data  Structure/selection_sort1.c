#include<stdio.h>
int selection_sort(int n, int arr[]);
int main()
{

    int n,i;
    int arr[5]= {9,8,6,5,4};
    printf("\nINPUT ELEMENTS ARE: ");
    for(i=0; i<5; i++)
        printf("%d ",arr[i]);
    selection_sort(5,arr);
    printf("\nSORTING ELEMENTS: ");
    for(i=0; i<5; i++)
        printf("%d ",arr[i]);

    return 0;
}
int selection_sort(int n,int arr[])
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

