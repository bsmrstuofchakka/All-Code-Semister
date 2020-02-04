#include<stdio.h>
int binary_search(int array[],int item);
int main()
{
    int item,array[10]= {10,20,30,40,50,60,70,80,90};
    printf("Enter the item:");
    scanf("%d",&item);
    binary_search(array,item);
}
int binary_search(int array[],int item)
{
    int beg=1,end=10,mid,k;
    mid=(beg+end)/2;
    while(beg<=end&&mid!=array[mid])
    {
        if(item<array[mid])
        {
            end=mid-1;
        }
        else if(item>array[mid])
        {
            beg=mid+1;
        }
        else
        {
            k=1;
            break;
        }
        mid=(beg+end)/2;
    }
    if(k==1)
    {
        printf("position:%d&&data:%d",mid+1,array[mid]);
    }
    else
    {
        printf("Not found item");
    }
    return 0;
}
