#include<stdio.h>
int main()
{
    int i,j,a,b,n,arr[1000];
    printf("ENTER THE VALUES NUMBER: \n");
    scanf("%d",&n);
    printf("ENTER THE VALUE: \n");
    for(i=1;i<=n;i++)
        scanf("%d",&arr[i]);
    printf("ENTER THE SEARCHING VALUE: \n");
    scanf("%d",&a);
    for(i=1;i<=n;i++)
    {
        if(arr[i]==a)
            break;
    }
    if(arr[i]==a)
        printf("THE VALUES POSITION IS: %d\n",i);
    else if(arr[i]!=a)
        printf("NO");
    return 0;
}
