#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k=0,n;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {

        int arr[n],sum=0;

        k++;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        int a=sum/n;
        int count=0;

        for(int i=1; i<=n; i++)
        {
            if(arr[i]<a)
            {
                int b=a-arr[i];
                count=count+b;
            }
        }
        cout<<"Set #"<<k<<endl;
        cout<<"The minimum number of moves is "<<count<<"."<<endl<<endl;


    }

    return 0;
}
