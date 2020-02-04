#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,k,t,c,m;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        k=n/2;
        t=k*8+1;
        c=(sqrt(t)-1)/2;
        m=c*(c+1)+1;
        if(abs(m-n)>c)
            c++;
        i=c+1;
        j=i;
        m=c*(c+1)+1;
        //cout<<m<<"\n";
        if(m!=n)
        {
            int s=abs(m-n);
            if(m>n)
            {
                if(i%2)
                {
                    j-=s;
                }
                else
                    i-=s;
            }
            else
            {
                if(i%2)
                {
                    i-=s;
                }
                else
                    j-=s;
            }
        }
        cout<<i<<" "<<j<<"\n";
    }
}
