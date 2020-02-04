#include<bits/stdc++.h>
using namespace std;

int fiboncci(int n,int j,unsigned long long int a,unsigned long long int b)
{
    unsigned long long int sum;
    if(n==j)
        return b;
    else
    {
        sum=a+b;
        fiboncci(n,++j,b,sum);

    }
}

int main()
{
    unsigned long long int n;
    while(cin>>n)
    {
        unsigned long long int sum=fiboncci(n,1,0,1);
        cout<<"The Fibonacci number for "<<n<<" is "<<sum<<endl;
    }


    return 0;
}
