#include<bits/stdc++.h>
using namespace std;
int mat[101][101];

int Sum(int u,int v,int n)
{
    int sum=0,add=0;
    for(int i=1; i<=n; i++)
    {
        sum=sum+mat[u][i];
        add=add+mat[i][v];

    }
    if(sum%2==0&&add%2==0)
        return 2;
    else if(sum%2!=0&&add%2!=0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    while(cin>>n&&n!=0)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
                cin>>mat[i][j];
        }
        int u,v,check=0,res,first=0,count=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                res=Sum(i,j,n);
                if(res==0)
                    count=1;
                if(res==1)
                {
                    if(first==1)
                        check=1;
                    u=i;
                    v=j;
                    first=1;
                }
            }
        }

        if(first==0&&count==1||check==1)
            cout<<"Corrupt"<<endl;
        else if(first==1&&check==0)
            cout<<"Change bit "<<"("<<u<<","<<v<<")"<<endl;
        else
            cout<<"OK"<<endl;



    }


    return 0;
}
