#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{

    if(b%a==0)
        return a;
    else
        gcd(b%a,a);
}

int main()
{
    int n;
    while(cin>>n)
    {
        int arr[n];

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);

        int k=1;
        int max=0,count=0;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int m=gcd(arr[i],arr[j]);

                if(m>=max&&m!=1)
                {
                    if(count==1)
                     k++;
                    count=1;
                }
            }


        }
        if(max==0)
              cout<<"-1"<<endl;
        else
              cout<<n-1-k<<endl;





    }



    return 0;
}
