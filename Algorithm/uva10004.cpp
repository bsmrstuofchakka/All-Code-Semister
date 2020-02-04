#include<bits/stdc++.h>
using namespace std;
int weight[20][20]={0};

int main()
{
    int n,l;
    while(cin>>n>>l&&n!=0)
    {
        int a,b;
        for(int i=0; i<l; i++)
        {
            cin>>a>>b;
            weight[a][b]=weight[b][a]=1;



        }

    }



    return 0;
}
