#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int add(int a,int b,int c)
{
    return a+b+c;
}
float add(float a,float b,float c)
{
    return a+b+c;
}
int main()
{
    cout<<"Addition: "<<add(2,3)<<endl;

    cout<<"Addition: "<<add(4,5.3,6)<<endl;

    cout<<"Additon: "<<add(2,4,5)<<endl;

    return 0;
}
