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
        for(int i='a'; i<='z'; i++)
            ch[i]=1;
        char temp[150];
        for(int i='a'; i<='z'; i++)
            temp[i]=0;
        int max=0;



        int j=0,x=0,a=1;
        if(k==1)
        {
            for(int i=0; i<n; i++)
            {
                temp[s[i]]++;
                if(max<temp[s[i]])
                    max=temp[s[i]];
            }
            cout<<max<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(s[i]!=s[i+1])
                {
                    for(int j='a'; j<='z'; j++)
                        ch[j]=1;
                    a=ch[s[i]];
                }
                else
                {
                    ch[s[i]]++;
                    a=ch[s[i]];
                    //cout<<s[i]<<a<<endl;
                    if(k==a)
                    {
                        temp[s[i]]++;
                        if(x<temp[s[i]])
                        {
                            x=temp[s[i]];
                            //cout<<x<<endl;
                        }
                        for(int j='a'; j<='z'; j++)
                            ch[j]=0;


                    }
                }
                //cout<<s[i]<<a<<endl;
            }

            cout<<x<<endl;

        }

    }

    return 0;
}
