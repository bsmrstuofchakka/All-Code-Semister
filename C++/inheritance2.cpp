#include<iostream>
using namespace std;


class base
{
public:
    base()
    {
        cout<<"contructor base"<<endl;
    }
    ~base()
    {
        cout<<"destructor basa"<<endl;
    }
};

class derived1:public base
{
public:
    derived1()
    {
        cout<<"constructor derive1"<<endl;
    }
    ~derived1()
    {
        cout<<"destructor derive1"<<endl;
    }
};
class derived2:public derived1
{
public:
    derived2()
    {
        cout<<"constructor derived2"<<endl;
    }
    ~derived2()
    {
        cout<<"destructor derived2"<<endl;
    }
};



int main()
{
    derived2 ob;

    return 0;
}
