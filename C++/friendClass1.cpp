#include<iostream>
using namespace std;

class myclass
{
private:
    int a;
    int b;

public:
    void set_ab(int i,int j);
    friend int sum(myclass x);
};

void myclass::set_ab(int i,int j)
{
    a=i;
    b=j;
}
int sum(myclass x)
{
    return x.a+x.b;
}

int main()
{
    myclass ob;
    ob.set_ab(4,29);
    cout<<sum(ob)<<endl;

    return 0;
}
