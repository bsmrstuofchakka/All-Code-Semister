#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,m;
    while(cin>>n>>h>>m)
    {
        int arr[51],a,b,c;

     for(int i=1;i<=51;i++)
       arr[i]=h;

        for(int i=1; i<=m; i++)
        {
            cin>>a>>b>>c;
            if(a==b)
                arr[a]=c;
            else
            {
                for(int k=a; k<=b; k++)
                {

                    if(arr[k]>c)
                        arr[k]=c;
                }
            }
        }
        long long sum=0;
        for(int i=1; i<=n; i++)
        {
               //if(arr[i]==0)
                 //   sum=sum+(h*h);
               //else
               sum=sum+(arr[i]*arr[i]);

        }


        cout<<sum<<endl;
    }


    return 0;
}
