#include<bits/stdc++.h>
using namespace std;


int main()
{
       int t;
       cin>>t;
       for(int k=1;k<=t;k++)
       {
              int n,m;
              cin>>m>>n;

              if(m%2==0)
                     m=m+1;

              long int sum=0;
              for(int i=m;i<=n;i=i+2)
              {
                     sum=sum+i;
              }
              cout<<"Case "<<k<<": "<<sum<<endl;


       }



       return 0;
}
