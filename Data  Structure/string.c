#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[100],ch2[100];
    int n;
    gets(ch1);
    gets(ch2);
    scanf("%d",&n);
    strncpy(ch1,ch2,n);
    printf("%s",ch1);
    return 0;
}
