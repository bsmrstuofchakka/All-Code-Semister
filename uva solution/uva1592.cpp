#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n)
    {
        set<string >v[10002];
        set<string >v2;
        set<string >::iterator it;
        cin>>m;
        string s;
        cin.ignore();
        for(int k=0; k<n; k++)
        {

            getline(cin,s);
            string s2="";
            int t=1;
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]==',')
                {
                    v[t].insert(s2);
                    s2="";
                    t++;
                }
                else
                    s2=s2+s[i];
            }
            v[t].insert(s2);
        }
        int a,b;
        bool count=false;
        for(int i=1; i<=m; i++)
        {
            if(v[i].size()!=n)
            {
                count=true;
                a=v[i].size();
            }
            else
              b=v[i].size();
        }
        if(count==false)
            cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
            cout<<a<<" "<<b<<endl;
             cout<<a<<" "<<b<<endl;


        }





    }


    return 0;
}
