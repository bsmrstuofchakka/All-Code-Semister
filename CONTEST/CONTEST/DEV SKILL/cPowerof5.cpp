#include<iostream>
using namespace std;

int power(long int n)
{
    int p=1,i=1;
    while(i<n)
    {
        p=5*p;
        i=p;

    }

    return p;
}


int main()
{
    long int n;
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;

        if(power(n)==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
