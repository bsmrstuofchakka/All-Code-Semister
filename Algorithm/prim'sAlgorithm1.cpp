#include<bits/stdc++.h>
using namespace std;

int prim(int weight[][],v,e)
{
    int visited[20]={0},p[20]=0,d[20]={32767};

    int current=1,totalvisited=1;
    visited[current]=
}

int main()
{

    int weight[20][20]={0},e,v;


    cout<<"Enter the number of verties: ";
    cin>>v;

    cout<<"Enter the number of edges: ";
    cin>>e;
    int a,b;
    for(int i=1;i<=e;i++)
    {
        cin>>a>>b>>w;
        weight[a][b]=weight[b][a]=w;

    }

    prim(weight,v,e);


    return 0;
}

