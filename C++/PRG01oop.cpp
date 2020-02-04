#include<stdio.h>
#include<iostream>
using namespace std;
class SortedLargest
{
private:
    int i,j,n,temp,GetLarge,arr[5];
public:
    SortedLargest(void)
    {
        cout<<endl<<"PLEASE ENTER THE ELEMENT NUMBER: ";
        cin>>n;
        cout<<endl<<"PLEASE ENTER THE ELEMENTS: ";
        for(i=0;i<n;i++)
            cin>>arr[i];
        GetSortedArray();
        GetLargestValue();
    }
private:
    void GetSortedArray()
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n-i-1; j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        cout<<endl<<"AFTER THE SORTING ELEMENT:  "<<endl;
        for(i=0; i<n; i++)
            cout<< arr[i]<<"  ";
    }
    void GetLargestValue()
    {
        GetLarge=arr[0];
        for(i=1;i<n;i++)
        {
            if(GetLarge<arr[i])
                GetLarge=arr[i];
        }
        cout<<endl<<"THE LARGESTEST VALUE IS: "<<GetLarge<<endl;
    }
};
int main()
{
    SortedLargest SL;
    return 0;
}
