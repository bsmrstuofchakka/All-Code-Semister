#include<stdio.h>
int binary_search(int n, int arr[],int data);
int main()
{

    int n,i,data;
    int arr[5]= {4,5,8,9,12};
    printf("\nINPUT ELEMENTS ARE: ");
    for(i=0; i<5; i++)
        printf("%d ",arr[i]);
    printf("\nTHE SEARCHING DATA IS:  ");
    binary_search(5,arr,13);


    return 0;
}
int binary_search(int n,int arr[],int data)
{

    int start,end,mid;
    start=0;
    end=n-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==data)
        {
            break;
        }
        else if(arr[mid]>data)
            end=mid-1;
        else
            start=mid+1;
    }
    if(start>end)
        printf("FAILED");
    else
    printf("%d IS POSITION.",mid+1);




    }



