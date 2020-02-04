#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,temp,n,t,index;
    cin>>t;
    for(int m=1; m<=t; m++)
    {
        cin>>n;
        int arr[101];
        arr[0]=1;
        index=0;

        for(i=n;i>=2;i--)
        {
            temp=0;
            for(j=0;j<=index;j++)
            {
               temp=arr[j]*i+temp;
               arr[j]=temp%10;
               temp=temp/10;
            }
            while(temp>0)
            {
                arr[++index]=temp%10;
                temp=temp/10;
            }

        }
        for(i=index;i>=0;i--)
            cout<<arr[i];
        cout<<endl;
    }
    return 0;
}
