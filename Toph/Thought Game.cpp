#include<bits/stdc++.h>
using namespace std;


int main()
{
       int n;
       cin>>n;
       for(int i=1;i<=n;i++)
       {
              int a,b;
              cin>>a>>b;
              int c=(a+b)/2;
              if(c%2==0)
                     cout<<"Sadia will be happy."<<endl;
              else
                     cout<<"Oops!"<<endl;
       }


       return 0;
}
