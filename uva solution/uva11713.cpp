#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        string s1,s2;
        cin>>s1>>s2;
        int len1=s1.size();
        int len2=s2.size();
        int check=0;
        if(len2==len1)
        {
            int count=0,check=0;
            for(int i=0; i<len2; i++)
            {
                if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u')
                {
                    if(s1[i]!='a'||s1[i]!='e'||s1[i]!='i'||s1[i]!='o'||s1[i]!='u')
                    {
                        check=1;
                    }

                }
            }
            if(check==1)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;


        }
        else
            cout<<"No"<<endl;

    }
    return 0;
}
