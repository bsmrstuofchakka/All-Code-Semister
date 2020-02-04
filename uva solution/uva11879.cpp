#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int n;
    while(scanf("%lld",&n)!=EOF&&n!=0)
    {
        int temp=5*(n%10);
        n=n/10;
        if((n-temp)%17==0)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }

    return 0;
}
