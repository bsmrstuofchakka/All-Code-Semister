#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m;
    while(cin>>n)
    {
        if(n==0)
            break;
        cin>>m;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        int p,q,r;
        int temp=0;
        for(int i=0; i<m; i++)
        {
            cin>>p>>q;
            int count=0;

            for(int k=0; k<p; k++)
            {

                cin>>r;
                for(int l=0; l<n; l++)
                {
                    if(r==arr[l])
                        count++;
                }
            }
            if(count<q)
                temp=1;
        }
        if(temp==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

    }
    return 0;
}
