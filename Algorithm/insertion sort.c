#include<stdio.h>
int insertion_sort(int array[]);
int main()
{
    int array[6]= {5,2,4,6,1,3};
    insertion_sort(array);
}
int insertion_sort(int array[])
{
    int i,j,ptr,temp;
    for(i=1; i<6; i++)
    {
        temp=array[i];
        ptr=i-1;
        while(temp<array[ptr]&&ptr>=0)
        {
            array[ptr+1]=array[ptr];
            ptr=ptr-1;
        }
        array[ptr+1]=temp;
    }
    printf("sorted array:");
    for(j=0; j<6; j++)
    {
        printf("%d ",array[j]);
    }
    return 0;
}
