#include<iostream>
using namespace std;
int countSort(int arr[],int n,int mul);
int redixSort(int arr[],int n,int max);

int n,arr[100];

int main()
{
    int max=0;

    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(max<arr[i])
            max=arr[i];

    }
    redixSort(arr,n,max);

    cout<<"Sorting elements are: ";

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";


    return 0;
}

int redixSort(int arr[],int n,int max)
{
    int mul=1;
    while(max>0)
    {
        countSort(arr,n,mul);
        mul=mul*10;
        max=max/10;
    }

}

int countSort(int arr[],int n,int place)
{
    int count[10]= {0};
    int temp[100],range=10;

    for(int i=0; i<n; i++)
        count[(arr[i]/place)%range]=count[(arr[i]/place)%range]+1;

    for(int i=1; i<=range; i++)
        count[i]=count[i]+count[i-1];

    for(int i=n-1; i>=0; i--)
    {
        temp[count[(arr[i]/place)%range]-1]=arr[i];
        count[(arr[i]/place)%range]--;
    }

    for(int i=0; i<n; i++)
        arr[i]=temp[i];

}
