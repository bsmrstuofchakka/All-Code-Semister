#include<bits/stdc++.h>
using namespace std;

int detGcd(int a,int b)
{
    while(a>0)
    {
        int c=b%a;
        b=a;
        a=c;
    }
    return b;
}


int main()
{

    int n;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        int gcd=0;

        for(int i=1; i<n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                gcd=gcd+detGcd(i,j);
            }
        }

        cout<<gcd<<endl;
    }

    return 0;
}
