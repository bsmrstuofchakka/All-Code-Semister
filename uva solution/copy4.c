#include<stdio.h>
int main()
{
    long long int i,j,a,b,N,ter[101010];
    while(scanf("%lld",&N)==1)
    {
        if(N<0)
            break;

        else if(N==0)
            printf("0");
        i=0;
        while(N>0)
        {
            a=N/3;
            ter[i]=N%3;
            N=a;
            i++;
        }
        for(j=i-1; j>=0; j--)
        {
            printf("%lld",ter[j]);
        }
        printf("\n");
    }
    return 0;
}
