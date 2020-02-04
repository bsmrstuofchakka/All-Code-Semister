#include<iostream>
using namespace std;

class volume
{
private:
    int length;
    int width;
    int height;

public:
    volume()
    {
        cout<<"Constructor calling"<<endl;
    };

    void set(int l,int w,int h)
    {
        length=l;
        width=w;
        height=h;
    };

    int determineOfVolume()
    {
        return length*width*height;
    };

};

int main()
{
    volume obj[3];

    obj[0].set(3,4,5);



    cout<<obj[0].determineOfVolume()<<endl;


    return 0;
}

