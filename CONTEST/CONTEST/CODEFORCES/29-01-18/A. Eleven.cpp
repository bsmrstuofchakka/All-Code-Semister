#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,c;
    a=0,b=1;
    int arr[1001]={0};
    cin>>n;

    for(int i=1;i<=n;i++)
    {

        c=a+b;
        if(c>1000)
            break;


        arr[c]=1;
        a=b;
        b=c;

    }


    for(int i=1;i<=n;i++)
    {
        if(arr[i]==1)
            cout<<"O";
        else
            cout<<"o";
    }
    cout<<endl;


    return 0;
}
