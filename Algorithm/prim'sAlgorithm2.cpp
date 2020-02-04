#include<bits/stdc++.h>
using namespace std;

int weight[20][20]= {0};

int createGrap(int e)
{
    int a,b,w;

    for(int i=0; i<e; i++)
    {
        cout<<"Enter the a,b and w: ";
        cin>>a>>b>>w;
        weight[a][b]=weight[b][a]=w;
    }

}

int prim(int v,int p[],int d[])
{
    int visited[20]= {0};

    int totalVisited=1,current=1;
    d[current]=0;
    visited[1]=1;

    while(totalVisited!=v)
    {

        for(int i=1; i<=v; i++)
        {
            if(weight[current][i]!=0)
            {
                if(visited[i]==0)
                {
                    if(d[i]>weight[current][i])
                    {
                        d[i]=weight[current][i];
                        p[i]=current;
                    }
                }
            }
        }

        int mincost=32767;
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
        totalVisited++;

    }


}



int main()
{
    int v,e,p[20]= {0},d[20];
    for(int i=0; i<20; i++)
        d[i]=32767;

    cout<<"Enter the number of Vertex: ";
    cin>>v;

    cout<<"Enter the number of Edges: ";
    cin>>e;



    createGrap(e);
    prim(v,p,d);

    cout<<"Minimam Weight: ";
    int mincost=0;
    for(int i=1; i<=v; i++)
        mincost=mincost+d[i];
    cout<<mincost<<endl;
    cout<<"Minimam spaning tree: "<<endl;

    for(int i=1; i<=v; i++)
        cout<<"Vertex"<<i<<"is connected to "<<p[i]<<endl;



    return 0;
}
