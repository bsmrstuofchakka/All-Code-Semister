#include<iostream>
using namespace std;

class X
{
private:
    int x;
public:

    void SetX(int a){x=a;}
    int GetX(){return x;}

};

void func(X &x)
{

   cout<<x.GetX()<<endl;
   x.SetX(15);
   cout<<x.GetX()<<endl;

}

int main()
{

    X x1;
    x1.SetX(10);
    func(x1);
    cout<<x1.GetX();

    return 0;
}
