#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    long long int n;

    while(cin>>s>>n)
    {

        int j=0;
        long long int m=n;
        for(int i=s; i<=n; i++)
        {
            n=n-i;
            j=i;


        }
        if(s>m)
            cout<<s<<endl;
        else if(n==0)
            cout<<j<<endl;
        else
            cout<<j+1<<endl;
    }




    return 0;
}
