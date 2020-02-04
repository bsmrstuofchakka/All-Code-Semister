#include<bits/stdc++.h>
using namespace std;

int digit_mul(long long int n)
{
    long long temp=1;
    while(n>0)
    {
        int a=n%10;
        temp=temp*a;
        n=n/10;
    }
    return temp;
}

int main()
{
    long long int n;


    while(cin>>n)
    {
        long long int m=n,p=n,x,y;
        long long int count=0,q=1,t=1,ma=-1;
        while(p>0)
        {
            int a=p%10;
            a=a+10;
            int b=a-9;
            m=m-b*t;



            x=digit_mul(n);
            y=digit_mul(m);


            x=max(x,y);
            ma=max(ma,x);


            n=m;



            t=t*10;
            p=n;
            p=p/t;


        }

        cout<<ma<<endl;




    }



    return 0;
}
