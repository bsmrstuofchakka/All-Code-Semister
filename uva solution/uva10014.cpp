#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int l=1; l<=t; l++)
    {
        double n,d,a,b,sum=0;

        if(l>1)
              cout<<endl;
        cin>>n>>a>>b;


        float arr[4000];
        for(int i=1; i<=n; i++)
            cin>>arr[i];

        int j=1;
        for(int i=n; i>0; i--)
        {
            sum=sum-2*j*arr[i];
            ++j;

        }


        d=(sum+(n*a)+b)/(n+1);

        cout<<fixed<<setprecision(2)<<d<<endl;


    }





    return 0;
}
