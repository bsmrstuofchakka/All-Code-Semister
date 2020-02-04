#include<stdio.h>
int main()
{
    int *ptr;
    char a="kkgrk";
    ptr=(int*)&a;
    printf("%X",*ptr);
    return 0;


}
