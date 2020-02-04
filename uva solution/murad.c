#include<stdio.h>
int main()
{
    int i,j,k,a,b,c=1,m,n,arr[10000];
    scanf("%d%d",&m,&n);
    while(n<m)
    {
        a=m;
        m=n;
        n=a;
    }
    for(i=m; i<=n; i++)
    {
        for(j=2; j<i; j++)
        {
            b=i%j;
            if(b==0)
                break;
        }
        if(b!=0)
        {
            arr[c]=i;
            c++;
        }
    }
    for(k=1; k<c; k++)
        printf("%d\n",arr[k]);

    return 0;
}
