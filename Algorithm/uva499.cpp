#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int count[200]= {0};
        int max=-1,l=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')
            {
                int a=s[i];
                count[a]++;

                if(max<count[a])
                {
                    max=count[a];
                }
            }

        }
        for(int i=65;i<123;i++)
        {
            if(max==count[i])
            {
                char ch=i;
                cout<<ch;
            }
        }
        cout<<" "<<max<<endl;
    }
    return 0;
}
