#include<iostream>
using namespace std;



int fact(int n)
{
    int i,fac=1;
    for(i=2*n; i>0; i--)
        fac=fac*i;
    return fac;
}


int powr(int x,int n)
{
    int i,mul=1;
    for(i=2*n; i>0; i--)
        mul=mul*x;
    return mul;
}

int detOfPosNeg(int n)
{
    int i,a=1;
    for(i=n; i>0; i--)
        a=a*(-1);
    return a;
}




int main()
{
    int i,x;
    float cosx=0;
    cout<<endl<<"PLEASE ENTER THE VALUEOF X:   ";
    cin>>x;

    for(i=0; i<=3; i++)
        cosx=cosx+(detOfPosNeg(i)*powr(x,i))/(float)fact(i);


    cout<<endl<<"cosx=1-x*x/2!+x*x*x*x/4!-x*x*x*x*x*x/6!:  "<<cosx<<endl;
    return 0;

}
