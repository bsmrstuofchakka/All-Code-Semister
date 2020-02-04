#include<bits/stdc++.h>
using namespace std;

int f91(long int n)
{
    if(n<101)
        f91(n+11);
    else
    {
        n=n-10;
        if(n<101)
            f91(n);
        else
            return n;
    }
}

int main()
{
    long int n;

    while(cin>>n&&n!=0)
    {
        long int a=f91(n);
        if(a==101)
        cout<<"f91("<<n<<")="<<a-10<<endl;
        else
            cout<<"f91("<<n<<")="<<a<<endl;
    }
    return 0;
}
