#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;


    while(cin>>n>>m)
    {
        int mat[1025][100],count=0,a=0,b;
        for(int i=1; i<=n; i++)
        {
            map<int,int>mp;

            for(int j=1; j<=m; j++)
            {
                cin>>mat[i][j];

                mp[mat[i][j]]++;
                if(mp[mat[i][j]]==m&&count==0)
                {
                    swap(mat[1][1],mat[i][j]);
                    count=1;
                    a=mat[1][1];
                }

            }
        }
        if(a==0)
              a=mat[1][1];
        //cout<<a<<endl;
        //cout<<mat[1][1]<<endl;
        int temp=0,c,d;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(a!=mat[i][j]&&temp==0||n==1)
                {
                    temp=1;
                    c=i;
                    d=j;
                }
            }
        }
        swap(mat[1][1],mat[a][1]);
        if(temp==1)
        {
            cout<<"TAK"<<endl;
            for(int i=1; i<=n; i++)
            {
                if(i==c&&i!=n)
                    cout<<d<<" ";
                else if(i==c&&i==n)
                    cout<<d;
                else if(i!=c&&i==n)
                    cout<<"1";
                else
                    cout<<"1 ";
            }
            cout<<endl;
        }
        else
            cout<<"NIE"<<endl;



    }



    return 0;
}
