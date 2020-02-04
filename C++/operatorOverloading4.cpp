#include<iostream>
using namespace std;

class summation
{
private:
    int height;
    int width;
public:
    summation();
    summation(int h,int w);
    void show();

    summation operator-(int x);
};

summation::summation()
{
    height=0;
    width=0;
}
summation::summation(int h,int w)
{
    height=h;
    width=w;
}

void summation::show()
{
    cout<<height<<" "<<width<<endl;
}

summation summation:: operator-(int x)
{
    summation temp;
    temp.height=height-x;
    temp.width=width-x;
    return temp;
}

int main()
{
    summation ob1(15,89),ob2;
    ob2=ob1-12;
    ob1.show();
    ob2.show();

    return 0;
}
