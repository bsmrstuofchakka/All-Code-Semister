#include<iostream>
using namespace std;

const int size=10;

template <class stackType>class stack
{
    stackType stck[SIZE];
    int tos;

public:
    stack(){tos =0;}
    void push(stackType ob);
    stackType pop();
};

template <class stackType>void stack<stackType>::push(stackType ob)
