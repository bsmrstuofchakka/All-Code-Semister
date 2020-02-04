#include<bits/stdc++.h>
using namespace std;
int i,j,k,a,b,u,v,n,p,cnt=1;
int min1,mincost=0,cost[9][9],parent[9];
int find(int);
int uni(int,int);
int main()
{
    cout<<"Implementation of Kruskal algorithm"<<endl;
    cout<<"Enter the number of node:";
    cin>>n;
    cout<<"Enter the cost adjacency matrix:"<<endl;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin>>cost[i][j];
            if(cost[i][j]==0)
            {
                cost[i][j]=999;
            }
        }
    }
    cout<<"The edges of Minimum Cost Spanning Tree are"<<endl;
    while(cnt<n)
    {
        for(i=1,min1=99; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(cost[i][j]<min1)
                {
                    min1=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        u=find(u);
        v=find(v);
        p=uni(u,v);
        if(p==1)
        {
            cout<<"Edge:"<<cnt++<<" from "<<a<<" to "<<b<<" node "<<"cost:"<<min1<<endl;
            mincost +=min1;
        }
        cost[a][b]=cost[b][a]=999;
    }
    cout<<"Total cost:"<<mincost;
}
int find(int i)
{
    while(parent[i]!=0)
    {
         //cout<<parent[i]<<" "<<i<<endl;
        i=parent[i];
    }
    return i;
}
int uni(int i,int j)
{
    if(i!=j)
    {
        parent[j]=i;
        return 1;
    }
    return 0;
}
