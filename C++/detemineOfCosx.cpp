#include<iostream>
using namespace std;

int powr(int x,int n)
{
    int i,a,mul=1;
    for(i=n; i>0; i--)
        mul=mul*x;
    return mul;
}
int fact(int n)
{
    int i,fac=1;
    for(i=n;i>0;i--)
        fac=fac*i;
    return fac;
}

int main()
{
    int x,cosx;
    cout<<endl<<"PLEASE ENTER THE VALUEOF X:   ";
    cin>>x;
    cosx=1-powr(x,2)/fact(2)+powr(x,4)/fact(4)-powr(x,6)/fact(6);
    cout<<endl<<"cosx=1-x*x/2!+x*x*x*x/4!-x*x*x*x*x*x/6!:  "<<cosx<<endl;
    return 0;
}
