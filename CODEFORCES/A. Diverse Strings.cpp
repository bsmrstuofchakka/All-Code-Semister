#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    cin>>n;
    for(int l=1; l<=n; l++)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int count=1;

        for(int i=0; i<s.size()-1; i++)
        {
            if((s[i+1]-s[i])!=1)
                count=0;

        }

        if(count==0)
              cout<<"NO"<<endl;
        else
              cout<<"YES"<<endl;

    }



    return 0;


}
