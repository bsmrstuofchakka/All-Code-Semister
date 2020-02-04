#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,t;
    cin>>t;
    int arr[101];

    int j=0,sum=0;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        if(n!=0)
        {
            arr[j]=n;
            j++;
            arr1[n]=1;

        }

    }
    sort(arr,arr+j);
    int arr1[1001]={0};

    int a=arr[j-1];

    for(int i=j-2; i>=0; i--)
    {
        if(arr[i]==a&&arr1[i]==1)
            sum++;
        else if(arr1[i]!=1)
        {
            sum++;
            arr1[]
        }
    }
    cout<<sum<<endl;



    return 0;
}
