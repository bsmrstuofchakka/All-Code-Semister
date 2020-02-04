#include<stdio.h>
int main()
{
    long int i,j,a,b,n,sum,k=1,arr[1000];
    while(scanf("%ld",&n)!=EOF)
    {
        for(i=3;i<=n;i++)
        {
            for(j=2; j<i; j++)
            {
                a=i%j;
                if(a==0)
                    break;
            }
            if(a!=0)
                {
                  arr[k]=i;
                  k++;
                }
        }
        l=1;
        while(l<=4)
        {
            sum=sum+arr[l]
        }

    }

    return 0;
}
