#include<stdio.h>
int main()
{
    int  A,B,T,gcd,lcm,n;
    cin>>t;
    for(int i=1; i<=n; i++)
    {
        scanf("%d %d",&A,&B);
        while(B!=0)
        {

            T=A%B;
            A=B;
            B=T;
        }
        gcd=A;
        lcm=(A*B)/gcd;
        printf("%d\n",gcd);
        printf("%d\n",lcm);

    }
    return 0;

}

