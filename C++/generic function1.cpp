#include<iostream>
using namespace std;



template <class type1,class type2>void myfunc(type1 x,type2 y)
{

    cout<<x<<' '<<y<<endl;
}



int main()
{
    myfunc(10,"I like c++");

    myfunc(98.6,19);

    return 0;
}
