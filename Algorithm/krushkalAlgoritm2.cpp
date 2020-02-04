#include<bits/stdc++.h>
using namespace std;

int weight[20][20]={0};

void createGrap(int arr[],int e)
{
    int a,b,w;
    for(int i=0;i<e;i++)
    {
        cout<<"Enter the a,b and weight: ";
        cin>>a>>b>>w;
        weight[a][b]=weight[b][a]=w;
        arr[i]=w;
    }
}
sorTing(int arr[],int e)
{

    for(int i=1;i<=e;i++)
    {
         for(int j=i;j<=e;j++)
         {
             if(arr[j]>arr[j+1])
               sort(arr[j],arr[j+1]);

         }
    }
}

int main()
{
    int v,e;
    cout<<"Enter the number of vertex: ";
    cin>>v;


    cout<<"Enter the number of eges: ";
    cin>>e;

     createGrap(e);


    return 0;
}
