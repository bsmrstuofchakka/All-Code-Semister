#include<bits/stdc++.h>
using namespace std;
#define MX 100

int parent[MX];
int rankParent[100]={0};

void initializeSet(int n)
{
    for(int i=0;i<n;i++)
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
    for(int i=0;i<n;i++)
    {
        cout<<"Node is "<<i<<" Parent is "<<parent[i]<<" Rank is "<<rankParent[i]<<endl;
    }
}
int main()
{

    int n;
    cin>>n;
    initializeSet(n);

    unionSet(1,6);
    unionSet(5,7);
    unionSet(0,3);
    unionSet(5,6);
    unionSet(1,5);
    unionSet(0,4);
    unionSet(2,4);
    unionSet(6,7);
    unionSet(3,5);


    printSet(n);

    return 0;
}
