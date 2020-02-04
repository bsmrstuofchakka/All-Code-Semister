#include<stdio.h>
int main()
{

    int i,j,temp,mul,n,arr[100000];

    scanf("%d",&n);

    mul=1;
    arr[i]=0;

    while(n>1)
    {
        x=x*arr[i]+
        mul=mul*n;
        n=n-1;


    }
    printf("%d\n",mul);
    i=0;
    while(mul>0)
    {
        arr[i]=mul%10;


        mul=mul/10;
        i++;

    }

    return 0;
}
