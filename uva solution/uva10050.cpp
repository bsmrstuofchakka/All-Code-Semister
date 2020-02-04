#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        int n;
        cin>>n;
        int t1;
        cin>>t1;
        int arr[101];

        for(int i=1;i<=t1;i++)
            cin>>arr[i];
        int count=0;
        int visited[4000]={0};
        for(int i=1;i<=t1;i++)
        {

            for(int j=arr[i];j<=n;j=j+arr[i])
            {
                int a=j,m=-1;
                while(a>0)
                {

                    ++m;
                    a=a-7;
                }
                if(m>=6)
                    m=m%6;
                if(j%6!=m&&j%7!=0&&visited[j]==0)
                {
                    count++;
                    visited[j]=1;
                }
            }
        }
        cout<<count<<endl;


    }


    return 0;
}
