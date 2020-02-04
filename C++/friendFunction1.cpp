#include<iostream>
using namespace std;

class rectangle
{
private:
    int height;
    int width;

public:
    void set(int h,int w);
    int area();

};

class cost
{
private:
    int costrate;
public:
    int setvalue(int );
    int totalcost(rectangle );
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

int cost::setvalue(int a)
{
    costrate=a;
}

int cost::totalcost(rectangle d)
{
    return costrate*d.area();

}

int main()
{
    rectangle obj;
    obj.set(4,5);

    cost obj1;
    obj1.setvalue(300);


    cout<<"Area: "<<obj.area()<<endl;

    cout<<"Total cost: "<<obj1.totalcost(obj);
    return 0;
}

