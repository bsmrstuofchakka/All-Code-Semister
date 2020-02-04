#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[1000000];
    int l=1;
    while(cin>>ch&&ch[0]!='\n')
    {

        int n,a,b;
        cin>>n;
        cout<<"Case "<<l<<":"<<endl;
        for(int i=1; i<=n; i++)
        {
            int flag=1;
            cin>>a>>b;
            if(a>b)
                swap(a,b);

            for(int j=a+1; j<=b; j++)
            {
                if(ch[a]!=ch[j])
                    flag=0;

            }
            if(flag==1)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;

        }

        l++;
    }

    return 0;
}
