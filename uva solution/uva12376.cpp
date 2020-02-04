#include<bits/stdc++.h>
using namespace std;

vector<int>adj[150];
bool visited[150];
int value[150];
int sum,node;

void dfs(int u)
{
    visited[u]=true;
    int a=0,vv,max=0;;

    for(int i=0; i<adj[u].size(); i++)
    {

        int v=adj[u][i];
        if(!visited[v])
        {
            if(value[v]>max)
            {
                max=value[v];
                vv=v;
                a=1;

            }
        }
    }
    if(a==1)
    {
        sum=sum+max;
        node=vv;
        dfs(vv);
    }
    return;

}

int main()
{
    int t;
    cin>>t;
    for(int o=1; o<=t; o++)
    {
        int n,m;
        cin>>n>>m;




        for(int i=0; i<n; i++)
        {
            cin>>value[i];
        }
        int a,b;
        for(int i=0; i<m; i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);

        }


        sum=0;
        memset(visited,false,sizeof(visited));
        dfs(0);

        cout<<"Case "<<o<<": "<<sum<<" "<<node<<endl;
        for(int i=0; i<n; i++)
            adj[i].clear();


    }

    return 0;
}
