#include<iostream>
using namespace std;


int main()
{

    int t,n,m;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n;
        m=n;
        int temp,j=0,k=0;

        while(n>0)
        {
            if(n%2==1)
                j++;

            n=n/2;
        }

        while(m>0)
        {

            temp=m%10;
            while(temp>0)
            {
                if(temp%2==1)
                    k++;
                temp=temp/2;
            }
            m=m/10;

        }

        cout<<j<<" "<<k<<endl;


    }


    return 0;
}
