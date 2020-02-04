#include<iostream>
using namespace std;
int main()
{
    int n,a,b,temp,sum=0;
    cin>>n>>a>>b;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    a=a*1;
    b=b*2;
    int j=0;
    while(j<n)
    {
        if(arr[j]<=a)
            j++;

    }





    return 0;
}
