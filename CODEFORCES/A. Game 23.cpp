#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;

    while(cin>>n>>m)
    {
        int count=0;
        while(n<m)
        {
            if(m%(n*2)==0)
            {
                n=n*2;
                count++;
              //  cout<<count<<endl;
            }
            else if(m%(n*3)==0)
            {
                n=n*3;
                count++;
               // cout<<count<<endl;
            }
            else
            {
                break;
            }
        }
        if(n==m)
            cout<<count<<endl;
        else
            cout<<"-1"<<endl;

    }
    return 0;
}
