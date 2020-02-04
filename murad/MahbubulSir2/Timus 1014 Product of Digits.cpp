#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    int arr[100];

    cin>>n;
    int m=n;
    int i=2,j=0,mul=1,a;
    while(i<=7)
    {
        if(m==1)
            break;
        else if(m%i==0)
        {
            mul=mul*i;
            if(mul>9)
            {
                arr[++j]=mul/i;
                mul=1;
            }


        }
        else
            i++;

    }


    if(m!=1)
        cout<<"-1"<<endl;
    else
    {
        for(int i=1; i<=j; i++)
            cout<<arr[i];
    }


    return 0;
}
