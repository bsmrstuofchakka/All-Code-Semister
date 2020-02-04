#include<stdio.h>
//#include<stdilb.h>
int main()
{
    char text[1000],pat[1000];
    int i,j,k,sum,text_len,pat_len,s;
    printf("enter the text:\n");
    gets(text);
    printf("enter the pat:\n");
    gets(pat);
    text_len=strlen(text);
    pat_len=strlen(pat);
    s=pat_len;
    sum=0;
    for(i=0; i<text_len; i++)
    {
        k=i;
        j=0;
        while(pat_len!=0)
        {
            if(text[k]==pat[j])
            {
                k++;
                j++;
            }
            else
            {
                break;
            }
            pat_len--;
        }
        sum++;
        if(j==s)
        {
            printf("%d",sum);
            break;
        }
    }
    if(j!=s)
    {
        printf("position is not found");
    }

    return 0;
}
