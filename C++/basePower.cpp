#include<iostream>
using namespace std;
int main()
{
    int i,a,n,mul=1;
    cout<<endl<<"PLEASE ENTETR THE BASE NUMBER:   ";
    cin>>n;
    cout<<endl<<"PLEASE ENTER THE POWER NUMBER:   ";
    cin>>a;
    for(i=a; i>0; i--)
        mul=mul*n;
    cout<<endl<<"THE OUTPUT OF BASE POWER NUMBER:   "<<mul<<endl;
    return 0;
}
