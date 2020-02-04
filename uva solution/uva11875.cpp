#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int n,sum=0,j;
        cin>>n;
        int arr[15];
        float avg;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        avg=(float)sum/n;
        float min=100;
        for(int i=1;i<=n;i++)
        {
            float a=abs(avg-arr[i]);
            if(min>a)
            {
                min=a;
                j=i;
            }
        }
        cout<<"Case "<<k<<": "<<arr[j]<<endl;

    }
    return 0;
}
