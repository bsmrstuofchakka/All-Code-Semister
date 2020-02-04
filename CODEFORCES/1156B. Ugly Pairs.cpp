#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int k=0; k<n; k++)
    {
        string s;
        cin>>s;
        int count=0,count1=0;

    /*    string s1;
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]!=s[i+1])
            {
                count1=1;
                break;
            }
        }
        if(count1==0)
        {
            cout<<s<<endl;
            continue;
        }   */

        for(int i=0; i<s.size(); i++)
        {
            int a=s[i],b=s[i+1],c=s[i-1];
            if(a+1==b||c==a-1)
            {
                int j=i;

                while(a+1==b||a-1==c)
                {
                    ++j;
                    b=s[j];
                    c=s[j-1];

                }
                swap(s[i+1],s[j]);


            }
        }

        for(int i=1; i<s.size()-1; i++)
        {
            int e=s[i],f=s[i+1],g=s[i-1];
            if(e+1==f||e-1==g)
                count=1;

        }

        if(count==1)
            cout<<s<<endl;
        else
            cout<<"No answer"<<endl;



    }


    return 0;
}

