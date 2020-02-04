#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {



        long long int n,m,fib[100000];
        cin>>n>>m;
        fib[0]=0;
        fib[1]=1;

        int odd=0,even=0;

        for(int i=2; i<=m+2; i++)
            fib[i]=fib[i-1]+fib[i-2];
        for(int i=n+1; i<=m+1; i++)
        {

            if(fib[i]%2==0)
                ++even;
            else
                ++odd;
        }

        cout<<"Case "<<k<<":"<<endl;
        cout<<"Odd = "<<odd<<endl;
        cout<<"Even = "<<even<<endl;






    }

    return 0;
}



