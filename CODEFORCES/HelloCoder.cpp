#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int arr[101];
        for(int i=1; i<=n; i++)
            cin>>arr[i];
        int sum=0,count=0;
        for(int i=2; i<=n; i++)
        {
            if(arr[i]==2&&arr[i-1]==1)
                sum=sum+3;
            else if(arr[i]==2&&arr[i-1]==3)
            {
                cout<<"Infinite"<<endl;
                count=1;
                break;
            }
            else if(arr[i]==3&&arr[i-1]==2)
            {
                cout<<"Infinite"<<endl;
                count=1;
                break;
            }
            else if(arr[i]==3&&arr[i-1]==1)
                sum=sum+4;
            else if(arr[i]==1&&arr[i-1]==2)
                sum=sum+3;
            else if(arr[i]==1&&arr[i-1]==3)
                sum=sum+4;

        }
        if(count==0)
        {
            cout<<"Finite"<<endl;
            cout<<sum<<endl;
        }




    }


    return 0;
}
