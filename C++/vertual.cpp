#include<iostream>
using namespace std;


class base
{
public:
    virtual void vfunc()
    {
        cout<<"base"<<endl;
    }
};
class d1:public base{

public:
    void vfunc()
    {
        cout<<"d1"<<endl;
    }
};
class d2:public base{

public:

};


int main()
{
    base *p;
    d2 ob;
    p=&ob;
    p->vfunc();


    return 0;
}
