#include<bits/stdc++.h>
using namespace std;
int Radixsort(int arr[],int d,int n)
{
    int i,j,k,count[n],result[n];
    for (j=1; j<=d; j++)
    {
        count[10]=0;
        for (i =0; i<n; i++)
        {
            count[arr[i]]++;
        }

        for(k=1; k<10; k++)
        {
            count[k] = count[k] + count[k-1];
        }
        for (i=0; i<n-1; i++)
        {
            result[ count[(arr[i])]]=arr[j];
            count[(arr[i])]--;
        }
        for (i=0; i<n; i++)
        {
            arr[i] = result[i];
        }
    }
}
int getMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int n,i,maximum;
    char d;
    cout<<"\nEnter the number of data element to be sorted: ";
    cin>>n;
    int arr[n];
    for(i = 0; i < n; i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    maximum=getMax(arr,n);
    d=strlen(maximum);
    Radixsort(arr,d,n);
    cout<<"\nSorted Data ";
    for (i = 0; i < n; i++)
        cout<<"->"<<arr[i];
    return 0;
}
