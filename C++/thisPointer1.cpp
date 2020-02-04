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

int rectangle::area()
{
    return height*width;
}
void rectangle::set(int height,int width)
{
    this->height=height;
    this->width=width;
}

int main()
{
    rectangle obj;
    obj.set(2,8);
    cout<<"Area :"<<obj.area()<<endl;
    return 0;
}
