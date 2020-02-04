#include<stdio.h>
int main()
{
    int i,a,n,mul=1;
    printf("PLEASE ENTETR THE BASE NUMBER: \n");
    scanf("%d",&n);
    printf("PLEASE ENTER THE POWER NUMBER:  \n");
    scanf("%d",&a);
    for(i=a; i>0; i--)
        mul=mul*n;
    printf("THE OUTPUT OF BASE POWER NUMBER:%d   ",mul);
    return 0;
}
