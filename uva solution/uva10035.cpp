#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b;
    while(scanf("%ld%ld",&a,&b)==2&&a!=0||b!=0)
    {
        int c=0,count=0;
        if(b>a)
        {
            int d=a;
            a=b;
            b=d;
        }

        while(a!=0)
        {
            c=(a%10+b%10+c)/10;
            count=count+c;
            a=a/10;
            b=b/10;
        }
        if(count==0)
            cout<<"No carry operation."<<endl;
        else if(count==1)
            cout<<count<<" carry operation."<<endl;
        else
            cout<<count<<" carry operations."<<endl;
    }
    return 0;
}
