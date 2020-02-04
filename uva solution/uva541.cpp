#include<bits/stdc++.h>
using namespace std;
int mat[101][101];

int Sum(int u,int v,int n)
{
    int sum=0,add=0,check=0;
    for(int i=1; i<=n; i++)
    {
        sum=sum+mat[u][i];
        add=add+mat[i][v];

    }
    if(sum%2==0&&add%2==0)
        check=1;
    return check;
}
int Sum1(int u,int v,int n)
{
    int sum1=0,add1=0,check1=0;
    for(int i=1; i<=n; i++)
    {
        sum1=sum1+mat[i][u];
        add1=add1+mat[v][i];
    }
    if(sum1%2==0&&add1%2==0)
        check1=1;
    return check1;
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

        int res,res1,u,v,check=0,first=0,check1=0,first1=0,u1,v1,check2=0;
        for(int i=1; i<=n; i++)
        {
            int sum=0,add=0;
            for(int j=1; j<=n; j++)
            {
                sum=sum+mat[i][j];
                add=add+mat[j][i];

            }


            if(sum%2!=0)
            {
                check2=1;
                for(int k=1; k<=n; k++)
                {
                    if(mat[i][k]==0)
                        mat[i][k]=1;
                    else
                        mat[i][k]=0;
                    res=Sum(i,k,n);


                    if(mat[i][k]==0)
                        mat[i][k]=1;
                    else
                        mat[i][k]=0;

                    if(res==1)
                    {
                        if(first==1&&u==i||v==k)
                            check=1;
                        u=i;
                        v=k;
                        first=1;
                    }
                }
            }

            if(add%2!=0)
            {
                check2=1;
                for(int k=1; k<=n; k++)
                {
                    if(mat[k][i]==0)
                        mat[k][i]=1;
                    else
                        mat[k][i]=0;

                    res1=Sum1(i,k,n);


                    if(mat[k][i]==0)
                        mat[k][i]=1;
                    else
                        mat[k][i]=0;


                    if(res1==1)
                    {
                        if(first1==1&&u1==i||v1==k)
                            check1=1;
                        u1=i;
                        v1=k;
                        first1=1;
                    }
                }
            }



        }
        if(check==0&&first==0&&check1==0&&first1==0&&check2==0)
            cout<<"OK"<<endl;
        else if(check==0&&first==1&&u!=u1&&v!=v1)
            cout<<"Change bit "<<"("<<u<<","<<v<<")"<<endl;
        else if(check1==0&&first1==1&&u!=u1&&v!=v1)
            cout<<"Change bit "<<"("<<u1<<","<<v1<<")"<<endl;
        else if(check==0&&first==1&&u==u1&&v==v1)
            cout<<"Change bit "<<"("<<u<<","<<v<<")"<<endl;
        else
            cout<<"Corrupt"<<endl;





    }

    return 0;
}
