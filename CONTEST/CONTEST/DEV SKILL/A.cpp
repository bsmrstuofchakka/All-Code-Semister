#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        float a,b;
        cin>>a>>b;

        if((float)a%b==0)
            cout<<":wink:"<<endl;
        else
            cout<<":kick:"<<endl;
    }


    return 0;
}
