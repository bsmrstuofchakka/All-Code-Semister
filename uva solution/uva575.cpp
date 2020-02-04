#include<bits/stdc++.h>
using namespace std;

int skewBinary(int m,int k)
{
    long int a=1;
    for(int i=0;i<k;i++)
        a=2*a;
    return m*(a-1);
}


int main()
{
    char s[1000];

    while(gets(s))
    {
        int n=strlen(s);
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+skewBinary(s[i]-'0',n-i);
        }
        if(sum==0)
            break;
        cout<<sum<<endl;
    }

    return 0;
}
