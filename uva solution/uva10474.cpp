#include<bits/stdc++.h>
using namespace std;
int arr1[10001];
int main()
{

    int n,m,k=0;

    while(scanf("%d%d",&n,&m)==2)
    {
        if(m==0&&n==0)
            break;
        ++k;
        for(int i=0; i<n; i++)
            cin>>arr1[i];
        sort(arr1,arr1+n);
        int a;
        cout<<"CASE# "<<k<<":"<<endl;
        for(int i=1; i<=m; i++)
        {
            int cou=0;

            cin>>a;
            for(int j=0; j<n; j++)
            {
                if(arr1[j]==a)
                {
                    cout<<a<<" found at "<<j+1<<endl;
                    cou=1;
                    break;
                }
            }
            if(cou==0)
                cout<<a<<" not found"<<endl;
        }
    }
    return 0;
}
