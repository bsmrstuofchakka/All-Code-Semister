#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    long int j=1;
    while(getline(cin,s))
    {

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='"')
            {
                if(j%2==0)
                    cout<<"''";
                else
                    cout<<"``";
                ++j;
            }
        else
            cout<<s[i];
        }
        cout<<endl;

    }

    return 0;
}
