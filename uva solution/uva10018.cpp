#include<iostream>
using namespace std;

int addReverse(int n,int i)
{
    int p=n,a=0;
    while(p>0)
    {
        a=a*10+p%10;
        p=p/10;
    }
    if(n==a)
    {
        cout<<i<<" ";
        return a;
    }
    else
        addReverse(a+n,++i);
}

int main()
{

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        cout<<addReverse(n,0)<<endl;

    }




    return 0;
}
