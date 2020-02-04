#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,k;
    cin>>n>>k;


    int i=1;
    int arr[100];

    while(n>0)
    {
        int a=n%10;
        n=n/10;

        if(i<=k)
            arr[i]=a;
        else
            arr[i]=9;

        i++;

    }
    for(int j=i-1;j>=1;j--)
        cout<<arr[j];
    cout<<endl;




    return 0;
}
