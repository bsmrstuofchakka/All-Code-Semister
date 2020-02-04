#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s)&&s!="DONE")
    {
        int j=0;
        string p,q;


        transform(s.begin(),s.end(),s.begin(), ::toupper);

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {

                s[j]=s[i];
                j++;

            }
        }
        int k=j-1;
        int count=0;
        for(int i=0; i<j; i++)
        {
            if(s[i]!=s[k])
                count=1;
            k--;

        }

        if(count==0)
            cout<<"You won't be eaten!"<<endl;
        else
            cout<<"Uh oh.."<<endl;




    }

    return 0;
}
