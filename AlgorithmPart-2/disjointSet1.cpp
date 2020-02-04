#include<bits/stdc++.h>
using namespace std;
#define MX 100

int parent[MX];
int rankParent[100]= {0};

void initializeSet(int n)
{
    for(int i=0; i<n; i++)
        parent[i]=i;

}

int findParent(int x)
{
    if(x!=parent[x])
        return parent[x]=findParent(parent[x]);
    else
        return x;
}

void unionSet(int x,int y)
{
    int px=findParent(x);
    int py=findParent(y);

    if(px==py)
        return;
    else if(rankParent[px]>rankParent[py])
        parent[py]=px;
    else if(rankParent[px]<rankParent[py])
        parent[px]=py;
    else
    {
        parent[py]=px;
        rankParent[px]++;

    }
}
void printSet(int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"Node is "<<i<<" Parent is "<<parent[i]<<" Rank is "<<rankParent[i]<<endl;
    }
}
int main()
{

    int n,e,a,b;
    cin>>n;
    initializeSet(n);
    cin>>e;
    for(int i=0; i<e; i++)
    {
        cin>>a>>b;
        unionSet(a,b);


    }
    printSet(n);

    return 0;
}
