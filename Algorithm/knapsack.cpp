#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{

    int I,arr[100],arr1[100],arr2[100],arr3[100];
    cout<<"Enter the number of Item: ";
    cin>>I;
    for(int i=1; i<=I; i++)
    {
        int w1,v;
        cout<<"Enter the weight & value: ";
        cin>>w1>>v;
        arr[i]=w1;
        arr1[i]=v;
        arr2[i]=w1/v;
        arr3[i]=i;
    }
    int w;
    cout<<"Enter the Maximum weight: ";
    cin>>w;


    for(int i=1; i<=I; i++)
    {
        for(int j=i+1; j<=I; j++)
        {
            if(arr2[j]>arr2[i])
            {
                swap(arr2[i],arr2[j]);
                arr[i]=arr[j];
                arr1[i]=arr1[j];
                arr3[i]=arr3[j];

            }
        }
    }


    int sum=arr1[1];
    int w2=arr[1];
    cout<<"This item is used: "<<arr3[1];
    for(int i=2; i<=I; i++)
    {
        if(w2+arr[i]<=w)
        {
            sum=sum+arr1[i];
            cout<<" "<<arr3[i];

        }

    }
    cout<<endl;
    cout<<"Maximum weight: "<<sum<<endl;





    return 0;
}

