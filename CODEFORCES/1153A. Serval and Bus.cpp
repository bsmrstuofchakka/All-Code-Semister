#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,t;
    while(cin>>n>>t)
    {
        int a,b,count,p,min=999999;
        for(int i=1; i<=n; i++)
        {
            cin>>a>>b;

            while(a<t)
                a=a+b;

            p=a-t;
            if(min>p)
            {
                min=p;
                count=i;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
