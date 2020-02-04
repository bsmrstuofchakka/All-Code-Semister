#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    long int arr[200]= {0},len,max=-1;


    while(cin>>s)
    {

        if(s=="0")
            break;

        len=s.size();

        int c=0,a,carry=0;
        for(int i=len-1; i>=0; i--)
        {
            arr[c]=s[i]-'0'+arr[c]+carry;
            a=arr[c]%10;
            carry=arr[c]/10;
            arr[c]=a;
            c++;

        }
        while(carry>0)
        {
            arr[c]=arr[c]+carry;
            a=arr[c]%10;
            carry=arr[c]/10;
            arr[c]=a;
            c++;
        }
        if(c>max)
            max=c;

    }

    for(int i=max-1; i>=0; i--)
        cout<<arr[i];
    cout<<endl;


    return 0;
}
