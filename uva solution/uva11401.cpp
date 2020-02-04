#include<bits/stdc++.h>
using namespace std;


int main()
{
       int n;
       while(cin>>n&&n>2)
       {
              long long j=1,count[10^7]={0},sum[10^7]={0};
              long long total_sum[10^7]={0};

              long int k=0;
              for(int i=4;i<=n;i++)
              {
                     k++;
                     if(count[j]==2)
                     {
                            ++j;
                            sum[k]=sum[k-1]+j;
                     }
                     else
                     {

                            sum[k]=sum[k-1]+j;
                     }
                     count[j]++;
                     total_sum[k] =total_sum[k-1]+sum[k];

              }
              cout<<k<<"  "<<total_sum[k]<<endl;

       }



       return 0;
}
