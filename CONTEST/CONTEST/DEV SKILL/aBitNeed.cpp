#include<iostream>
using namespace std;


int main()
{
    int t,n;

    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n;
        int a,sum=1;

        int j=0;
        while(n>0)
        {

            a=n%2;
            j++;
            if(a==1)
                sum=j;

            n=n/2;

        }
        cout<<sum<<endl;

    }



    return 0;
}
