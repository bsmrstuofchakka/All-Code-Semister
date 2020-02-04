#include<iostream>
using namespace std;

class loc
{
private:
    int longitude;
    int latitude;
public:

    loc();
    loc(int ,int);
    void show();
    loc operator+ (loc op2);
    loc operator- (loc op2);
    //loc operator=(loc op2);
    //loc operator++();
};

loc::loc()
{

}

loc::loc(int lo,int la)
{
    longitude=lo;
    latitude=la;
}

void loc::show()
{
    cout<<longitude<<" ";
    cout<<latitude<<endl;
}

loc loc:: operator+ (loc op2)
{
    loc temp;
    temp.longitude=longitude+op2.longitude;
    temp.latitude=latitude+op2.latitude;
    temp;
}

loc loc:: operator-(loc op2)
{
    loc temp;
    temp.longitude=op2.longitude-longitude;
    temp.latitude=op2.latitude-latitude;
    return temp;
}

int main()
{

    loc ob1(4,8),ob2(3,4),ob3,ob4;

    ob1.show();
    ob2.show();

    ob3=ob1+ob2;


    ob3.show();

    ob4=ob2-ob1;

    ob4.show();


    return 0;
}
