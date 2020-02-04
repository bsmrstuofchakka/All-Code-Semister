#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    while(cin>>n)
    {
        string str;
        cin>>str;
        if(n%2!=0)
        {
            cout<<":(";
            return 1;
        }
        ll left=0,right=0;
        for(ll i=0; i<n; i++)
        {
            if(str[i]=='(')
                left++;
            else if(str[i]==')')
                right++;
        }
        if(left>(n/2) || right>(n/2))
        {
            cout<<":(";
            return 1;
        }
        for(ll i=0; i<n; i++)
        {
            if(str[i]=='?')
            {
                if(left<n/2)
                {
                    str[i]='(';
                    left++;
                }
                else
                    str[i]=')';
            }
        }
        ll ans=0;
        for(ll i=0; i<n; i++)
        {
            if(str[i]=='(')
                ans++;
            else
                ans--;
            if(ans<=0 && i!=n-1)
            {
                cout<<":(";
                return 1;
            }
        }
        for(ll i=0; i<n; i++)
            cout<<str[i];
        cout<<endl;
    }
}
