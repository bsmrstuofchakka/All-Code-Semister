#include<bits/stdc++.h>
#include<iostream>
using namespace std;
long int weight[1001][1001]= {0};

void dijkstra(int v,int s)
{
    int visited[1001]= {0},p[1001],d[1000];
    for(int i=1; i<=1001; i++)
        d[i]=9999;

    int current,totalvisited=1;
    current=s;
    visited[s]=1;
    d[s]=0;


    while(totalvisited!=v)
    {
        for(int i=1; i<=v; i++)
        {
            if(weight[current][i]!=0)
            {
                if(visited[i]==0)
                {
                    if(d[current]+weight[current][i]<d[i])
                    {
                        d[i]=d[current]+weight[current][i];
                        p[i]=current;
                    }
                }
            }
        }

        int mincost=9999;
        for(int i=1; i<=v; i++)
        {
            if(visited[i]==0)
            {
                if(d[i]<mincost)
                {
                    mincost=d[i];
                    current=i;
                }
            }
        }
        visited[current]=1;
        totalvisited++;

    }

    for(int i=1; i<=v; i++)
    {
        if(visited[i]==1)
        {
            if(i!=s)
            {
                cout<<d[i]<<" ";
            }
        }
    }
    cout<<endl;


}


int main()
{
    int t;
    cin>>t;
    for(int o=1; o<=t; o++)
    {

        int e,v;
        cin>>v>>e;
        for(int i=1; i<=e; i++)
        {
            int a,b,w;
            cin>>a>>b>>w;
            weight[a][b]=weight[b][a]=w;
        }
        int s;
        cin>>s;


        dijkstra(v,s);




    }

    return 0;
}
