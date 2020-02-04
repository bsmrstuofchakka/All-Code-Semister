#include<bits/stdc++.h>
using namespace std;

int main()
{


    string s;
    while(getline(cin,s))
    {
        int count=0;
        int vis=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
            {
                if(vis==0)
                {
                    count++;
                    vis=1;
                }

            }
            else
                vis=0;


        }
        cout<<count<<endl;
    }
    return 0;
}
