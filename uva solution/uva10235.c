#include<stdio.h>
int main()
{
    int i,chack,reverse=0;
    long long int n;
    scanf("%lld",&n);

    chack=1;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
            chack=0;
    }
    while(n!=0)
    {
        reverse=reverse*10;
        reverse=reverse+n%10;
        n=n/10;
    }

    if(chack==0)
        printf("%lld is not prime",n);
    else if(chack==1)
        printf("%lld is emirp",n);
    else
        printf("%lld is prime",n);
    return 0;
}
