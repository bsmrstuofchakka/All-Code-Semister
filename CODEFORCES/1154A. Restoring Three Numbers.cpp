#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long sum,max1,max=-1;

    int arr[5],j;
    for(int i=1;i<=4;i++)
    {
           cin>>arr[i];
           if(arr[i]>max)
           {
                  max=arr[i];
                  j=i;
           }
    }


    int k=0;
    for(int i=1;i<=4;i++)
    {
           if(i!=j&&k<3)
           {
                  cout<<max-arr[i]<<" ";
                  k++;
           }
           else if(i!=j&&k==3)
              cout<<max-arr[i];

    }
    cout<<endl;




    return 0;
}
