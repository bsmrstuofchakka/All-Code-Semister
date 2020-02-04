#include<iostream>
using namespace std;
int main()
{

    int *ptr;
    ptr=new int(4);
    cout<<*ptr<<endl;
    *ptr=7;
    cout<<*ptr<<endl;
    *ptr=9;
    cout<<*ptr<<endl;
    delete(ptr);
    *ptr=8;
    cout<<*ptr<<endl;


    return 0;
}
