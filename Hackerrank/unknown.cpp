#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int l=0; l<t; l++)
    {
        int sum=2,k=1,n;
        cin>>n;

        for(int i=3; i<=n&&sum<=n; i=i+2)
        {
            int j=2,barsha=1;
            while(j<i)
            {
                if(i%j==0)
                    barsha=0;
                 j++;
            }


            if(barsha==1)
            {
                sum=sum+i;
                k++;
            }

        }
        cout<<k<<endl;

    }
    return 0;
}
