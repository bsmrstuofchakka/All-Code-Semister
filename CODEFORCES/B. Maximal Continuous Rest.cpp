#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;


    while(cin>>n)
    {
        int a[200001],p=0,j;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            if(p==0&&a[i]==0)
            {
                j=i;
                p=1;
            }
        }


        int count=0,temp=0;

        int i=j;
        while(i<=n)
        {

            if(a[i]==1)
            {
                count++;

                if(temp<count)
                    temp=count;

            }
            else
            {
                count=0;
            }
            if(i==n)
                i=0;
            i++;
            if(i==j)
              break;
        }
        cout<<temp<<endl;

    }



    return 0;
}
