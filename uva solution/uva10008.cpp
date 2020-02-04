#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;



int main()
{

    int i,len;

    char str[50];
    char ch,*str1;

    gets(str);
    str1=strupr(str);
    printf("%s",str1);

    len=strlen(str1);

    printf("%d",len);







    return 0;
}
