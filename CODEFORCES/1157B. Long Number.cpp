#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    while(cin>>n)
    {
        string s;
        cin>>s;

        int arr[11];
        for(int i=1; i<=9; i++)
            cin>>arr[i];
        int count=0;
        for(int i=0; i<s.size(); i++)
        {
            int m=s[i]-'0';
            if(arr[m]<=m&&count==0)
            {
                   cout<<m;
            }
            else if(arr[m]<m&&count==1)
            {
                   cout<<
            }


        }
        cout<<endl;

    }



    return 0;
}
