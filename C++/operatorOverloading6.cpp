#include<iostream>
using namespace std;

class geography
{
private:
    int longitude;
    int latitude;

public:
    geography(){};
    geography(int a,int b)
    {
        longitude=a;
        latitude=b;
    }

    void show()
    {
        cout<<"longitude :"<<longitude<<endl;
        cout<<"latitude :"<<latitude<<endl;
    }
    geography operator*(geography x);
};



geography geography::operator*(geography x)
{
    geography temp;

    temp.longitude=x.longitude*longitude;
    temp.latitude=x.latitude*latitude;

    return temp;
}

int main()
{
    geography ob1(2,4),ob2(3,5);
    ob1.show();
    ob2.show();

    ob1=ob1*ob2;

    ob1.show();

    return 0;
}
