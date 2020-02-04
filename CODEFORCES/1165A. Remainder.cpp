#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,x,y;
    while(cin>>n>>x>>y)
    {
        string s;

        cin>>s;


        int i=s.size()-1,count=0;
        for(int k=0; k<=x; k++)
        {
            if(s[i]=='1'&&k<y)
            {
                count++;

            }
            else if(s[i]=='0'&&k==y)
            {
                count++;
            }
            else if(s[i]=='1'&&k<x&&k>y)
                count++;
            else if(s[i]=='0'&&k==x&&k>y)
                count++;
            --i;

        }
        cout<<count<<endl;


    }

}
