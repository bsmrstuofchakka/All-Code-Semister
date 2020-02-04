#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    while(cin>>n)
    {
        cin.ignore();
        map <string, int>mp;
        set<string>s;
        set<string>:: iterator it;


        string s1,s2;

        while(n--)
        {
            cin>>s1;
            getline(cin,s2);

            mp[s1]++;
            s.insert(s1);


        }

        for(it=s.begin(); it!=s.end(); it++)
        {
            cout<<*it<<" "<<mp[*it]<<endl;
        }
    }

    return 0;
}
