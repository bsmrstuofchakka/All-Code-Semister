#include<bits/stdc++.h>
using namespace std;



int main()
{

    int t;
    cin>>t;

    for(int l=1; l<=t; l++)
    {

        int a,b;
        cin>>a>>b;
        for(int k=0; k<b; k++)
        {
            for(int i=1; i<=a; i++)
            {
                for(int j=1; j<=i; j++)
                    cout<<i;
                cout<<endl;
            }

            for(int i=a-1; i>0; i--)
            {
                for(int j=1; j<=i; j++)
                    cout<<i;
                cout<<endl;
            }

            if(l!=t||k!=b-1)
                cout<<endl;


        }



    }


    return 0;
}
