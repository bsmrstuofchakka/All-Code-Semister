#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;

    cin>>n>>m;

    string a[1001],b[1001],c[1001],d[1001],e[1001];

    for(int i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];

    }

    for(int i=1; i<=m; i++)
    {
        cin>>c[i]>>e[i];


    }



    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(d[i]==b[j])
                cout<<c[i]<<" "<<d[i]<<"; #"<<a[j]<<endl;

        }

    }


    return 0;
}

