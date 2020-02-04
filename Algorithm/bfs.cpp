#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>adj[100];

    int visited[100]= {0};
    int v,e,node1,node2;
    cin>>v>>e;
    for(int i=0; i<e; i++)
    {
        cin>>node1>>node2;
        adj[node1][node2]=adj[node2][node1]=1;
    }

    for(int i=0;i<v;i++)
    {
        queue<int>Q;
        Q.push(i);
        visited[i]=1;

        while(!Q.empty())
        {
            int u=Q.front();
            Q.pop();

            for(int i=1;i<=adj[u].size();i++)
            {
                if(visited[adj[u][i]]==0)
                {
                    int v=adj[u][i];
                    visited[v]=1;
                    Q.push(v);
                }
            }


        }

    }


    for(int i=0;i<)

    return 0;
}
