#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {

        int arr[10000];

        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j++)
            {
                if(j>=i&&arr[i]==arr[j])
                    sum++;
            }
        }

        cout<<sum<<endl;



    }


    return 0;
}
