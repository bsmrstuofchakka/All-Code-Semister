#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin>>s;
    int count=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')
        {
            if(count!=1)
            {
                cout<<"1";
                count=1;
            }
        }
        else if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')
        {
            if(count!=2)
            {
                cout<<"2";
                count=2;
            }

        }
        else if(s[i]=='D'||s[i]=='T')
        {
            if(count!=3)
            {
                cout<<"3";
                count=3;
            }
        }
        else if(s[i]=='L')
        {
            if(count!=4)
            {
                cout<<"4";
                count=4;
            }
        }
        else if(s[i]=='M'||s[i]=='N')
        {
            if(count!=5)
            {
                cout<<"5";
                count=5;
            }
        }
        else if(s[i]=='R')
        {
            if(count!=6)
            {
                cout<<"6";
                count=6;
            }
        }
        else
            count=7;
    }
    cout<<endl;

    return 0;
}
