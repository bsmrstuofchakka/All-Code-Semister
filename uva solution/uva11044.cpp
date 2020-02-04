#include<iostream>
using namespace std;

int main()
{

    int t,m,n,a,b,res;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>m>>n;
        a=m%3;
        b=n%3;
        m=m-a;
        n=n-b;
        res=(m*n)/9;
        cout<<res<<endl;
    }


    return 0;
}
