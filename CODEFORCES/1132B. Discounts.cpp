#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,a,sum=0;
    cin>>n;
    long int arr[300001];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sort(arr+1,arr+1+n, greater<int>());
    cin>>m;

    for(int i=1; i<=m; i++)
    {
        cin>>a;
        cout<<sum-arr[a]<<endl;



    }





    return 0;
}
