#include<iostream>
using namespace std;

void mergeSort(int arr[],int start,int end)
{
    int mid;
    if(start>=end)
        return;
    else
    {
        mid=(start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}
void merge(int arr,int start,int mid+1,int end)
{

}



int main()
{

    return 0;
}
