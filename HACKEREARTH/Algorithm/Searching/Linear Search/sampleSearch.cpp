#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cin>>k;
    int j=0;
    while(j<=n)
    {
        if(arr[j]==k)
        {
            cout<<j<<endl;
            break;
        }
        j++;

    }

    return 0;
}
