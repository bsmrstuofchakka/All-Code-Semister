#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        string s;
        cin>>s;
        int m=99999;
        string s1="ACTG";
        for(int i=3; i<n; i++)
        {
            int j=i,k=3;
            int a=0;
            while(k!=-1)
            {
                int b=abs(s[j]-s1[k]);
                if(b>13)
                    b=abs(b-26);

                a=a+b;
                //cout<<b<<endl;
                --k;
                --j;
            }
            //cout<<a<<endl;
            m=min(m,a);
        }
        cout<<m<<endl;
    }


    return 0;
}
