#include<iostream>
using namespace std;

void mergeSort(int arr[],int p,int r)
{
    int p=0,r=n-1;

    if(p<r)
    {
        int q=(p+r)/2;
        merseSort(arr,q);
        merseSort(arr,)
    }
}


int main()
{
    int n;
    cout<<"Enter the elements number: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];

        int p,r=n-1;


    mergeSort(arr,p,r);


    return 0;
}
