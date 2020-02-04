#include<iostream>
using namespace std;


char myfunc(unsigned char ch);
char myfunc(char ch);


int main()
{
    cout<<myfunc('c')<<endl;
    cout<<myfunc(7)<<endl;

    return 0;
}
char myfunc(unsigned char ch)
{
    return ch-1;
}
char myfunc(char ch)
{
    return ch+1;
}
