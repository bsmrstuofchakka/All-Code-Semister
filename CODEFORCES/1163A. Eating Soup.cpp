#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int a=n/2,p;
        if(a>=m)
        {
            if(m==0)
                p=1;
            else
                p=m;
        }
        else
            p=n-m;
        cout<<p<<endl;
    }


    return 0;
}
