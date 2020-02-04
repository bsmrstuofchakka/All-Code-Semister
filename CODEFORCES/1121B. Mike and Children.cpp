#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    while(cin>>n)
    {
        int arr[2001];
        for(int i=1; i<=n; i++)
            cin>>arr[i];

        map<int ,int>mp;
        int ans=0;
        for(int i=1; i<n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                mp[arr[i]+arr[j]]++;
                ans=max(ans,mp[arr[i]+arr[j]]);
            }
        }
        cout<<ans<<endl;



    }



    return 0;
}
