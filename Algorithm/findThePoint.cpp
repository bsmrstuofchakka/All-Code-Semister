#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int p1,p2,q1,q2;
        cin>>p1>>p2>>q1>>q2;
        int r1,r2;
        r1=2*q1-p1;
        r2=2*q2-p2;
        cout<<r1<<" "<<r2<<endl;
    }


    return 0;
}
