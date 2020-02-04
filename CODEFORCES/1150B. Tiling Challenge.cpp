#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,r,a,b;
    while(cin>>n)
    {
        char s[51][51],s1;
        int count=0;

        for(int i=1; i<=n; i++)
        {

            for(int j=1; j<=n; j++)
            {
                cin>>s[i][j];
                if(s[i][j]=='.')
                    count++;
            }
            //cout<<count<<endl;
        }
        //cout<<count<<endl;
        if(count%5!=0)
        {
               cout<<"NO"<<endl;
               return 0;
        }
        count=count/5;
        //cout<<count<<endl;
        int count2=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(s[i][j]=='.'&&s[i-1][j]=='.'&&s[i][j-1]=='.'&&s[i+1][j]=='.'&&s[i][j+1]=='.')
                {
                    s[i][j]='#';
                    s[i-1][j]='#';
                    s[i][j-1]='#';
                    s[i+1][j]='#';
                    s[i][j+1]='#';


                    count2++;
                    //cout<<i<<" "<<j<<endl;
                }


            }
        }
        //cout<<count2<<endl;
        if(count2==count&&count!=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }


    return 0;
}

