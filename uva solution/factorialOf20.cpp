#include<iostream>
using namespace std;
int main()
{

    int i,j,temp,mul,n,arr[100000];

    cin>>n;

    mul=1;

    while(n>0)
    {
        mul=mul*n;
        n=n-1;




    }
    i=1;
    while(mul>0)
    {
        temp=mul%10;
        arr[i]=temp;
        mul=mul/10;
        i++;

    }

    for(j=i;j<0;j--)
        cout<<arr[j];


    return 0;
}
