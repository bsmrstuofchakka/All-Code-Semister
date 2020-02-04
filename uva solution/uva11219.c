#include<stdio.h>
int main()
{
    long int i,t,d1,d2,m1,m2,y1,y2,age;
    scanf("%ld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%ld/%ld/%ld%ld/%ld/%ld",&d1,&m1,&y1,&d2,&m2,&y2);
        if(y1>y2)
        {
            if(d1>d2&&m1>m2&&y1>y2)
            {
                age=(d1-d2)/365+(m1-m2)/12+y1-y2;

                if(age>130)
                    printf("Case #%ld: Check birth date\n",i);
                else if(age==0)
                    printf("Case #%ld: 0\n",i);
                else
                    printf("Case #%ld: %ld\n",i,age);
            }
            else if(d1<d2&&m1>m2&&y1>y2)
            {
                age=((d1+30)-d2)/365+((m1-1)+m2)/12+y1-y2;

                if(age>130)
                    printf("Case #%ld: Check birth date\n",i);
                else if(age==0)
                    printf("Case #%ld: 0\n",i);
                else
                    printf("Case #%ld: %ld\n",i,age);
            }
            else if(d1>d2&&m1<m2&&y1>y2)
            {
                age=(d1-d2)/365+((m1+12)-m2)/12+(y1-1)-y2;

                if(age>130)
                    printf("Case #%ld: Check birth date\n",i);
                else if(age==0)
                    printf("Case #%ld: 0\n",i);
                else
                    printf("Case #%ld: %ld\n",i,age);
            }
            else if(d1<d2&&m1<m2&&y1>y2)
            {
                age=((d1+30)-d2)/365+((m1-1+12)-m2)/12+(y1-1)-y2;

                if(age>130)
                    printf("Case #%ld: Check birth date\n",i);
                else if(age==0)
                    printf("Case #%ld: 0\n",i);
                else
                    printf("Case #%ld: %ld\n",i,age);
            }
        }
        else
            printf("Case #%ld: Invalid birth date\n",i);



    }

    return 0;
}
