#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=0;
    cin>>n;
    int arr[1010];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int s,r=1;
    s=arr[0];
    for(int i=1;i<=n;i++)
    {
        if(s==arr[i])
            ++r;
        else
        {
            cout<<r<<" "<<arr[i-1]<<" ";
            r=1;
            s=arr[i];
        }
    }
    cout<<endl;
    return 0;
}
