#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=1,n,k=0,cnt=0,maximum=0;
    cout<<"Enter the array of elements:";
    cin>>n;
    int arr[n],temp;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int s=n;
    for(i=0; i<n; i++)
    {
        while((n-i)!=0)
        {
            if(arr[i]<=arr[j+i])
            {
                cout<<arr[i]<<" ";
                temp=arr[j+i];
                arr[i]=temp;
                j++;
                n--;
                cnt++;
            }
            else
            {
                j++;
                n--;
            }
        }
        if(cnt>maximum)
        {
            maximum=cnt;
        }
        else
        {
            maximum=maximum;
        }
        cout<<"  ";
        n=s;
        j=1;
        cnt=0;
    }
    cout<<"Least increasing sequence length: "<<maximum;
}
