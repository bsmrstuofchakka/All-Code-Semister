#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n;
       cin>>n;
       long int sum=0;
       for(int i=0;i<=n;i=i+2)
             sum=sum+i;
       cout<<sum<<endl;
       if(n>5&&n<46)
              cout<<"NO"<<endl;
       else
              cout<<"YES"<<endl;


       return 0;
}
