#include<iostream>
using namespace std;
class rectangle
{
private:
    int height;
    int width;
public:
    int area();
    rectangle(int ,int);
    ~rectangle();
};
int rectangle::area()
{
    return height*width;
}
rectangle::rectangle(int h,int w)
{
    height=h;
    width=w;
    cout<<"CONSTRUCTOR "<<area()<<endl;
}
rectangle::~rectangle()
{
    cout<<"DESTRUCTOR "<<area()<<endl;
}
int main()
{
    rectangle obj(4,5),obj1(6,4);
    return 0;
}
