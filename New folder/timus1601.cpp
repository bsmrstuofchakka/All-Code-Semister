#include<bits/stdc++.h>
using namespace std;


int main()
{

    string s;
    int count=0;
    while(getline(cin,s))
    {

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                if(count==0)
                {
                    cout<<s[i];
                    count=1;
                }
                else
                {
                    int a=s[i];
                    a=a+32;
                    char ch=a;
                    cout<<ch;
                }
            }

            else
            {
                cout<<s[i];
                if(s[i]=='.'||s[i]=='?'||s[i]=='!')
                    count=0;

            }
        }
        cout<<endl;
    }

}
