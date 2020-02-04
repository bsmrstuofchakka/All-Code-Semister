#include<iostream>
using namespace std;

class reactangle
{
public:
    int height;
    int width;

};

int main()

{
    int area;
    reactangle obj;
    obj.height=5;
    obj.width=6;
    area=obj.height*obj.width;
    cout<<"AREA: "<<area<<endl;
    return 0;
}
