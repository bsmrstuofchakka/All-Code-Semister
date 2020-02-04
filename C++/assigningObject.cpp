#include<iostream>
using namespace std;
class rectangle
{
private:
    int height;
    int width;
public:
    int set(int ,int );
    int area();
};
int rectangle::area()
{
    return height*width;
}
inline int rectangle::set(int h,int w)
{
    height=h;
    width=w;
}
int main()
{
    rectangle obj,obj1;
    obj.set(4,5);
    obj1.set(6,7);
    obj1=obj;
    cout<<"Area "<<obj.area()<<endl;
    cout<<"Area "<<obj1.area()<<endl;
    return 0;
}
