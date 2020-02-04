#include<stdio.h>
int main()
{
    char text[100],patn[100];
    int i,j,k,len_text,len_patn;
    gets(text);
    gets(patn);
    len_text=strlen(text);
    len_patn=strlen(patn);
    for(i=0;i<len_text;i++)
    {
        if(text[i]!=patn[0])
        {
            k=i;
            for(j=0;j<len_patn;j++)
            {
                if(text[k]==patn[j])
                    k++;

            }
        }
    }

    return 0;
}
