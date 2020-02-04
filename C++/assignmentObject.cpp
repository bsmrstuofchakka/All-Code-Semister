#include<iostream>
using namespace std;

class rectangle
{
private:
    int height;
    int width;
public:
    void set(int ,int );
    int area();



};

int rectangle::area()
{
    return height*width;
}

void rectangle::set(int h,int w)
{
    height=h;
    width=w;
}

int main()
{
    rectangle obj;
    cout<<"Area "<<obj.area()<<endl;

    return 0;
}
