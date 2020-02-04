 #include<bits/stdc++.h>
using namespace std;
int margesort(int arr[],int low,int mid,int high)
{
    int i=low;
    int j=mid+1;
    int temp[12345];
    int k=0;
    while(i<=mid&&j<=high)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        temp[k]=arr[j];
        j++;
        k++;
    }
    int p=0;
    for(int i=low; i<=high; i++)
    {
        arr[i]=temp[p];
        p++;
    }
}
int marge(int arr[],int low,int high)
{
    int mid;
    mid=(low+(high-1))/2;
    if(low>=high)
        return 0;
    else
    {
        marge(arr,low,mid);
        marge(arr,mid+1,high);
        margesort(arr,low,mid,high);
    }
}
int main()
{
    int i,j,n,low,mid,high;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    low=0,high=n;
    marge(arr,low,high);
    cout<<"sorted array: ";
    for(j=0; j<n; j++)
    {
        cout<<arr[j]<<" ";
    }
}
