#include<iostream>
using namespace std;
class rectangle
{
private:
    int height;
    int width;
public:
    rectangle(int);
    int area();
};
rectangle::rectangle(int h)
{
    height=h;
    width=h;
}
int rectangle::area()
{
    return height*width;
}
int main()
{
    rectangle obj[5]={1,2,3,4,5};



    for(int i=0; i<5; i++)
        cout<<obj[i].area()<<endl;

    return 0;
}
