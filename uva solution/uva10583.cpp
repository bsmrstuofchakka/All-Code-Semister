#include<bits/stdc++.h>
using namespace std;
#define MAX 50001
int parent[MAX];
int rankParent[MAX];


int findParent(int x)
{
    if(x!=parent[x])
        return findParent(parent[x]);
    else
        return x;
}

int main()
{
    int V,E;
    int j=0;
    while(cin>>V>>E&&V>0&&E>0)
    {
        ++j;
        typedef pair<int, int>ipair;
        vector<ipair>edges;

        int a,b;
        for(int i=0; i<E; i++)
        {
            cin>>a>>b;
            edges.push_back({a,b});
        }
        int count[50001];
        for(int i=1; i<=V; i++)
        {
            parent[i]=i;
            rankParent[i]=0;
            count[i]=1;

        }
        vector <ipair>::iterator it;
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
                    count[py]=0;
                }
                else if(rankParent[px]<rankParent[py])
                {
                    parent[px]=py;
                    count[px]=0;
                }
                else
                {
                    parent[py]=px;
                    count[py]=0;
                    rankParent[px]++;
                }
            }
        }
        int sum=0;
        for(int i=1; i<=V; i++)
            sum=sum+count[i];
        cout<<"Case "<<j<<": "<<sum<<endl;

    }


    return 0;
}
