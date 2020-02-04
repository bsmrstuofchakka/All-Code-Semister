#include<bits/stdc++.h>
using namespace std;


int main()
{
    int h1,h2,m1,m2;
    while(cin>>h1)
    {

        //scanf("%d:%d",&h1,&m1);

        char ch1,ch2;
        int a,b=0,m,h;
        cin>>ch1>>m1;
        cin>>h2>>ch2>>m2;

        h=h1+h2;
        if(h%2==1)
            b=30;
        h=h/2;

        m=(m1+m2)/2;
        m=m+b;
        if(m>59)
        {
            m=m-60;
            h=h+1;
        }
        if(h>=0&&h<=9)
            cout<<"0"<<h<<":";
        else
            cout<<h<<":";

        if(m>=0&&m<=9)
            cout<<"0"<<m<<endl;
        else
            cout<<m<<endl;





    }
    return 0;
}
