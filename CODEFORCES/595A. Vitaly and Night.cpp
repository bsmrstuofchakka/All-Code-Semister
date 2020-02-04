#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n,m,a;
       while(cin>>n)
       {
              cin>>m;
              int count=0;
              for(int i=1;i<=n;i++)
              {
                     int b=0;
                     for(int j=1;j<=2*m;j++)
                     {
                            cin>>a;
                            if(j%2==1)
                                 b=1;
                            if(a==1&&b==1)
                            {
                                 count++;
                                 b=0;
                            }
                     }
              }
              cout<<count<<endl;
       }


       return 0;
}
