#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=1;i<=n;i++)
        cin>>arr[i];

    for(int i=1;i<=3;i++)
    {
        int sum=0;
        for(int j=i;j<=n;j=j+3)
        {
            sum=sum+arr[j];
            arr[i]=sum;
        }
    }

    for(int i=1;i<=3;i++)
        cout<<arr[i]<<" ";
    cout<<endl;



    return 0;
}
