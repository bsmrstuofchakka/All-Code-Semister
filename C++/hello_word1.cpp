#include<iostream>
using namespace std;

class rectangle
{
private:
    int width;
    int height;
public:
    rectangle()
    {
        cout<<"Darling calling"<<endl;
    };
    ~rectangle()
    {
        cout<<"Darling out"<<endl;
    };

    int area()
    {
        return height*width;
    };
    void set(int h,int w)
    {
        height=h;
        width=w;
    }



};


int main()
{
    rectangle obj,obj1;

    obj.set(4,5);


    cout<<"Area :"<<obj.area()<<endl;
    return 0;
}
