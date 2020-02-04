#include<bits/stdc++.h>
using namespace std;
#define MAX 200001
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
    int V,E;
    while(cin>>V>>E&&V!=0&&E!=0)
    {
        int a,b,w;
        typedef pair<int, int>ipair;
        vector <pair <long long, ipair> >edges;
        vector <pair <long long, ipair> >::iterator it;

        for(int i=0; i<E; i++)
        {
            cin>>a>>b>>w;
            edges.push_back({w,{a,b}});
        }
        sort(edges.begin(),edges.end());

        for(int i=1; i<=V; i++)
        {
            parent[i]=i;
            rankParent[i]=0;
        }
        int max_amount=0;
        for(it=edges.begin(); it!=edges.end(); it++)
        {
            int u=it->second.first;
            int v=it->second.second;
            int px=findParent(u);
            int py=findParent(v);

            if(px!=py)
            {
                if(rankParent[px]>rankParent[py])
                    parent[py]=px;
                else if(rankParent[px]<rankParent[py])
                    parent[px]=py;
                else
                {
                    parent[py]=px;
                    rankParent[px]++;
                }
            }
            else
                max_amount=max_amount+it->first;
        }
        cout<<max_amount<<endl;



    }




    return 0;
}
