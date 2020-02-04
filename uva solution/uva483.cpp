#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    while(getline(cin,s))
    {
        int a=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' ')
            {
                for(int j=i-1; j>=a; j--)
                    cout<<s[j];

                a=i+1;
                cout<<" ";
            }
        }
        for(int i=s.size()-1; i>=a; i--)
            cout<<s[i];

        cout<<endl;
    }
    return 0;
}
