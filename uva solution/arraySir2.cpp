#include<iostream>
using namespace std;

class volume
{
private:
    int length;
    int width;
    int height;

public:
    volume(int l,int w,int h)
    {
        length=l;
        width=w;
        height=h;
    };
    int scan()
    {
        cin<<l<<w<<h;
    }


    int determineOfVolume()
    {
        return length*width*height;
    };

};

int main()
{
    volume obj[3];
    obj.scan();
    for(int i=0; i<3; i++)
        cout<<obj[i].determineOfVolume()<<endl;


    return 0;
}

