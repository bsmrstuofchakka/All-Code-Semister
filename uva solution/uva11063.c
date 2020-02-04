#include<stdio.h>
int main()
{
    long int i,t,n,sum[100],arr[100],seq,m=1;
    while(scanf("%ld",&t)!=EOF)
    {
        n=0;
        for(i=0; i<t; i++)
        {
            scanf("%ld",&arr[i]);
            sum[n]=pow(2,i);
            if(sum[n]==arr[i])
                seq=1;
                else
                    seq=0;

            n++;
        }
        if(seq==1)
            printf("Case #%ld: It is a B2-Sequence\n",m);
        else
            printf("Case #%ld: It is not a B2-Sequence\n",m);

        m++;
    }
    return 0;
}
