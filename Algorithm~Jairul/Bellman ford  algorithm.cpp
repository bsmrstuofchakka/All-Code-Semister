#include<bits/stdc++.h>
using namespace std;
#define infinity 999
void jairul(int n,int v,int cost[10][10],int dist[])
{
    int i,j,w,cnt=1;
    for(i=1; i<=n; i++)
    {
        if(i==v)
        {
            dist[i]=0;
        }
        else
        {
            dist[i]=cost[v][i];
        }
    }
    while(cnt<n)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if((dist[i]+cost[i][j]<=dist[j]))
                {
                    dist[j]=dist[i]+cost[i][j];
                }
            }
        }
        cnt++;
    }
}
int main()
{
    int n,v,i,j,cost[10][10],dist[10];
    cout<<"Enter the number of nodes:";
    cin>>n;
    cout<<"Enter the cost matrix:";
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin>>cost[i][j];
            if(cost[i][j]==0)
            {
                cost[i][j]=infinity;
            }
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
            cout<<"Source node "<<v<<"->"<<i<<",cost="<<dist[i]<<endl;
        }
    }
}
