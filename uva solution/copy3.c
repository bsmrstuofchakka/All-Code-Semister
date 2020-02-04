#include<stdio.h>
int main()
{
    long long int arr[10101],i,j,n,a,s;

    while(scanf("%lld",&n)==1)
    {
        for(a=0; a<n; a++)
        {
            scanf("%lld",&arr[a]);
        }
        s=0;
        for(i=0; i<n-1; i++)
        {
            for(j=i; j<n-1; j++)
            {
                if(arr[i]>arr[j+1])
                {
                    s++;
                }
            }
        }
        printf("Minimum exchange operations : %lld\n",s);
    }
    return 0;
}
