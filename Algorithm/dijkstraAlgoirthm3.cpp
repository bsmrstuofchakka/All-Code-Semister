#include<bits/stdc++.h>
using namespace std;

int dijkstra(int v,int m);

int weight[20][20]= {0};

int main()
{
    int v,e;

    cout<<"Enter the number of vertex: ";
    cin>>v;

    cout<<"Enter the number of edges: ";
    cin>>e;

    int a,b,w;

    for(int i=1; i<=e; i++)
    {
        cout<<"Enter the value of a,b and weight: ";
        cin>>a>>b>>w;
        weight[a][b]=w;
    }
    int m;
    cout<<"Enter source vertex: ";
    cin>>m;

    dijkstra(v,m);


    return 0;
}

int dijkstra(int v,int m)
{
    int visited[20]= {0},p[20]= {0},d[20];

    for(int i=0; i<20; i++)
        d[i]=9999;


    int current=1,totalvisited=1;
    visited[1]=1;
    d[1]=0;

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
                if(mincost>d[i])
                {
                    mincost=d[i];
                    current=i;
                }
            }
        }

        visited[current]=1;
        totalvisited++;
    }




    int mincost=0;
    for(int i=1; i<=v; i++)
        mincost=mincost+d[i];

    cout<<mincost<<endl;

    cout<<m;
    int i=1;
    while(i<=v)
    {
        for(int j=1; j<=v; j++)
        {
            if(m==p[j])
            {
                cout<<"----->"<<j;
                m=j;
                break;

            }
        }
        i++;
    }

}
