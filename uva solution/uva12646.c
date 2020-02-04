#include<stdio.h>
int main()
{
    int  a,b,c;
    char sum;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if(a==b&&b==c)
            sum='*';
        else if(a==b&&a!=c)
            sum='C';
        else if(a!=b&&b==c)
            sum='A';
        else if(a!=b&&a==c)
            sum='B';

        printf("%c\n",sum);
    }

    return 0;
}
