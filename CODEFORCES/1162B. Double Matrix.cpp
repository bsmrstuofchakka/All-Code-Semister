#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int mat1[51][51]= {0};
        int mat2[51][51]= {0};


        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cin>>mat1[i][j];

            }
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cin>>mat2[i][j];
                if(mat2[i][j]<mat1[i][j])
                    swap(mat2[i][j],mat1[i][j]);

            }
        }



        int count=0;


        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(mat1[i-1][j]>=mat1[i][j]||mat1[i][j-1]>=mat1[i][j])
                {
                    count=1;
                    break;
                    //cout<<mat1[i][j]<<" ";
                }
            }
            //cout<<endl;

        }


        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                   //cout<<mat2[i][j]<<" ";
                if(mat2[i-1][j]>=mat2[i][j]||mat2[i][j-1]>=mat2[i][j])
                {
                    count=1;
                    break;
                }
            }
            //cout<<endl;

        }


        if(count==1)
            cout<<"Imposible"<<endl;
        else
            cout<<"Possible"<<endl;


    }


    return 0;
}

