#include<bits/stdc++.h>
using namespace std;

int po(int n)
{
    int a=1;
    for(int i=1; i<=n; i++)
        a=10*a;
    return a;
}


int main()
{

    int a,b;
    int i=0;

    cin>>a>>b;
    int d=b;

    while(d>0)
    {
        ++i;
        d=d/10;

    }
    a=a*po(i);
    int j=0;


    while(b>0)
    {
        int e=b%10;
        a=a+pow(10,j)*e;
        b=b/10;
        j++;

    }
    int count=0;
    for(int k=2; k<=sqrt(a); k++)
    {
        if(k*k==a)
            count=1;

    }

    if(count==1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;



    return 0;
}
