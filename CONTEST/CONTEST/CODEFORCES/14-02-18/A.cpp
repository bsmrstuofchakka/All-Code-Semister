#include<bits/stdc++.h>
using namespace std;

int main()
{

    long int arr[100000],arr1[100000];
    long int n,m;
    cin>>n>>m;

    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr,arr+n);
    long int a=arr[n-2];


    for(int i=0; i<m; i++)
        cin>>arr1[i];

    sort(arr1,arr1+m);

    long int b=arr1[m-1];



    int c[100],index=0;

    while(a<b)
    {
        long int w=b;
        b=a;
        a=w;
    }


    int d,f,e=0;

    while(a>0||e>=9)
    {
        d=a%10;
        e=e+d*b;
        f=e%10;
        c[++index]=f;
        e=e/10;
        a=a/10;


    }
    if(index>1)
        c[++index]=e;

    for(int i=1; i<=index; i++)
        cout<<c[i];
    cout<<endl;





    return 0;
}
