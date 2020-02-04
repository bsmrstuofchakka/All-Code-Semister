#include<bits/stdc++.h>
using namespace std;


int main()
{

    int a,b,c;
    cin>>a>>b;

    if((a+b)%2==0)
        c=(a+b)/2;
    else
        c=(a+b)/2+1;


    if(b<a)
    {
        swap(a,b);
    }
    int sum=0;
    for(int i=a; i<=b; i++)
    {

        sum=sum+abs(i-c);

    }
    cout<<sum<<endl;



    return 0;
}
