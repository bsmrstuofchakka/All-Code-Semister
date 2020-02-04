#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s[10000];
    int k=-1;
    while(cin>>s[++k])
    {

        if(s[k]=="#")
            break;
    }
    char ch;
    map <char,int>l;
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(i<s[j].size())
            {
                ch=s[j][i];
                if(l[ch]!=1)
                {
                    cout<<ch;
                    l[ch]=1;
                }


            }
        }
    }
    cout<<endl;




    return 0;
}
