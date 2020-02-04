#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,n;

    cin>>n>>a>>b;

    if(b>a)
        swap(a,b);


    int c=0;
    while(n>1)
    {
        n=n/2;
        c++;
    }

    if(a%2!=0)
        a=a+1;
    if(b%2==0)
        b=b-1;
    int sum=0;
    for(int i=a; i<=b; i=i+2)
        sum=sum+i;

    if(c==sum)
        cout<<"Final!";
    else
        cout<<sum;





    return 0;
}

