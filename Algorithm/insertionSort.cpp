#include<iostream>
using namespace std;


int main()
{

    int n=5;

    int arr[5]={2,3,5,1,8};


    int i,j,x;
    for(i=0;i<n;i++)
    {
       x=arr[i];
       j=i-1;
       while(j>=0&&arr[j]>x)
       {
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=x;

    }

    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }


    return 0;
}
