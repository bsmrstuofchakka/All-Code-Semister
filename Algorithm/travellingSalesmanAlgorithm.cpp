#include<bits/stdc++.h>
using namespace std;
int dis_path(int v,int e);
int weight[20][20]= {0};
int T[20][20]= {0};


int main()
{

    int v,e;
    cout<<"Enter the number of vertexs: ";
    cin>>v;
    cout<<"Enter the number of edges: ";
    cin>>e;
    int a,b,w;
    for(int i=1; i<=e; i++)
    {
        cout<<"Enter the a,b and weight: ";
        cin>>a>>b>>w;
        weight[a][b]=w;
    }

    dis_path(v,e);


    return 0;
}
int dis_path(int v,int e)
{
    int visited[20]= {0};
    int current=1,totalvisted=2;
    while(totalvisited!=v)
    {
        for(int i=2; i<=v; i++)
        {
            for(int j=2; j<=v; j++)
            {
                if(weight[i][j]!=0)
                {
                    T[i][j]=weight[i][j]+T[i][j];

                }

            }
        }
        totalvisited++;

    }

}


