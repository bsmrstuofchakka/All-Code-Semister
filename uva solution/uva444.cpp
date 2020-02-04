#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin,s);


    for(int i=s.size()-1;i>=0;i--)
    {
        int a=s[i]-'0';
        //char ch=a+'0';
        //strrev(ch);
        //int b=ch;
        cout<<a;
    }
    cout<<endl;


    return 0;
}
