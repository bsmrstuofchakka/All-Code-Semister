#include<bits/stdc++.h>
using namespace std;

int rev(int p)
{
    int a=0;
    while(p>0)
    {
        a=a*10+p%10;
        p=p/10;
    }
    return a;
}

int prime(int n)
{
    int i=2,p=1;
    while(i<n)
    {
        if(n%i==0)
        {
            p=0;
            break;
        }
        i++;
    }

    if(p==1)
        return 1;
    else
        return 0;



}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a=prime(n);
        if(a==0)
            cout<<n<<" is not prime."<<endl;
        else
        {
            int b=rev(n);
            int c=prime(b);
            if(a==c)
                cout<<n<<" is emirp."<<endl;
            else
                cout<<n<<" is prime."<<endl;
        }

    }

    return 0;
}
