#include<iostream>
using namespace std;

class c1
{
private:
    int i;
    int h;

public:
    c1(int j,int k)
    {
        h=j;
        i=k;
    }
    c1()
    {}
    int get_i()
    {
        return i;
    }
    int get_h()
    {
        return h;
    }
};

int main()
{
    c1 ob1[3]=
    {
        c1(1,2),
        c1(3,4),
        c1(5,6)
    };
    c1 ob2[34];

    for(int i=0; i<3; i++)
    {
        cout<<ob1[i].get_h();
        cout<<" ";
        cout<<ob1[i].get_i()<<" ";
    }

    return 0;
}
