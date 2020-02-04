#include<iostream>
using namespace std;

class rectangle
{
private:
    int height;
    int width;
public:
    void set(int ,int);
    int area();
};


void rectangle::set(int a,int b)
{
    height=a;
    width=b;
}

inline int rectangle::area()
{
    return height*width;
}

int main()
{

    rectangle obj;
    rectangle obj1;

    obj.set(4,5);
    obj1.set(5,6);



    cout<<endl<<"Area :"<<obj.area();
    cout<<endl<<"Area :"<<obj1.area();

    obj1=obj;
    cout<<endl<<"Area :"<<obj.area();
    cout<<endl<<"Area :"<<obj1.area();



    return 0;
}
