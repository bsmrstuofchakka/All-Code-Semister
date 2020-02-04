#include<iostream>
#include<cstdio>
using namespace std;


int main()
{
    int i,j,k,n,m,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int count=0;
        cin>>m>>n;
        for(j=m;j<=n;j++)
        {
            k=2;
            while(k<=9)
            {
                if(j%k==0)
                {
                    count =1;
                }
                k++;
            }
            if(count==0)
                cout<<j<<endl;

        }
    }



    return 0;
}
