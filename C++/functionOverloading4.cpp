#include<iostream>
using namespace std;

char myfunc(int i)
{
    return i;
}
char myfunc(int i,int j)
{
    return i*j;
}

int main()
{

    cout<<myfunc()<<endl;
    cout<<myfunc(343)<<endl;

    return 0;
}
