#include<iostream>
using namespace std;

template<class X>void swapargs(X &a,X &b)
{

    X temp;

    temp=a;
    a=b;
    b=temp;
    cout<<"Inside template swaprgs"<<endl;
}

void swapargs(double &a,double &b)
{
    int temp;

    temp=a;
    a=b;
    b=temp;

    cout<<"Inside swapages int specification"<<endl;
}

int main()
{
    int i=10,j=19;
    double a=12.34,b=54.32;
    char x='a',y='b';


    cout<<"orginal i j :"<<i<<' '<<j<<endl;
    cout<<"orginal a b :"<<a<<' '<<b<<endl;
    cout<<"orginal x y :"<<x<<' '<<y<<endl;

    swapargs(i,j);
    swapargs(a,b);
    swapargs(x,y);

    cout<<"swaped :"<<i<<' '<<j<<endl;
    cout<<"swaped :"<<a<<' '<<b<<endl;
    cout<<"swaped :"<<x<<' '<<y<<endl;

    return 0;
}
