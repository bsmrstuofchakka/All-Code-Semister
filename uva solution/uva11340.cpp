#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    for(int l=0; l<t; l++)
    {
        int n;
        cin>>n;
        char ch[101];
        int arr[100];
        for(int i=0; i<n; i++)
            cin>>ch[i]>>arr[i];

        long int sum=0,m;
        string s;

        for(int i=0; i<m; i++)
        {
            getline(cin,s);
            for(int j=0; j<s.size(); j++)
            {

                for(int k=0; k<n==0; k++)
                {
                    if(s[j]==ch[k])
                    {
                        sum=sum+arr[k];
                        break;
                    }

                }
            }
        }
        cout<<sum<<endl;




    }

    return 0;
}
