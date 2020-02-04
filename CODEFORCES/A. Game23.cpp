#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    while(cin>>n>>m)
    {
        int g=__gcd(n,m);
        n=n/g;
        m=m/g;
        int r=0;
        for( ; ; )
        {
            if(m%2==0&&m>n)
            {
                r++;
                m=m/2;
            }
            else
              break;
        }
        for(; ; )
        {
            if(m%3==0&&m>n)
            {
                r++;
                m=m/3;
            }
            else
              break;
        }

        if(m-n)
              cout<<"-1"<<endl;
        else
              cout<<r<<endl;



    }


    return 0;
}
