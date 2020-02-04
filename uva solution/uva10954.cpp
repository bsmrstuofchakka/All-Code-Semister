#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        int arr[n],sum=0;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[j]>arr[j+1])
                    swap(arr[j],arr[j+1]);
            }
        }

        int temp=0;
        for(int i=0; i<n; i++)
        {
            sum=sum+arr[i];
            arr[i]=sum;
            if(i>0)
                temp=temp+arr[i];

        }

        cout<<temp<<endl;

    }


    return 0;
}
