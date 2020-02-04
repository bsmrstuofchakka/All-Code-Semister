#include<bits/stdc++.h>
using namespace std;

int rev(long int n)
{
    int temp=0;
    while(n>0)
    {
        temp=temp*10+n%10;
        n=n/10;
    }
    return temp;
}


int main()
{

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long int m,n;
        cin>>m>>n;

        long int a=rev(m)+rev(n);
        cout<<rev(a)<<endl;

    }


    return 0;
}
