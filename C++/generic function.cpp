#include<iostream>
using namespace std;

template<class X>void swapargs(X &a,X &b)
{
    X temp;

    temp=a;
    a=b;
    b=temp;

}

int main()
{
    int i=10,j=20;

    double x=10.1,y=23.3;
    char a='x',b='y';


    cout<<"Orginal i,j:"<<i<<' '<<j<<endl;
    cout<<"Orgial i,j :"<<i<<' '<<j<<endl;
    cout<<"Orginal i,j:"<<i<<' '<<j<<endl;


    swapargs(i,j);
    swapargs(x,y);
    swapargs(a,b);


    cout<<"Swapped i,j:"<<i<<' '<<j<<endl;
    cout<<"Swapped i,j:"<<x<<' '<<y<<endl;
    cout<<"Swapped i,j:"<<a<<' '<<b<<endl;


    return 0;
}
