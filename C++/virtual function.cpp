#include<iostream>
using namespace std;

class base
{
public:
    void func()
    {
        cout<<"This is base's vfunc()."<<endl;
    }
};


class derived1:public base
{
public:
    void vfunc()
    {
        cout<<"This is derived's vfunc()"<<endl;
    }
};

class derived2:public base
{
public:
    void vfunc()
    {
        cout<<"This is derived2's vfunc"<<endl;
    }
};


int main()
{

    base *p,b;
    derived1 d1;
    derived2 d2;



    return 0;
}
