#include<iostream>
using namespace std;

int rev(unsigned long long int  n)
{
    int arr[];
    while(j<=0)
    {
        int j=0;
        if(arr[]=='0')

    }
    int m=0,a;
    while(n>0)
    {
        a=n%10;
        m=m*10+a;
        n=n/10;
    }
    return(m);
}

int main()
{

    unsigned long long int m,n,t;
    int p;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>m>>n;


      p=rev(m)+rev(n);
      cout<<rev(p)<<endl;
    }
    return 0;
}
