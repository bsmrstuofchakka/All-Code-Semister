#include<bits/stdc++.h>
using namespace std;

int bucketSort(int arr[],int n)
{
    int bucket_arr[10][10]= {0};


    for(int i=0; i<n; i++)
    {

        int bucket=arr[i]/10;
        int temp=arr[i];
        int j;

        for(j=0; bucket_arr[bucket][j]!=0; j++){}

        while(j>0&&temp<bucket_arr[bucket][j-1])
        {
            bucket_arr[bucket][j]=bucket_arr[bucket][j-1];
            j--;
        }
        bucket_arr[bucket][j]=temp;
    }
    int index=0;
    for(int i=0; i<11; i++)
    {
        for(int j=0; bucket_arr[i][j]!=0; j++)
        {
            arr[index]=bucket_arr[i][j];
            index++;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the elements number: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    bucketSort(arr,n);
    cout<<"Sorting the elements: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
