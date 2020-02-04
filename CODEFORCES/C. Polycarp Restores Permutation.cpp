#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int q[200001];
        for(int i=1; i<n; i++)
        {
            cin>>q[i];
        }
        int p[200001];
        int temp[20001]= {0};
        p[n]=n;
        temp[n]=1;
        int count=0;
        for(int i=n-1; i>0; i--)
        {
            p[i]=p[i+1]-q[i];
            //if(p[i]>0)
                temp[p[i]]++;
            if(p[i]<=0||p[i]>n||temp[p[i]]>1)
                count=1;

        }

         if(count==1)
          cout<<"-1"<<endl;
         else
         {
        for(int i=1; i<=n; i++)
            cout<<p[i]<<" ";

        cout<<endl;


         }

    }


    return 0;
}
