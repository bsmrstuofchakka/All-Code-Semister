#include<iostream>
using namespace std;


class rectangle
{
private:
    int height;
    int weight;


public:
    int area();
    rectangle(int ,int);
    ~rectangle();
};

rectangle::rectangle(int h,int w)
{
    height=h;
    weight=w;

    cout<<"Constructor"<<endl<<area()<<endl;

}

rectangle::~rectangle()
{
    cout<<"Destructor"<<endl<<area()<<endl;
}

int rectangle::area()
{
    return height*weight;
}



int main()
{
    rectangle obj(3,4),obj1(5,4);

    //cout<<"Area: "<<obj.area()<<endl;


    return 0;
}





