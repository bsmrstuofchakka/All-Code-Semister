#include<stdio.h>
#include<string.h>
int main()
{

    char arr1[100],arr2[100];
    gets(arr1);

    int i,n,j=0;
    n=strlen(arr1);

    for(i=n-1; i>=0; i--)
    {
        arr2[j]=arr1[i];
        j++;
    }
    arr2[j]='\0';
    printf("%s\n",arr2);



    return 0;
}
