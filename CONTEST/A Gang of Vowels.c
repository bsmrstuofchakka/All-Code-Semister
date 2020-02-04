#include<stdio.h>
int main()
{

    int t,k;
    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
        int n,m;
        scanf("%d",&n);
        char ar[4];
        for(m=0; m<n; m++)
            scanf("%d",&ar[m]);

        int i=0,j=0,l=0;

        while(i<n)
        {
            if(ar[i]=='a'||ar[i]=='e)
            {
                j=j+1;
                l=i-1;
                if(i!=0)
                {
                    if(ar[i]==ar[l])
                        j--;
                }
            }
            i++;
        }
        printf("Case %d",k);
        printf(": %d\n",j);


    }


    return 0;
}


