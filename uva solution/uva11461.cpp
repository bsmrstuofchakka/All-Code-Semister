#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    while(scanf("%d%d",&a,&b)!=EOF&&a>0&&b>0)
    {
        int i=a;
        int sum = 0;
        while(i<=b)
        {
            c=sqrt(i);
            if(i==c*c)
                sum++;
            i++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
