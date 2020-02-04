#include<bits/stdc++.h>
using namespace std;

int main()
{
    set <string> v;
    set <string> ::iterator it;
    string s;
    while(getline(cin,s))
    {
        //transform(s.begin(),s.end(),s.begin(), ::tolower);
        string s1="";
        for(int i=0; i<s.size(); i++)
        {
            if(isalpha(s[i]))
                s1+=tolower(s[i]);
                else if(s1!="")
                {
                       v.insert(s1);
                       s1="";
                }
        }

      /*
        istringstream iS(s1);
        string w;
        while(iS>>w)
            v.insert(w);
*/
    }
    for(it=v.begin(); it!=v.end(); it++)
        cout<<*it<<endl;

    return 0;
}
