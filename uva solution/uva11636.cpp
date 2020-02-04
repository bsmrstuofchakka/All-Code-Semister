#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,k=0;
    while(cin>>n&&n>0)
    {
        k++;
        int sum=1,j=0;


        for(int i=0; i<=sqrt(n); i++)
        {
            if(n==1)
            {
                cout<<"Case "<<k<<": "<<"0"<<endl;
                break;
            }

            sum=sum*2;
            j++;

            if(sum>=n)
            {
                cout<<"Case "<<k<<": "<<j<<endl;
                break;
            }
        }


    }



    return 0;
}
