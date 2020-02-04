#include<stdio.h>
int main()
{
    int i,n,k,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0; i<n; i++)
    {
        if(k==a[i])
            c=i;
    }
    printf("%d\n",c);

    return 0;
}
