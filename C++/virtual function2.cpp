#include<iostream>
using namespace std;

class base
{
public:
    virtual void vfunc()
    {
        cout<<"This is base function"<<endl;
    }
};

class derived1:public base
{
    void vfunc()
    {
        cout<<"This is derived1 function"<<endl;
    }
};

class derived2:public derived1
{
    void vfunc()
    {
        cout<<"This is derived2 function"<<endl;
    }
};

int main()
{
    base *p,b;

    derived1 d1;
    derived2 d2;

    p=&b;
    p->vfunc();

    p=&d1;
    p->vfunc();

    p=&d2;
    p->vfunc();

    return 0;
}

