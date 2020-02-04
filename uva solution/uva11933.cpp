#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int n;
    while(cin>>n&&n!=0)
    {
        int i=0,temp1=0,temp2=0,k=1;

        while(n>0)
        {
            int a=n%2;
            if(a==1&&k%2==1)
            {
                temp1=temp1+a*pow(2,i);
                ++k;
            }
            else if(a==1&&k%2==0)
            {
                temp2=temp2+a*pow(2,i);
                ++k;
            }
            ++i;
            n=n/2;
        }
        cout<<temp1<<" "<<temp2<<endl;
    }
    return 0;
}
