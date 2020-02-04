#include<bits/stdc++.h>
using namespace std;

void add()
{
    cout<<"ay";
}



int main()
{

    string s;

    while(getline(cin,s))
    {
        int vis=0,count=0;

        for(int i=0; i<s.size(); i++)
        {






            if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z'&&vis==0)
            {

                if(s[i]=='A'||'E'||'I'||'O'||'U'||'a'||'e'||'i'||'o'||'u')
                {
                    count=1;
                }

            }
            else
            {
                vis=0;
                cout<<s[i];
            }

        }



    }


    return 0;
}
