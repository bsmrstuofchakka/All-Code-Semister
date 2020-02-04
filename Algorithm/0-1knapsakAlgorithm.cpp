#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int p[100][100]= {0};
int p1[100][100];
int main()
{

    int I,arr[100],arr1[100];
    cout<<"Enter the number of Item: ";
    cin>>I;
    for(int i=1; i<=I; i++)
    {
        int w1,v;
        cout<<"Enter the weight & value: ";
        cin>>w1>>v;
        arr[i]=w1;
        arr1[i]=v;
    }
    int w;
    cout<<"Enter the Maximum weight: ";
    cin>>w;
    for(int i=1; i<=I; i++)
    {
        for(int j=1; j<=w; j++)
        {
            if(j>=arr[i])
            {
                if(arr1[i]+p[i-1][j-arr[i]]>p[i-1][j])
                {
                    p[i][j]=arr1[i]+p[i-1][j-arr[i]];
                    p1[i][j]=p[i-1][j- arr[i]];

                }
                else
                {

                    p[i][j]=p[i-1][j];
                    p1[i][j]=p[i-1][j];
                }
            }
            else
            {
                p[i][j]=p[i-1][j];
                p1[i][j]=p[i-1][j];
            }
        }
    }
    cout<<"Maximam Value: "<<p[I][w]<<endl;
    int path=p[I][w],k=1;
    for(int i=I; i>0; i--)
    {
        for(int j=w; j>0; j--)
        {
            if(p[i][j]==path)
            {
                arr[k]=p[i][j];
                arr1[k]=i;
                if(arr[k]==p1[i][j])
                {
                    path=p1[i][j];
                }
                else
                {
                    k++;
                    path=p1[i][j];
                }
                break;
            }
        }
    }
    cout<<"This Items is used: ";
    for(int i=k-1;i>0;i--)
        cout<<arr1[i]<<" ";
    cout<<endl;

    return 0;
}
