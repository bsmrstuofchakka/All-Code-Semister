#include<iostream>
using namespace std;

class abc
{
public:
    abc()
    {
        cout<<"Cons"<<endl;
    };
    ~abc()
    {
        cout<<"Dest"<<endl;
    };

};

int main()
{

    abc a;

    abc b=a;

    return 0;
}
