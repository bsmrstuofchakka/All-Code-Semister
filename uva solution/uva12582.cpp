#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        string s;
        cin>>s;

        map<char,int>mp;
        stack<char>stk;

        stk.push(s[0]);
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]==stk.top())
                stk.pop();
            else
            {
                mp[(stk.top())]++;
                stk.push(s[i]);
                mp[(stk.top())]++;
            }
        }

        sort(s.begin(),s.end());
        s.erase(unique(s.begin(),s.end()),s.end());
        cout<<"Case "<<k<<endl;

        for(int i=0; i<s.size(); i++)
        {
            cout<<s[i]<<" = "<<mp[s[i]]<<endl;
        }
        mp.clear();



    }

    return 0;
}
