#include<stdio.h>
int main()
{

    long int a,b,m;
    char ch;
    scanf("%ld %c %ld",&a,&ch,&b);
    if(ch=='%')
        m=a%b;
    else
        m=a/b;
    printf("%ld\n",m);
    return 0;
}
