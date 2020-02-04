#include<iostream>
using namespace std;

int myfunc(int i);
int myfunc(int i,int j);

int main()
{
    cout<<myfunc(4)<<endl;

    cout<<myfunc(3,5)<<endl;
    return 0;
}

int myfunc(int i)
{
    return i;
}
int myfunc(int i,int j)
{
    return i*j;
}
