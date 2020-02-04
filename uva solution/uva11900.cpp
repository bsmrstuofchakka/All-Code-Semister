#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    for(int l=1;l<=t;l++)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int arr[50];
        for(int k=1;k<=n;k++)
        {
            cin>>arr[k];
        }
        int j=0,sum=0;
        for(int i=1;i<=n;i++)
        {
            if(j<=a&&sum<=b)
            {
                sum=sum+arr[i];
                ++j;
            }
            else
                break;
        }
        cout<<"Case "<<l<<": "<<j-1<<endl;


    }


    return 0;
}
