#include<stdio.h>
#include<string.h>
int main()
{


    char arr1[10000],arr2[10000];
    while(1){

    gets(arr1);

    int i,n,j=0;

    for(i=0; arr1[i]!='\0'; i++)
    {
        if(arr1[i]!=' ')
        {
            arr2[j]=arr1[i];
            j++;

        }
        else
        {
            arr2[j]='\0';
            strrev(arr2);
            printf("%s ",arr2);
            j=0;
        }
    }




    arr2[j]='\0';
    strrev(arr2);
    printf("%s\n",arr2);

    }

    return 0;
}
