#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   for(int k=1;k<=t;k++)
   {
       double d,u,v,su;
       cin>>d>>v>>u;

       double min_t,min_straight;

       if(v>=u)
        cout<<"Case "<<k<<": can't determine"<<endl;

       else
       {
           min_t=d/u;
           min_straight=d/sqrt(u*u-v*v);
           su=abs(min_straight-min_t);
           if(su==0)
            cout<<"Case "<<k<<": can't determine"<<endl;
           else
            printf("Case %d: %.3lf\n",k,su);

       }
   }





    return 0;
}
