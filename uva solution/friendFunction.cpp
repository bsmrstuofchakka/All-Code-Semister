#include<iostream>
using namespace std;



class rectangle
{
private:
    int height;
    int width;

public:
    friend int set(int h,int w);
    void area();
};



void rectangle::area()
{
    return height*width;
}

int set(int h,int w)
{
    height=h;
    width=w;
}

int main()
{
    rectangle obj;
    obj.set(3,5);
    cout<<"Area :"<<obj.area()<<endl;


    return 0;
}
