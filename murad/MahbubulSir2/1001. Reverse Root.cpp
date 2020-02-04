#include<bits/stdc++.h>
using namespace std;

int main()
{

    double n;
    double arr[128*1024];
    int i=0;
    while(cin>>n)
    {
        arr[i]=sqrt(n);
        i++;
    }
    for(int j=i-1;j>=0;j--)
        printf("%.4lf\n",arr[j]);

    return 0;
}
