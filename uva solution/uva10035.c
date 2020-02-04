#include<stdio.h>
int main(void)
{

    long long int a,b,res,c,d;
    int o;

    while(scanf("%lld %lld",&a,&b)==2)
    {

        o=0;
        res=0;

        if(a==0 && b==0)break;

        else
        {
            if(a<b)
            {
                c=a;
                a=b;
                b=c;
            }

            while(a!=0)
            {
                c=a%10;
                a=a/10;
                d=b%10;
                b=b/10;
                res=c+d+res;

                if(res>=10)
                {
                    o++;
                    res=res/10;
                }

                else res=0;
            }

            if(o==0)printf("No carry operation.\n");
            else if(o==1)printf("%d carry operation.\n",o);
            else if(o>1)printf("%d carry operations.\n",o);
        }
    }
    return 0;
}
