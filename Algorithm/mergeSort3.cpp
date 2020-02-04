#include<iostream>
using namespace std;

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

int merge(int arr[],int start,int mid,int end)
{

}


int main()
{

    int n;
    cout<<"Enter the element numbers: ";
    cin>>n;
    int arr[n];

    int start=0;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
        cin<<arr[i]<<" ";

        mergeSort(arr,start,n);


    cout<<"After the sorted elements: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
