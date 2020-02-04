#include<iostream>
using namespace std;

class cube
{
private:
    int x;
    int y;
    int z;

public:
    cube(int ,int ,int);
    int volume();
};

int cube::volume()
{
    return x*y*z;
}
cube::cube(int i=2,int j=3,int k=1)
{
    x=i;
    y=j;
    z=k;
}
int main()
{
    cube ob1(9,8,1),ob2;
    cout<<ob1.volume()<<endl;
    cout<<ob2.volume()<<endl;

    return 0;
}
