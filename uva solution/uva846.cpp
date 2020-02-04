#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    for(int k=0; k<t; k++)
    {
        long int a,b;
        cin>>a>>b;

        if(a-b==0||a-b==1)
        {
               if(a-b==0)
                     cout<<"0"<<endl;
               else
                     cout<<"1"<<endl;

        }
        else

        {
            long int sum=(b-1)-(a+1);
            int c=sum%3;
            sum=sum/3;
            if(c!=0)
              sum=sum+1;
            cout<<sum+2<<endl;


        }
    }


    return 0;
}
