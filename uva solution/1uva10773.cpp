#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int d,u,v;
        cin>>d>>u>>v;

        float c=acos(-u/v);
        float t=d/(v*sin(c))-d/v;

        printf("%.3f\n",t);


    }

    return 0;
}
