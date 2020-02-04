#include<stdio.h>
int main()
{
    int m,temp,j,i,n,x;
    scanf("%d",&n);
    int arr[170];
    arr[0]=1;
    m=1;
    temp = 0;
    for(i=1; i<=n; i++)
    {

        for(j=0; j<m; j++)
        {
            x = arr[j]*i+temp;
            arr[j]=x%10;
            temp = x/10;
        }
        while(temp!=0)
        {
            arr[m]=temp%10;
            temp = temp/10;
            m++;
        }
    }
}
