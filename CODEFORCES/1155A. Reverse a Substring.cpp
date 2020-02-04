#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        string s;
        string s1="";
        cin>>s;
        int a,count=0;
        for(int i=0; i<s.size()-1; i++)
        {

            if(s[i]>s[i+1]&&count==0)
            {
                a=i;
               // s1=s1+s[i+1];
               // s1=s1+s[i];
                i++;
                count=1;
                break;


            }
           // else
               // s1=s1+s[i];
        }
        if(count==1)
        {
            cout<<"YES"<<endl;

            cout<<a+1<<" "<<a+2<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
            //cout<<s1<<endl;
        }
    }


    return 0;
}
