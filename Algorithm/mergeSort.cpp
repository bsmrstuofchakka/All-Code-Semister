#include<iostream>
using namespace std;


void merge(int arr[],int start,int mid,int end)
{
    int temp[end];
    int i=start,j=mid+1,k=start;

    while(i<=mid&&j<=end)
    {
        if(arr[i]<arr[j])
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        temp[k]=arr[i];
        i++;
        k++;

    }
    while(j<=end)
    {
        temp[k]=arr[j];
        j++;
        k++;
    }

    int l=start;
    while(l<=end)
    {
        arr[l]=temp[l];
        l++;
    }

}
void mergeSort(int arr[],int start,int end)
{

    if(start>=end)
        return;
    else
    {
        int mid=(start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);

    }
}


int main()
{

    int n;
    cout<<"Enter the elements number: ";
    cin>>n;

    cout<<"Enter the elements: ";
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];
    int start=0,end=n-1;
    mergeSort(arr,start,end);

    cout<<"Sorted elements: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
