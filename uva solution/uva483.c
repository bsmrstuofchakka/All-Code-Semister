#include<stdio.h>
#include<string.h>

int main()
{
    char ch;

    while(ch=getchar()!=' ')
    {
        printf("%s",ch);
    }

    return 0;
}
