#include<iostream>
using namespace std;
class rectangle
{
private:
    int height;
    int width;
public:
    void set(int,int);
    int area();
};
void rectangle::set(int h,int w)
{
    height=h;
    width=w;
}
int rectangle::area()
{
    return height*width;
}
int main()
{
    rectangle *p;
    rectangle obj[5];
    obj[0].set(3,4);
    obj[1].set(5,8);
    obj[2].set(2,8);
    obj[3].set(1,9);
    obj[4].set(8,3);
    p=&obj[0];
    for(int i=0; i<5; i++)
        cout<<(p+i)->area()<<endl;
    return 0;
}
