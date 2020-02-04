#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,i,j,cnt=1,p;
    int visited[10]= {0},min1,mincost=0,cost[10][10];
    cout<<"Enter the number of nodes:";
    cin>>n;
    cout<<"Enter the adjacency matrix "<<endl;
    for(i=1; i<=n; i++)
    {
        cout<<"Enter the node from "<<i<<" node to others node:";
        for(j=1; j<=n; j++)
        {
            cin>>cost[i][j];
            if(cost[i][j]==0)
            {
                cost[i][j]=999;
            }
        }
    }
    cout<<endl;
    cout<<"please enter the first node:";
    cin>>p;
    cout<<endl;
    visited[p]=1;
    while(cnt<n)
    {
        for(i=1,min1=99; i<=n; i++)

        {
            for(j=1; j<=n; j++)
            {
                if(cost[i][j]<min1)
                    if(visited[i]==1)
                    {
                        min1=cost[i][j];
                        a=i;
                        b=j;
                    }
            }
        }
        if(visited[a]==0 || visited[b]==0)
        {
            cout<<"Edge:"<<cnt++<<" from "<<a<<" to "<<b<<" node "<<"cost:"<<min1<<endl;
            mincost+=min1;
            visited[b]=1;
        }
        cost[a][b]=cost[b][a]=999;
    }
    cout<<endl;
    cout<<"Minimum cost="<<mincost;
}
