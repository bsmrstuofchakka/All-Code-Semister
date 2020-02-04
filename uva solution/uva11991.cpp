#include<bits/stdc++.h>
using namespace std;

int main()
{

    typedef pair <int, int>ipair;
    vector <ipair>edges;
    vector <ipair > ::iterator it;


    int n,m;
    while(cin>>n)
    {
        cin>>m;
        int r;
        for(int i=1; i<=n; i++)
        {
            cin>>r;
            edges.push_back({r,i});

        }

        int p,q;
        for(int k=0; k<m; k++)
        {
            cin>>p>>q;
            bool count=false;
            int i=0;
            for(it=edges.begin(); it!=edges.end(); it++)
            {

                if(it->first==q)
                {
                     ++i;
                    if(i==p)
                    {
                        cout<<it->second<<endl;
                        count=true;
                        break;
                    }
                }

            }
            if(count==false)
                cout<<count<<endl;



        }



    }


    return 0;
}
