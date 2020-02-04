#include<iostream>
using namespace std;

class rectangle
{
private:
    int height;
    int width;

public:
    rectangle(int ,int);
    int area();
};

rectangle::rectangle(int h,int w)
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
    rectangle obj[4]={rectangle(1,2),rectangle(3,4),rectangle(9,5),rectangle(5,6)};

    for(int i=0; i<4; i++)
        cout<<obj[i].area()<<endl;

    return 0;
}
