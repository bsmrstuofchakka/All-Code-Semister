#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int arr[100];

    int len=s.size();
    for(int i=0;i<len;i++)
    {
        arr[i]=s[i]-'0';
    }
    for(int i=0;i<len;i++)
        cout<<arr[i]<<" ";

    cout<<endl;

    return 0;
}
