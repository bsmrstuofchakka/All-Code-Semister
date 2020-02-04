#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int weight[20][20]= {0};



int main()
{
    int v,e,arr[20];

    cout<<"Enter the number of vertex: ";
    cin>>v;
    cout<<"Enter the number of edge: ";
    cin>>e;
    int a,b,w;
    for(int i=1; i<=e; i++)
    {
        cout<<"Enter the a,b and weight: ";
        cin>>a>>b>>w;
        weight[a][b]=weight[b][a]=w;
        arr[i]=w;
    }

    for(int i=1; i<e; i++)
    {
        for(int j=i+1; j<=e; j++)
        {
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
        }
    }

    for(int i=1;i<=e;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    int sum=0;
    for(int current=1; current<v; current++)
    {
        for(int i=v; i>0; i--)
        {
            for(int j=i; j>0; j--)
            {
                if(arr[current]==weight[i][j])
                {
                    sum=sum+arr[i];
                    break;
                }
            }
        }
    }
    cout<<sum<<endl;


    return 0;
}

