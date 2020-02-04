#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int l=0; l<t; l++)
    {
        int n,a=0,b=0;
        string s;
        cin>>n>>s;


        int c=0;
        for(int i=0; i<s.size(); i++)
        {
            if(c==0&&s[i]=='>')
            {
                a=i;
                c=1;
            }
            if(s[i]=='<')
              b=n-i-1;

        }
        cout<<min(a,b)<<endl;




    }


    return 0;
}
