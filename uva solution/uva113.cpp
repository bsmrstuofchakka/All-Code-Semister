#include<bits/stdc++.h>
using namespace std;
int main()
{
    double p,n,k;
    while(cin>>n>>p)
    {
        k=pow(p,(1/n));
        printf("%.lf\n",k);
    }
    return 0;
}
