#include<bits/stdc++.h>
using namespace std;
int function_selection(int arr[]);
int main()
{
    int arr[5]= {2,19,3,4,11};
    function_selection(arr);
}
int function_selection(int arr[])
{
    int i,j,minx,temp,n;
    for(i=0; i<5-1; i++)
    {
        minx=i;
        for(j=i; j<5; j++)
        {
            if(arr[minx]>arr[j])
            {
                minx=j;
            }
        }
        if(minx!=i)
        {
            swap(arr[i],arr[minx]);
        }
    }
    for(n=0; n<5; n++)
    {
        cout<<arr[n]<<" ";
    }
    return 0;
}

