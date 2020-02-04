#include<stdio.h>
int main ()
{
    int array[5]={10,20,30,40,50};
    int position,c;
    printf("Enter a position:");
    scanf("%d",&position);
    for(c=position-1;c<4;c++)
    {
        array[c]=array[c+1];
    }
    printf("Resultant array is:");
    {
        for(c=0;c<4;c++)
            printf("%d\n",array[c]);
    }
}
