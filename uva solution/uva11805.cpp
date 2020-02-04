#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    int n,k,p;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>k>>p;

        if((k+p)%n==0)
            cout<<"Case "<<i<<": "<<n<<endl;
        else
            cout<<"Case "<<i<<": "<<((k+p)%n)<<endl;
    }


    return 0;
}
