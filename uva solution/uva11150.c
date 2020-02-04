#include<stdio.h>
int main()
{
    int n,c;
    while(scanf("%d",&n)!=EOF)
    {
        c=n+n/2;
        printf("%d\n",c);
    }
    return 0;
}
