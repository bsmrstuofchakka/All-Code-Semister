#include<bits/stdc++.h>
using namespace std;
int determinePrime(int arr[],int n)
{
    arr[0]=2;
    arr[1]=3;
    int k=2;
    for(int i=5; i<=n; i=i+2)
    {
        int j=2,m=1;
        while(j<i)
        {
            if(i%j==0)
            {
                m=0;
                break;
            }
            j++;
        }
        if(m==1)
        {
            arr[k]=i;
            k++;
        }
    }
    return k;
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        int arr[100000];
        int k=determinePrime(arr,n);
        int max=0,a,b,m=0;
        for(int i=0; i<=k; i++)
        {
            for(int j=i+1; j<=k; j++)
            {
                if(arr[i]+arr[j]==n)
                {
                    if((arr[j]-arr[i])>max)
                    {
                        max=arr[j]-arr[i];
                        a=arr[i];
                        b=arr[j];
                        m=1;
                    }
                }
            }
        }
        if(m==1)
            cout<<n<<" = "<<a<<" + "<<b<<endl;
        else
            cout<<"Goldbach's conjecture is wrong."<<endl;
    }
    return 0;
}
