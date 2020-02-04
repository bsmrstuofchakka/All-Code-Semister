#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    while(cin>>n)
    {
        if(n==2)
        {
            cout<<"00"<<endl;
            cout<<"01"<<endl;
            cout<<"81"<<endl;
        }
        else if(n==4)
        {
            cout<<"0000"<<endl;
            cout<<"0001"<<endl;
            int a=pow(10,n/2);
            for(int i=3025; i<3026; i++)
            {
                int m=i;

                int b=m%a;

                int c=m/a;
                int d=b+c;

                if(i==d*d)
                {

                    cout<<b<<endl;
                    cout<<c<<endl;
                    cout<<d<<endl;
                    cout<<i<<endl;
                }
            }
        }
        else if(n==6)
        {
            cout<<"000000"<<endl;
            cout<<"000001"<<endl;
            cout<<"998001"<<endl;
        }
        else if(n==8)
        {
            cout<<"00000000"<<endl;
            cout<<"00000001"<<endl;
            cout<<"99980001"<<endl;
        }
    }
    return 0;
}
