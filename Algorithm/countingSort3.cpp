#include<iostream>
using namespace std;
int countSort(int arr[],int n,int max);

int main()
{
    int n,arr[100],max=0;

    cout<<"Enter the elements number: ";
    cin>>n;

    cout<<"Enter the elements: ";


    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(max<arr[i])
            max=arr[i];

    }

    countSort(arr,n,max);

    return 0;
}
int countSort(int arr[],int n,int max)
{
    int count[10]= {0};

    for(int i=0; i<n; i++)
        count[arr[i]]=count[arr[i]]+1;
    int temp[100]= {0};


    for(int i=1; i<=max; i++)
        count[i]=count[i]+count[i-1];

    for(int i=n-1; i>=0; i--)
    {
        temp[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }



    for(int i=0; i<=max; i++)
    {

            cout<<temp[i]<<" ";
    }


}
