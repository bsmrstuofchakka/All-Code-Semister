#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {

        string s;
        cin>>s;
        char ch;
        int sum=0;
        cout<<"Case "<<k<<": ";
        for(int i=0; i<s.size(); i++)
        {


            if(s[i]>='A'&&s[i]<='Z')
            {

                for(int j=1; j<=sum; j++)
                {
                    cout<<ch;
                }

                ch=s[i];
                sum=0;
            }
            else
            {
                int a=s[i]-'0';
                sum=sum*10+a;

            }

        }
        for(int i=1;i<=sum;i++)
            cout<<ch;
        cout<<endl;


    }

    return 0;
}
