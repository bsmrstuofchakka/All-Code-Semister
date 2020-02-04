#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    while(cin>>s)
    {
        int count=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='a')
                count++;
        }

        if(s.size()-count>=count)
            cout<<count+(count-1)<<endl;
        else
            cout<<s.size()<<endl;



    }


    return 0;
}
