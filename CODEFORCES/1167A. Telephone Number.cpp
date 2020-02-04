#include<bits/stdc++.h>
using namespace std;

int main()
{
       int t;
       cin>>t;
       for(int k=0;k<t;k++)
       {
              string s;
              int n,count=0;
              cin>>n;
              cin>>s;
              reverse(s.begin(),s.end());
              //cout<<s<<endl;

              int i=10;
              while(i<=n)
              {
                     if(s[i]=='8')
                     {
                            count=1;
                            break;
                     }
                     i++;
              }
              if(count==1)
                     cout<<"YES"<<endl;
              else
                    cout<<"NO"<<endl;

       }




       return 0;
}


