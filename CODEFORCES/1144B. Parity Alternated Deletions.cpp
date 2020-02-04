#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    while(cin>>n)
    {
        int e=0,o=0,arr[2001];
        int even[2001];
        int odd[2001];

        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);

        for(int i=0; i<n; i++)
        {
            if(arr[i]%2==0)
                even[++e]=arr[i];
            else
                odd[++o]=arr[i];
        }
       long long int sum;
        if(o==e)
              cout<<"0"<<endl;
        else if(o>e)
        {
               o=o-e;
               sum=0;
               for(int j=1;j<o;j++)
               {
                      sum=sum+odd[j];
               }
               cout<<sum<<endl;
        }
        else
        {
               e=e-o;
               sum=0;
               for(int j=1;j<e;j++)
               {
                      sum=sum+even[j];
               }
               cout<<sum<<endl;
        }



    }


    return 0;
}
