#include<stdio.h>
int function_selection(int array[]);
int main()
{

    int array[5]= {2,5,3,4,1};
    function_selection(array);

}
int function_selection(int array[])
{
    int i,j,min,temp,n;
    for(i=0; i<5-1; i++)
    {
        min=i;
        for(j=i; j<5; j++)
        {
            if(array[min]>array[j])
            {
                min=j;
            }
        }
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
    for(n=0; n<5; n++)
    {
        printf("%d ",array[n]);
    }
    return 0;
}
