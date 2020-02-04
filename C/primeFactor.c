#include<stdio.h>
int main()
{
    int i=2,j=1,n,arr[1000];
    printf("PLEASE ENTER THE ANY NUMBER: ");
    scanf("%d",&n);
    while(n>1)
    {
        if(n%i==0)
        {
            n=n/i;
            arr[j]=i;
            j++;
        }
        else
            i++;
    }


    printf("\nPRIME FACTOR IS: ");
    for(i=1; i<j; i++)
        printf("%d ",arr[i]);
    printf("\n\n\n");
    return 0;
}
