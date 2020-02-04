#include<iostream>
using namespace std;

class c1
{
public:

    int i;
    c1(int j)
    {
        i=j;
    }

};
int main()
{
    c1 ob(3);
    int *p;

    p=&ob.i;

    cout<<*p<<endl;
    return 0;
}
