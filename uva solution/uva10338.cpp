#include<bits/stdc++.h>
using namespace std;


int factorial(unsigned long long int n)
{
    if(n>1)
        return n*factorial(n-1);
    else
        return 1;
}



int main()
{

    unsigned long long int n;
    cin>>n;

    unsigned long long int p=factorial(n)/2;

    cout<<p<<endl;



    return 0;
}
