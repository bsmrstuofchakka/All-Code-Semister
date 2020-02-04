#include<bits/stdc++.h>
using namespace std;



int main()
{
    string a,b,c;

    cin>>a>>b;
    int len1=a.size();
    int len2=b.size();


    cout<<len1<<" ";
    cout<<len2<<endl;

    c=a+b;
    cout<<c<<endl;

    string d=a;
    cout<<b[0];

    for(int i=1; i<len1; i++)
        cout<<a[i];

    cout<<" ";

    cout<<d[0];
    for(int i=1; i<len2; i++)
        cout<<b[i];

    cout<<endl;





    return 0;
}
