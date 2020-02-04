#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the elements number: ";
    cin>>n;
    int arr[100];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    int i=1;
    int max=arr[0];
    while(i<n)
    {
        if(max<arr[i])
            max=arr[i];
        i++;

    }

    int count[100]= {0};

    int k,l=1;
    for(int j=0; j<n; j++)
    {
        k=arr[j];
        if(count[k]==l)
        {
            count[k]=l+1;
        }
        else
            count[k]=l;
    }

    for(int m=0; m<=max; m++)
    {
        if(m==0)
            count[m]=count[m];
        else
            count[m]=count[m]+count[m-1];
    }

    int temp[100]= {0};

    for(int p=n-1; p>=0; p--)
    {
        int q=arr[p];
        int r=count[q];
        temp[r]=q;
        count[q]--;
    }




    for(int i=0; i<=max; i++)
    {
        if(temp[i]!=0)
            cout<<temp[i]<<" ";

    }
    return 0;
}
