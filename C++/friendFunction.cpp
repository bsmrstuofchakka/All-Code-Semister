#include<iostream>
using namespace std;

class X
{
private:
    int height;
    int width;
public:
   void set_w(int a,int b);
   friend area();
};
void x:set_w(int a,int b)
{
    heiget=
}


X::x1(int h,int w)
{
    height=h;
    width=w;
}
X operator+(X x,int i)
{
    X temp;
    temp.height=x.height+i;
    temp.width=x.width+i;
    return temp;
}

void show()
{
    cout<<"height: "<<height<<"width "<<width<<endl;
}



int main()
{
    X x1(50,75);
    X x2;
    x2=x1+25;
    x1.show();
    x2.show();

    return 0;
}
