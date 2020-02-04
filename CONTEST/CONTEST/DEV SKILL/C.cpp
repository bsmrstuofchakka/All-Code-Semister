#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {

        int n,min=999999;
        cin>>n;
        int arr[100000];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(min>arr[i])
                min=arr[i];
        }
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+(arr[i]-min);
        }
        cout<<sum<<endl;


    }


    return 0;
}


