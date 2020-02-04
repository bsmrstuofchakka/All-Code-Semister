#include<stdio.h>
int main()
{
    int y,*x;
    y=5;
    x=&y;
    printf("%d %d %d",x,&y,*x);

    return 0;
}
