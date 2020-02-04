#include<bits/stdc++.h>
using namespace std;


int main()
{
    long int n,k;

    while(cin>>n)
    {

        cin>>k;

        string s;
        cin>>s;



        char ch[150];
        char temp[150];
        for(int i='a'; i<='z'; i++)
        {
            ch[i]=0;
            temp[i]=0;
        }
        int j=0,x=0;



        for(int i=0; i<n; i++)
        {

            ch[s[i]]++;
            int a=ch[s[i]];
            //cout<<s[i]<<a <<endl;
            if(s[i]!=s[i+1])
              ch[s[i]]=0;

            if(k==a)
            {
                temp[s[i]]++;
                if(x<temp[s[i]])
                {
                    x=temp[s[i]];
                }
                ch[s[i]]=0;
            }


        }
        cout<<x<<endl;



    }

    return 0;
}
