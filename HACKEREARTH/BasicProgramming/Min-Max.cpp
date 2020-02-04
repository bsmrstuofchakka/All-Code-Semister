#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    int count =1;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        if(arr[i]<1||arr[i]>n)
            count=0;

    }





    if(count==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
