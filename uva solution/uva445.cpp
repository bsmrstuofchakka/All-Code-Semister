#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    while(getline(cin,s))
    {
        int a,sum=0;
        char ch;

        for(int i=0; i<s.size(); i++)
        {

            if(s[i]>='A'&&s[i]<='Z'||s[i]=='*'||s[i]=='b')
            {
                if(s[i]=='b')
                    ch=' ';
                else
                    ch=s[i];

                for(int j=0; j<sum; j++)
                    cout<<ch;
                sum=0;

            }
            else if(s[i]>='0'&&s[i]<='9')
            {
                a=s[i]-'0';
                sum=sum+a;
            }
            else if(s[i]=='!')
            {
                cout<<endl;
                sum=0;
            }


        }
        cout<<endl;
    }



    return 0;
}
