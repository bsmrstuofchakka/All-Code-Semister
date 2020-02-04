#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,k=1;
    while(cin>>n&&n!=0)
    {

        int arr[n];
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
                b++;
            else
                a++;

        }
        cout<<"Case "<<k<<": "<<a-b<<endl;
        k++;
    }

    return 0;
}
