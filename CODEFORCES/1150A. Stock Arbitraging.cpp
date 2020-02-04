#include<bits/stdc++.h>
using namespace std;

int main()
{
       long long n,m,r,a,b;
       while(cin>>n)
       {
            cin>>m>>r;
            long long bi=99999;
            for(int i=0;i<n;i++)
            {
                   cin>>a;
                   bi=min(bi,a);
            }
            long long se=-1;
            for(int i=0;i<m;i++)
            {
                   cin>>b;
                   se=max(se,b);
            }
            long long mn=(r%bi)+((r/bi)*se);
            mn=max(mn,r);
            cout<<mn<<endl;
       }


       return 0;
}
