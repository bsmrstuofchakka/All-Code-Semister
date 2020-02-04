#include<iostream>
using namespace std;

class reactangle
{
public:
    int length;
    int height;
    int area();


};

inline int reactangle::area()
{

    return length*height;

}

int main()
{

    int area;
    reactangle obj;
    obj.length=5;
    obj.height=8;
    cout<<"area: "<<obj.area()<<endl;

    return 0;
}
