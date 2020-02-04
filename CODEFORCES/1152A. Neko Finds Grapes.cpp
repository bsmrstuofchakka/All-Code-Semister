#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int c,k,a,b,co=0,ko=0,ce=0,ke=0;
        for(int i=0; i<n; i++)
        {
            cin>>c;
            if(c%2==0)
                ce++;
            else
                co++;

        }

        for(int i=0; i<m; i++)
        {
            cin>>k;
            if(k%2==0)
                ke++;
            else
                ko++;
        }
        int sum=0;
        if(co>=ke)
              sum=sum+ke;
        else
              sum=sum+co;

       if(ce>=ko)
              sum=sum+ko;
        else
              sum=sum+ce;
        cout<<sum<<endl;




    }


    return 0;
}
