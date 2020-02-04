#include<iostream>
using namespace std;

class loc
{
private:
    int longitude;
    int latitude;

public:
    loc(){}
    loc(int lg,int lt);
    void show();
    loc operator+(loc op2);
    loc operator-(loc op2);
    loc operator=(loc op2);
    loc operator++();
};

loc::loc(int lg,int lt)
{
    longitude=lg;
    latitude=lt;
}
void loc::show()
{
    cout<<longitude<<" ";
    cout<<latitude<<" ";
}

loc loc::operator+(loc op2)
{
    loc temp;

    temp.longitude=longitude+op2.longitude;
    temp.latitude=latitude+op2.latitude;

    temp;
}

loc loc::operator-(loc op2)
{
    loc temp;

    temp.longitude=longitude-op2.latitude;
    temp.latitude=latitude-op2.latitude;
    return temp;
}
loc loc::operator=(loc op2)
{
    longitude=op2.longitude;
    latitude=op2.latitude;

    return *this;
}
loc loc::operator++()
{
    longitude++;
    latitude++;

    return *this;
}


int main()
{
    loc ob1(10,20),ob2(5,30),ob3(90,90);

    ob1.show();
    ob2.show();

    ++ob1;
    ob1.show();

    ob2=++ob1;

    ob1.show();
    ob2.show();

    ob1=ob2=ob3;
    ob1.show();
    ob2.show();

    return 0;
}
