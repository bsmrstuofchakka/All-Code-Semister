#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    while(cin>>n)
    {
        string s;
        cin>>s;
        int count=0;

        int m=(n-11)/2;
        int p=m;
        int j=0,k=0;
        while(k<m&&j<n)
        {
            if(s[j]!='8')
            {
                s.erase(j,1);
                ++k;

                //cout<<s<<endl;
            }
            else
                ++j;

        }
        j=0,k=0;
        while(k<p&&j<n)
        {
            if(s[j]=='8')
            {
                s.erase(j,1);
                ++k;

                //cout<<s<<endl;
            }
            else
                ++j;

        }




        if(s[0]=='8')
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



    }


    return 0;
}
