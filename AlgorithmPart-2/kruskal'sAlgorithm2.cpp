#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
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
    cout<<"Enter the total number of Vertex: ";
    cin>>V;
    cout<<"Enter the total number of Edge: ";
    cin>>E;

    typedef pair<int, int>ipair;
    vector <pair<int, ipair> >edges;


    int a,b,w;
    for(int i=0; i<E; i++)
    {
        cout<<"Enter the value of a,b and weight: ";
        cin>>a>>b>>w;
        edges.push_back({w, {a, b}});
    }
    sort(edges.begin(),edges.end());

    for(int i=1; i<=V; i++)
    {
        parent[i]=i;
        rankParent[i]=0;

    }
    vector <pair<int,ipair>  >::iterator it;
    int mst_wgt=0;
    cout<<"The Edges are: "<<endl;
    for(it=edges.begin(); it!=edges.end(); it++)
    {
        int u=it->second.first;
        int v=it->second.second;
        int px=findParent(u);
        int py=findParent(v);

        if(px!=py)
        {

            cout<<u<<"---"<<v<<endl;
            if(rankParent[px]>rankParent[py])
                parent[py]=px;
            else if(rankParent[px]<rankParent[py])
                parent[px]=py;
            else
            {
                parent[py]=px;
                rankParent[px]++;
            }
            mst_wgt=mst_wgt+it->first;
        }

    }
    cout<<mst_wgt<<endl;
    for(int i=1;i<=V;i++)
       cout<<parent[i]<<" ";
    cout<<endl;



    return 0;
}
