#include<stdio.h>
int main()
{

    char *pChar;
    int *pInt;
    int **pIInt;
    float *pFloat;

    sizeof(pChar);
    sizeof(pIInt);
    sizeof(pFloat);
    printf("%d\n",pChar);
    printf("%d\n",pInt);
    printf("%d\n",pFloat);
    printf("%d\n",pIInt);

    return 0;
}
