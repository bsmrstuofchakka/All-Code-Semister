#include<iostream>
using namespace std;

int myfunc(int i);
double myfunc(double i);

int main()
{
    cout<<myfunc(10)<<endl;
    cout<<myfunc(12.34)<<endl;

    return 0;
}

int myfunc(int i)
{
    return i;
}
double myfunc(double i)
{
    return i;
}

