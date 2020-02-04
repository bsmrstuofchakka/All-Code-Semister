#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    for(int l=1;l<=t;l++)
    {

        int n;
        cin>>n;
        int count[100]={0};

        for(int i=1;i<=n;i++)
        {
            int j=i;
            while(j>0)
            {
                int a=j%10;
                j=j/10;
                count[a]++;

            }
        }
        for(int i=0;i<=9;i++)
            cout<<count[i]<<" ";
        cout<<endl;


    }


    return 0;
}
