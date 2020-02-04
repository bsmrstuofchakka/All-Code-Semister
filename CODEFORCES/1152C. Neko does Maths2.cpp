#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long n,i,a,b,t,k,newa,newb;
 cin>>a>>b;
 t= abs(a-b);
 //long long prelcm=(a*b)/__gcd(a,b);
 long long max=max=99999999999999;
 k=0;

 for(i=1;i<=sqrt(t);i++)
 {
   if(t%i==0)
   {
     newa=a+i-a%(i);
     newb=b+i-(b%(i));
     if((newa*newb)/__gcd(newa,newb)<max)
     {
       max=(newa*newb)/__gcd(newa,newb);
       k=newa-a;
       //cout<<i<<endl;
     }

     newa=a+t/i-a%(t/i);
     newb=b+t/i-(b%(t/i));
     if((newa*newb)/__gcd(newa,newb)<max)
     {
       max=(newa*newb)/__gcd(newa,newb);
       k=newa-a;
       //cout<<i<<endl;
     }
     cout<<i<<endl;

   }
 }
 cout<<k;
}
