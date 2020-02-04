#include<bits/stdc++.h>
using namespace std;

int weight[20][20]= {0};

void mist(int v)
{
    int t=1,c=1,d[100];
    int V[100]= {0};
    int p[100]= {0};

    for(int i=0; i<=200; i++)
        d[i]=9999;


    while(t!=v)
    {
        for(int i=1; i<=v; i++)
        {
            if(weight[c][i]!=0)
            {
                if(V[i]==0)
                {
                    if(d[i]>weight[c][i])
                    {
                        d[i]=weight[c][i];
                        p[i]=c;

                    }


                }
            }
        }

        int mincost=9999;
        for(int i=1; i<=v; i++)
        {
            if(V[i]==0)
            {
                if(mincost>d[i])
                {
                    d[i]=mincost;
                    c=i;
                }
            }
        }
        V[c]=1;
        t++;
    }
    int mincost=0;
    for(int i=1;i<)
}

int main()
{


    int v,e;
    cin>>v>>e;
    for(int i=0; i<e; i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        weight[a][b]=weight[b][a]=w;
    }

    mist(v);



    return 0;
}
