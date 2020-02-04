#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
bool visited[100];
void dfs(int s)
{
    stack<int>S;
    S.push(s);
    visited[s]=true;
    int count[100]= {0};
    while(!S.empty())
    {
        int u=S.top();
        S.pop();
        if(visited[u]==true&&count[u]==0)
        {
            cout<<u<<endl;
            count[u]=1;
        }
        for(int i=0; i<adj[u].size(); i++)
        {
            if(visited[adj[u][i]]==false)
            {
                int v=adj[u][i];
                visited[v]=true;
                S.push(u);
                S.push(v);
                break;
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
    int s;
    cout<<"Enter source node: ";
    cin>>s;
    dfs(s);
    return 0;
}
