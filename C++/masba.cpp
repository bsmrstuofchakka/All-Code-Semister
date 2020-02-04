#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=-1;
    cin>>n;
    int arr[10000];
    for(int i=1; i<=n; i++)
        cin>>arr[i];
    for(int i=n; i>1; i--)
        for(int j=n-1; j>0; j--)
            m=max(m,((min(arr[i],arr[j]))*(i-j)));
    cout<<m<<endl;
    return 0;
}
