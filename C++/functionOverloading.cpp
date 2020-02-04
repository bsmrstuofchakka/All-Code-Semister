#include<iostream>
using namespace std;

long abss(long);
int abss(int);
double abss(double);

int main()
{

    cout<<abss(-5)<<endl;
    cout<<abss(-11L)<<endl;
    cout<<abss(-8.4)<<endl;


    return 0;

}

long abss(long i)
{
    cout<<"print the long interger number: "<<endl;

    return i<0 ? -i:i;
}

int abss(int j)
{
    cout<<"print the integer number: "<<endl;

    return j<0 ? -j:j;
}

double abss(double f)
{
    cout<<"print the floating number: "<<endl;

    return f<0 ? -f:f;
}
