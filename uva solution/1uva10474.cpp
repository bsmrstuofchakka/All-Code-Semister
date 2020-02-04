#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,q;
    int j=0;
    while(cin>>n>>q&&n>0&&q>0)
    {
        int p,m;
        ++j;
        vector <int >v;
        for(int l=0; l<n; l++)
        {
            cin>>p;
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        cout<<"CASE# "<<j<<":"<<endl;
        for(int k=0; k<q; k++)
        {
            cin>>m;
            bool count=false;
            for(int i=0; i<n; i++)
            {

                if(m==v[i])
                {
                    cout<<m<<" found at "<<i+1<<endl;
                    count=true;
                    break;
                }
            }
            if(count==false)
                cout<<m<<" not found"<<endl;
        }



    }

    return 0;
}
