#include<iostream>
using namespace std;

double myfunc(double i)
{
    return i;
}

float myfunc(int fahim)
{
    return fahim;
}


int main()
{


    cout<<myfunc('h')<<endl;
    cout<<myfunc(10);

    return 0;
}
