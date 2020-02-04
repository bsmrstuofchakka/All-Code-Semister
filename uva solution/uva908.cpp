#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001
int parent[MAX];
int rankParent[MAX];
typedef pair<int, int>ipair;
vector <pair <long long, ipair> >edges;
vector <pair <long long, ipair> >::iterator it;

int findParent(int x)
{
    if(x!=parent[x])
        return parent[x]=findParent(parent[x]);
    else
        return x;
}

void input(int E)
{
    int a,b,w;
    for(int i=0; i<E; i++)
    {
        cin>>a>>b>>w;
        edges.push_back({w,{a,b}});
    }
}

int determine_min_cost(int V)
{
    sort(edges.begin(),edges.end());
    for(int i=1; i<=V; i++)
    {
        parent[i]=i;
        rankParent[i]=0;
    }
    int min_cost=0;
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
            min_cost=min_cost+it->first;
        }
    }
    return min_cost;
}

int main()
{
    int V,E;
    bool single=false;
    while(cin>>V)
    {
        if(single)
              cout<<endl;
        single=true;

        E=V-1;
        input(E);
        int min_cost1=determine_min_cost(V);
        int K;
        cin>>K;
        input(K);
        int min_cost2=determine_min_cost(V);
        edges.clear();
        int M;
        cin>>M;
        input(M);
        edges.clear();
        cout<<min_cost1<<endl;
        cout<<min_cost2<<endl;

    }
    return 0;
}
