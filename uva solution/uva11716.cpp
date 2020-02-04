#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;

    cin>>t;
    string s;
    cin.ignore();
    while(t--)
    {


        getline(cin,s);

        int len=s.size();
        int a=sqrt(len);

        if(len!=a*a)
            cout<<"INVALID";
        else
        {
            int b=0,j=0;
            for(int i=0; i<len; i++)
            {
                cout<<s[b];
                b=b+a;
                if(b>=len)
                {
                    ++j;
                    b=j;

                }

            }
        }
        cout<<endl;



    }


    return 0;
}
