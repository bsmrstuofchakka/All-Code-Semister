#include<bits/stdc++.h>
using namespace std;


int main()
{
       int n;
       while(cin>>n)
       {
              int arr[101];

              for(int i=0;i<n;i++)
                     cin>>arr[i];
              sort(arr,arr+n);

              int ct=0;
              for(int i=0;i<arr[n-1];i++)
              {

                     map<int, int>mp;
                     map<int, int>::iterator it;
                     for(int j=0;j<n;j++)
                     {
                           mp[arr[j]-i]++;
                           mp[arr[j]+i]++;
                           mp[arr[j]]++;
                     }
                     for(it=mp.begin();it!=mp.end();it++)
                     {
                            if(mp[*it]==n)
                            {
                                   ct=1;
                                   break;
                            }
                     }
                     if(ct==1)
                     {
                            cout<<i<<endl;
                            break;
                     }

              }





       }


       return 0;
}
