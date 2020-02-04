#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

int sum(int a,int b)
{
    cout<<" "<<a<<endl;
    cout<<"+"<<b<<endl;
    cout<<"------"<<endl<<a+b<<endl;

}

int sub(int a,int b)
{
    cout<<" "<<a<<endl;
    cout<<"-"<<b<<endl;
    cout<<"------"<<endl<<a-b<<endl;
}

int mul(int a,char b)
{
    int c;
    c=strlen(b);
    cout<<a<<c;


}


int main()
{
    int t,a,b;
    char d;
    char c;
    cin>>t;
    for(int i=0; i<t; i++)
    {

        cin>>a;
        cin>>c;
        cin>>b;
        if(c=='+')
            sum(a,b);
        else if(c=='-')
            sub(a,b);
        else if(c=='*')
        {
            d=b;

            mul(a,d);


        }
    }

    return 0;
}
