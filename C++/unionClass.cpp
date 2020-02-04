#include<iostream>
using namespace std;

union swap_byte
{
    void swap();
    void set_byte(unsigned short i);
    void show_word();

    unsigned short u;
    unsigned char c[2];


};

void swap_byte::swap()
{
    unsigned char t;

    t=c[0];
    c[0]=c[1];
    c[1]=t;
}

int main()
{
    swap_byte b;
    b.set_byte(49034);
    b.swap();
    b.show_word();
    return 0;

}
