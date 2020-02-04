#include<iostream>
using namespace std;
int bucketSort(int arr[],int n,int max);

int main()
{

    int n,max=0;
    cout<<"Enter the total elements number: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(max<arr[i])
            max=arr[i];
    }
    bucketSort(arr,n,max);


    return 0;
}

int bucketSort(int arr[],int n,int max)
{
    int count[100]={0};
    for(int i=0;i<n;i++)
        count[arr[i]]=count[arr[i]]+1;

    for(int i=0;i<=max;i++)
    {
        for(int j=0;j<count[i];j++)
            cout<<i<<" ";
    }


}
