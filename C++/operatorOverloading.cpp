#include<iostream>
using namespace std;

class loc
{
private:
    int longitude;
    int latitude;
public:
    //loc(){}
    loc(int lg,int lt);
    void show();
    loc operator+(loc op2);
};

loc::loc(int lg,int lt)
{
    longitude=lg;
    latitude=lt;
}

void loc::show()
{
    cout<<longitude<<" ";
    cout<<latitude<<endl;
}

loc loc::operator+(loc op2)
{
    loc temp;

    temp.longitude=longitude+op2.longitude;
    temp.latitude=latitude+op2.latitude;
    return temp;
}

int main()
{
    loc ob1(3,6),ob2(4,7);
    ob1.show();
    ob2.show();

    ob1=ob1+ob2;

    ob1.show();

    return 0;
}
