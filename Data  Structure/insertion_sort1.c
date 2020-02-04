#include<stdio.h>
int insertion_sort(int n, int arr[]);
int main()
{

    int n,i;
    int arr[5]= {9,8,6,5,4};
    printf("INPUT ELEMENTS ARE: ");
    for(i=0; i<5; i++)
        printf("%d ",arr[i]);
    insertion_sort(5,arr);
    printf("\nSORTING ELEMENTS: ");
    for(i=0; i<5; i++)
        printf("%d ",arr[i]);
    return 0;
}
int insertion_sort(int n,int arr[])
{
    int i,j,temp;
    for(i=1; i<n; i++)
    {
        j=i-1;
        temp=arr[i];
        while(j>=0)
        {
            if(temp<arr[j])
                arr[j+1]=arr[j];

            j--;
        }
        arr[j+1]=temp;
    }

}

