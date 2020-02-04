#include<iostream>
using namespace std;

int main()
{
    int t,n,i,sum;
    cin>>t;
    for(i=t; i>0; i--)
    {
        cin>>n;
        int p;
        sum=0;
        p=n-1;
        while(p>0)
        {
            if(n%p==0)
                sum=sum+p;
            p--;

        }
        cout<<sum<<endl;
    }

    return 0;
}
