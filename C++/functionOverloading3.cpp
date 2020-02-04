#include<iostream>
using namespace std;

float myfunc(float  i)
{
    return i;
}
double myfunc(double i)
{
    return -i;
}

int main()
{
    cout<<myfunc(10)<<endl;

    return 0;
}
