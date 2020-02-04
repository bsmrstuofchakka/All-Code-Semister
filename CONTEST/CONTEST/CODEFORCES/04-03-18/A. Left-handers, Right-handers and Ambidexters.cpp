#include<bits/stdc++.h>
using namespace std;


int main()
{

    int a,b,c;

    cin>>a>>b>>c;

    if(a<=0||b<=0)
        cout<<"0"<<endl;

    else if((a+b+c)%2==0)
        cout<<a+b+c<<endl;
    else
        cout<<(a+b+c)-1<<endl;



    return 0;
}
