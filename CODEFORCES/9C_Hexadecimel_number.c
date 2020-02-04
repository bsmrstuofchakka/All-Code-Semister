#include<stdio.h>
int main()
{
    long int b,r,h=0,n,i=1;
    scanf("%ld",&b);
    while(b>0)
    {
        r=b%10;
        h=h+r*i;
        i=i*2;
        b=b/10;
    }
    printf("%ld",h);
    return 0;
}
