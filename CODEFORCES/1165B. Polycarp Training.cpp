#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    while(cin>>n)
    {
        int arr[2*10^5],sum=0;



        for(int i=0;i<n;i++)
        {
               cin>>arr[i];
        }
        sort(arr,arr+n);
        int j=1;
        for(int i=0;i<n;i++)
        {
               if(j<=arr[i])
               {
                      ++j;
                      sum++;
               }

        }


        cout<<sum<<endl;



    }

}

