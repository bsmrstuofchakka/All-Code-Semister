#include<bits/stdc++.h>
using namespace std;

int check(int n,int arr[],int count,int m)
{
    for(int i=m; i<n; i++)
    {
        if(arr[i]>arr[i+1])
        {
            count=1;
            break;
        }
    }
    return count;
}

int breakpoint(int n,int arr[],int temp,int m)
{
    for(int i=m; i<=n; i++)
    {
        if(arr[i]<arr[i])
            temp=temp+1;
    }
    return temp;
}

int main()
{
    int n;
    while(cin>>n)
    {
        int arr[101];
        for(int i=1; i<=n; i++)
            cin>>arr[i];
       int m=0;
        while(n>1)
        {
            int count=check(n,arr,0,m);
            if(count==1)
            {
                int temp1=0,temp2=0;

                int temp11=breakpoint(n/2,arr,temp1,1);
                int temp12=breakpoint(n,arr,temp2,(n/2)+1);
                if(temp11>temp12)
                {
                     n=n/2;
                }
                else
                {
                       m=n/2+1;
                }


        }
        else
        {
            cout<<n<<endl;
            break;
        }

    }
    if(n==1)
            cout<<"1"<<endl;
    }


    return 0;
}

