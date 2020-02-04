#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    while(cin>>n&&n!=0)
    {
        cin>>s;
        int len=s.size();
        int m=len/n;

        int i=m,k=0,p=m;
        while(i<=len)
        {

            for(int j=p-1;j>=k;j--)
                cout<<s[j];
             k=p;
             p=p+m;


           i=i+m;
        }
        cout<<endl;


    }


    return 0;
}
