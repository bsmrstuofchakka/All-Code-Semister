#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int l=0;l<t;l++)
    {
        int n;
        cin>>n;
        int sum=0;
        for(int i=n-1;i>0;i--)
          sum=sum+i;

        cout<<sum<<endl;

    }


    return 0;
}
