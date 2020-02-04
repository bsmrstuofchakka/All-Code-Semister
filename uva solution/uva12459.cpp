 #include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;

    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        int a=0,b=1;
        long int sum;

        for(int i=0;i<n;i++)
        {
            sum=a+b;
            a=b;
            b=sum;

        }
        cout<<sum<<endl;
    }


    return 0;
}
