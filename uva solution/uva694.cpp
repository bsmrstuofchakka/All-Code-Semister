#include<bits/stdc++.h>
using namespace std;
int sequence(int n,int l,int i)
{
    if(n==1)
        return ++i;
    else if(n>l)
        return i;
    else if(n%2==0)
        sequence(n/2,l,++i);
    else
        sequence(3*n+1,l,++i);
}
int main()
{
    int n,l,a=1;
    while(scanf("%d%d",&n,&l)==2)
    {
        int b=sequence(n,l,0);
        cout<<"Case "<<a<<": "<<"A = "<<n<<", ";
        cout<<"limit = "<<l<<", ";
        cout<<"number of terms = "<<b<<endl;
        a++;
    }
    return 0;
}
