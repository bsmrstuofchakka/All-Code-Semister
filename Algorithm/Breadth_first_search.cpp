#include<iostream>
using namespace std;


int a[20][20],q[20],visited[20],n,i,j,f=0;r=-1;

void bfs(int v)
{
    for(int i=1;i<=n;i++)
    {
        if(a[v][i]&&!visited[i])
            q[++r]=i;
    }
    if(f<=r)
    {
        visited[q[f]]=1;
        bfs(q[f++]);
    }

}

int main()
{
    int v;

    cout<<"Please, enter the number of verties: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        q[i]=0;
        visited[i]=0;
    }
    cout<<"Please, enter the data in matrix form: ";

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    }


    cout<<"Please, enter the starting vertex: ";
    cin>>v;

    bfs(v);

    for(int i=1;i<=n;i++)
    {
        if(visited[i])
            cout<<i<<" ";
        elsecout<<"BFS not possible";
    }


    return 0;
}



