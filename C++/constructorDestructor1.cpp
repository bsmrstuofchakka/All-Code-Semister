#include<iostream>
using namespace std;

#define size 100;

class stack
{
private:
    int stk[size];
    int tos;

public:
    stack();
    ~stack();
    void push();
    void pop();

};

stack::stack()
{
    tos =0;
    cout<<"Stack initialized"<<endl;
}


int main()
{
    stack obj;
    return 0;
}
