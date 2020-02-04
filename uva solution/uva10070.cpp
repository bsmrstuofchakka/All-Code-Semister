#include<bits/stdc++.h>
using namespace std;
int year_dect(string s,int dvsr)
{
    int rem,dvnd,quot;
    rem=0;
    for(int i=0; i<s.size(); i++)
    {
        dvnd=10*rem+s[i]-'0';
        rem=dvnd%dvsr;
        quot=dvnd/dvsr;
        s[i]=quot;
    }
    return rem;
}
int main()
{
    string s;
    int print=0;
    while(cin>>s)
    {
        int count=0,leap=0;
        if(print!=0)
            cout<<endl;
        print=1;
        if(year_dect(s,4)==0&&year_dect(s,100)!=0||year_dect(s,400)==0)
        {
            cout<<"This is leap year."<<endl;
            leap=1;
            count=1;
        }
        if(year_dect(s,15)==0)
        {
            cout<<"This is huluculu festival year."<<endl;
            count=1;
        }
        if(year_dect(s,55)==0&&leap==1)
        {
            cout<<"This is bulukulu festival year."<<endl;
            count=1;
        }
        if(count==0)
            cout<<"This is an ordinary year."<<endl;
    }
    return 0;
}
