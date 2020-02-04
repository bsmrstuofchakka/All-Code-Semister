#include<iostream>
using namespace std;
int main()
{
    int n,x,flag = 0,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    cin>>x;
    for( i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            flag = 1;
            break;
        }
    }


    if(flag == 1)
    cout<<i+1;
    else
        cout<<"-1";
    return 0;
}
