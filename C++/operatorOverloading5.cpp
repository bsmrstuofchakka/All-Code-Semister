#include<iostream>
using namespace std;

class rectangle
{
private:
    int height;
    int width;

public:
    void show()
    {
        cout<<"height :"<<height<<endl;
        cout<<"widht  :"<<width<<endl;
    }

    void set(int a,int b)
    {
        height=a;
        width=b;
    }

    rectangle operator+(rectangle x);

};

rectangle rectangle::operator+(rectangle x)
{
    rectangle temp;

    temp.height=x.height+height;
    temp.width=x.width+width;

    return temp;
}

int main()
{
    rectangle ob1,ob2;
    ob1.set(4,5);
    ob2.set(6,7);

    ob1.show();
    ob2.show();

    ob1=ob1+ob2;

    ob1.show();


    return 0;
}

