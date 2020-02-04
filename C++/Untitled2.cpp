#include<iostream>
using namespace std;
class myclass
{
public:
    int i,k,j;

};
int main()
{
    myclass a, b;
    a.i=100;
    a.j=4;
    a.k=a.i*a.j;
    b.k=12;
    cout<<a.k<<" "<<b.k;
    return 0;



}































