#include<stdio.h>
int main()
{
    int i,j,n,sum,add;
    char ch[100];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s",ch);
        sum=0,add=0;
        for(j=0;ch[j]!='\0';j++)
        {
            if(ch[j]=='O')
            {
                sum++;
                add=add+sum;
            }
            else if(ch[j]=='X')
                sum=0;
        }
        printf("%d\n",add);
    }
    return 0;
}
