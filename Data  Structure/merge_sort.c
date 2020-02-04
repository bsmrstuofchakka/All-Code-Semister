#include<stdio.h>
void merge_sort(int n,int arr[])
{
    int i,j,max,index;

    }
}
void display_of_input(int n,int arr[])
{
    int i;
    printf("Enter the input elements: \n");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
}
void display_of_output(int n,int arr[])
{
    int i;
     printf("displaying the sorting element: \n");
    for(i=0;i<n;i++)
       printf("%d ",arr[i]);
}
int main()
{
    int i,n,arr[1000];
    printf("Enter the element number: \n");
    scanf("%d",&n);
    display_of_input(n,arr);
    merge_sort(n,arr);
    display_of_output(n,arr);
    return 0;
}

