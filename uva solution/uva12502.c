#include<stdio.h>
int main()
{
    long int i,x,y,z,t,a;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld%ld%ld",&x,&y,&z);
        a=(z/(x+y))*x+(z/(x+y))*(x-y)+(z%(x+y)) ;
        printf("%ld\n",a);

    }
    return 0;
}
