#include<stdio.h>
int linear_search(int n, int arr[],int data);
int main()
{

    int n,i,data;
    int arr[5]= {9,8,6,5,4};
    printf("\nINPUT ELEMENTS ARE: ");
    for(i=0; i<5; i++)
        printf("%d ",arr[i]);
    linear_search(5,arr,4);
    printf("\nTHE SEARCHING DATA IS:  ");
    scanf("%d",&data);
    return 0;
}
int linear_search(int n,int arr[],int data)
{

    int i,count=0;


    for(i=0;i<=n;i++)
    {
        if(arr[i]==data)
        {
            count=1;
            break;
        }

    }
    if(count==1)
        printf("\nData`s position: %d",i+1);
    else
        printf("\nDATA`S NOT FOUND");

}


