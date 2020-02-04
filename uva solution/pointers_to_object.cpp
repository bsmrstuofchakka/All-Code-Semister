#include<iostream>
using namespace std;

class c1
{
private:
    int i;

public:
    c1(int);
    int get_i();
};
c1::c1(int j)
{
    i=j;
}
int c1::get_i()
{
    return i;
}

int main()
{
    c1 obj(803), *p;
    p=&obj;
    cout<<p->get_i()<<endl;
    cout<<obj.get_i();

    return 0;
}
