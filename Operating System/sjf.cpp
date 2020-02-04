#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;


    cin>>n;
    int arr[100],arr2[100];
    for(int i=1; i<=n; i++)
        cin>>arr[i];




    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);


            }
        }

    }
    int arr1[100];
    arr1[0]=0;
    for(int i=1; i<=n; i++)
    {
        arr1[i]=arr1[i-1]+arr[i];

    }
    int sum=0;
    cout<<"Waiting Time sequence: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr1[i]<<" ";
        sum=sum+arr1[i];

    }
    cout<<endl<<"Average Waiting Time :";
    cout<<endl<<(sum/n);
    cout<<endl<<endl;

    for(int i=2; i<=n; i++)
    {
        arr[i]=arr[i]+arr[i-1];

    }

    int add=0;
    cout<<"Turn Around Time sequence: ";

    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
        add=add+arr[i];

    }
    cout<<endl<<"Average Turn Around Time :";
    cout<<endl<<(add/n);
    cout<<endl<<endl;



    return 0;
}
