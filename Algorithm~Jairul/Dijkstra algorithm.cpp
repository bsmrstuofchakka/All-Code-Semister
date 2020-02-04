#include<bits/stdc++.h>
using namespace std;
#define infinity 999
void jairul(int n,int v,int cost[10][10],int dist[])
{
    int i,u,count,w,flag[10]={0},min;
    for(i=1; i<=n; i++)
    {
        dist[i]=cost[v][i];
    }
    count=1;
    while(count<n)
    {
        min=99;
        for(w=1; w<=n; w++)
        {
            if(dist[w]<min && flag[w]==0)
            {
                min=dist[w];
                u=w;
            }
        }
        flag[u]=1;
        count++;
        for(w=1; w<=n; w++)
        {
            if((dist[u]+cost[u][w]<dist[w])&&flag[w]==0)
            {
                dist[w]=dist[u]+cost[u][w];
            }
        }
    }
}

int main()
{
    int n,v,i,j,cost[10][10],dist[10];
    cout<<"Enter the number of nodes:";
    cin>>n;
    cout<<"Enter the cost matrix:";
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            cin>>cost[i][j];
            if(cost[i][j]==0)
            {
                cost[i][j]=infinity;
            }
        }
    cout<<"Enter the source matrix:";
    cin>>v;
    jairul(n,v,cost,dist);
    cout<<"Shortest path:"<<endl;
    for(i=1; i<=n; i++)
    {
        if(i!=v)
        {
            cout<<"Source node:"<<v<<"->"<<i<<",cost="<<dist[i]<<endl;
        }
    }
}
