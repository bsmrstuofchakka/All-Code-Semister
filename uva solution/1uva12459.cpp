#include<iostream>
#include<cstdio>
using namespace std;

int rec(int n,int i,int a,int b)
{

    if(i==n)
        return b;
    else
        rec(n,i+1,b,a+b);

}


int main()
{
    int n;

    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        int sum=rec(n,0,0,1);


        cout<<sum<<endl;
    }


    return 0;
}

