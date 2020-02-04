#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int arr[300001];
        for(int i=1; i<=n; i++)
            cin>>arr[i];

        int a=arr[n];
        int b=arr[1];
        int c,d;
        for(int i=1; i<n; i++)
        {
            if(a!=arr[i])
            {
                c=n-i;
                break;
            }

        }
        for(int i=n; i>1; i--)
        {
            if(b!=arr[i])
            {
                d=i-1;
                break;
            }

        }

        cout<<max(c,d)<<endl;

    }


    return 0;
}
