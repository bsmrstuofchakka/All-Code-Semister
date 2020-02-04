#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int arr[10001];

        for(int i=1; i<=n; i++)
            cin>>arr[i];

        sort(arr+1,arr+n+1);



        int sum=0;
        for(int i=1; i<=n; i++)
            if(arr[i]==i)
                sum++;
        cout<<sum<<endl;
    }



    return 0;
}
