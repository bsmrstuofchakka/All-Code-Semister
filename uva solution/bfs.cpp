#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
bool visited[100];
void dfs(int s)
{
    queue<int>Q;
    Q.push(s);
    visited[s]=true;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        cout<<u<<endl;
        for(int i=0; i<adj[u].size(); i++)
        {
            if(visited[adj[u][i]]==false)
            {
                int v=adj[u][i];
                visited[v]=true;
                Q.push(v);
            }
        }
    }
}
int main()
{
    int u,v,n,e;
    cout<<"Enter the number of node: ";
    cin>>n;
    cout<<"Enter the number of Edges: ";
    cin>>e;
    for(int i=1; i<=e; i++)
    {
        cout<<"u node connected to v: "<<endl;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<"Enter source node: ";
    int s;
    cin>>s;
    dfs(s);
    return 0;
}
