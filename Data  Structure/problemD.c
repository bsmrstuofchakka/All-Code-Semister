#include<stdio.h>
int main()
{
    long long int d,k,a,b;
    long long int t,min_t;
    scanf("%lld%lld%lld%lld%lld",&d,&k,&a,&b,&t);
    if(a<b&&t<=1000000&&k>=1&&1<=d&&d<=100000000000)
    {


    min_t=k*b+a*b+t/d;
    printf("%d",min_t);}
    return 0;
}
