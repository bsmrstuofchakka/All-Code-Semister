#include<bits/stdc++.h>
using namespace std;

int mincost(bool visited[],int cost[],int V)
{
    int min=INT_MAX;
    int u;
    for(int i=0; i<V; i++)
    {
        if(visited[i]==false&&cost[i]<min)
        {
            min=cost[i];
            u=i;
        }
    }
    return u;
}
void kruskal(priority_queue<pair<int,int> >q[],bool visited[],int parent[],int cost[],int V)
{
    for(int i=0; i<V; i++)
    {
        int u=mincost(visited,cost,V);
        cout<<"Min Key: "<<u<<endl;
        visited[u]=true;

        pair<int,int>p;
        while(!q[i].empty())
        {
            p=q[u].top();
            q[u].pop();
            if(visited[p.first]==false&&cost[p.first]>p.second)
            {
                cost[p.first]=p.second;
                parent[p.first]=u;

                cout<<"Updated cost of: "<<p.first<<"is"<<cost[p.first]<<endl;

            }
        }

    }
}



int main()
{
    int V,E;
    cout<<"Enter the total number of Vertex: ";
    cin>>V;
    cout<<"Enter the total number of Edge: ";
    cin>>E;

    priority_queue<pair<int,int> >q[V];

    int u,v,w;
    for(int i=0; i<E; i++)
    {
        cout<<"Enter the value of u,v and weight: ";
        cin>>u>>v>>w;
        q[u].push(make_pair(v,w));
        q[v].push(make_pair(u,w));
    }

    for(int i=0; i<V; i++)
        cout<<endl;


    int parent[V],cost[V];
    bool visited[V];

    for(int i=0; i<V; i++)
    {
        parent[i]=-1;
        cost[i]=INT_MAX;
        visited[i]=false;

    }
    cost[0]=0;
    parent[0]=-1;

    kruskal(q,visited,parent,cost,V);

    for(int i=0; i<V; i++)
        cout<<i<<" "<<parent[i]<<endl;

    return 0;
}
