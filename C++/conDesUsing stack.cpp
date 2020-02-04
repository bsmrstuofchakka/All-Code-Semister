#include<iostream>
using namespace std;

#define SIZE 100

class stack
{
    int stck[SIZE];
    int tos;

public:
    stack();
    ~stack();
    void push(int i);
    int pop();
};

stack::stack()
{
    tos=0;
    cout<<"Stack initialized"<<endl;
}
stack::~stack()
{
    cout<<"Stack Destroyed"<<endl;
}
void stack::push(int i)
{
    if(tos==SIZE)
    {
        cout<<"Stack is full"<<endl;
        return;
    }
    stck[tos]=i;
    tos++;
}
int stack::pop()
{
    if(tos==0)
    {
        cout<<"Stack is underflow"<<endl;
        return 0;
    }
    tos--;
    return stck[tos];
}

int main()
{
    stack a,b;
    a.push(1);
    b.push(2);

    a.push(3);
    b.push(4);

    cout<<a.pop()<<endl;
    cout<<a.pop()<<endl;
    cout<<b.pop()<<endl;
    cout<<b.pop()<<endl;

    return 0;
}



