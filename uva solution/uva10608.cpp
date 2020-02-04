#include<bits/stdc++.h>
using namespace std;
#define MAX 30000
int parent[MAX];
int rankParent[MAX];

int findParent(int x)
{
    if(x!=parent[x])
        return parent[x]=findParent(parent[x]);
    else
        return x;
}

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int V,E;
        cin>>V>>E;

        typedef pair<int,int>ipair;
        vector <ipair> edges;
        int a,b;
        for(int i=1; i<=E; i++)
        {
            cin>>a>>b;
            edges.push_back({a,b});
        }
        int count[30000];
        for(int i=1; i<=V; i++)
        {
            parent[i]=i;
            rankParent[i]=0;
            count[i]=1;
        }
        vector <ipair> ::iterator it;
        int ans=1;

        for(it=edges.begin(); it!=edges.end(); it++)
        {
            int u=it->first;
            int v=it->second;

            int px=findParent(u);
            int py=findParent(v);

            if(px!=py)
            {
                if(rankParent[px]>rankParent[py])
                {
                    parent[py]=px;
                    count[px]=count[px]+count[py];
                    if(count[px]>ans)
                        ans=count[px];

                }
                else if(rankParent[px]<rankParent[py])
                {
                    parent[px]=py;
                    count[py]=count[py]+count[px];
                    if(count[py]>ans)
                        ans=count[py];
                }
                else
                {
                    parent[py]=px;
                    count[px]=count[px]+count[py];
                    rankParent[px]++;
                    if(count[px]>ans)
                        ans=count[px];
                }
            }
        }
            cout<<ans<<endl;


        t--;
    }
    return 0;
}
