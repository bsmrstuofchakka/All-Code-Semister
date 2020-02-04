#include<bits/stdc++.h>
using namespace std;
void tifun(int m);

int mat[100][100];

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>mat[i][j];
        }
    }


    int k=1;
    while(k<=n)
    {
        int i=k;
        int j=1;
        for(int m=1;m<=k;m++)
        {
            cout<<mat[i][j]<<" ";
            i--;
            j++;
        }
        k++;
        if(k==n+1)
            tifun(k-1);

    }



    return 0;
}
void tifun(int m)
{
    int k=2;
    while(k<=m)
    {
        int j=m;
        for(int i=k;i<=m;i++)
        {

            cout<<" "<<mat[j][i];
            j--;

        }
        k++;
    }
}


