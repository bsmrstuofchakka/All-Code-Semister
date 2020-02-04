#include<bits/stdc++.h>
using namespace std;

struct edge
{
    int u,v,w;
    bool operator<(const edge& p)const
    {
        return w<p.w;
    }
};


int main()
{
    int m,n;
    cout<<"Enter the number of vertex: ";
    cin>>n;
    cout<<"Enter the number of edge: ";
    cin>>m;

    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cout<<"Enter the u,v and weight: ";
        cin>>u>>v>>w;

        edge get;
        get.u=u;
        get.v=v;
        get.w=w;
        e.push_back(get);
    }


    return 0;
}
