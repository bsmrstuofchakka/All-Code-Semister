#include<bits/stdc++.h>
using namespace std;
struct ITEM
{
    char name[10];
    int weight;
    int profit;
    float density;
};
void fractionalKnapsack(ITEM arr[],int n,int w);
int main(void)
{
    int i,j,n,w;
    cout<<"Enter the number of item:";
    cin>>n;
    ITEM temp,arr[n];
    for(i=0; i<n; i++)
    {
        cout<<"Enter the name and weight and profit i= "<<i<<":";
        cin>>arr[i].name>>arr[i].weight>>arr[i].profit;
        arr[i].density=float(arr[i].profit)/(arr[i].weight);
    }
    cout<<"Enter the capacity of bag WEIGHT:";
    cin>>w;
    for(i=1; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(arr[j+1].density>arr[j].density)
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    fractionalKnapsack(arr,n,w);
    return 0;
}
void fractionalKnapsack(ITEM arr[], int n, int w)
{
    int i,wt;
    float profit;
    float totalWeight=0,totalprofit=0;
    for(i=0; i<n; i++)
    {
        if(arr[i].weight+totalWeight<=w)
        {
            totalWeight += arr[i].weight;
            totalprofit +=arr[i].profit;
            cout<<"Selected Item: "<<arr[i].name<<" ";
            cout<<"Weight: "<<arr[i].weight<<" ";
            cout<<"profit: "<<arr[i].profit<<" ";
            cout<<"Total Weight: "<<totalWeight<<" ";
            cout<<"Total profit: "<<totalprofit;
            cout<<endl;
        }
        else
        {
            wt=(w-totalWeight);
            profit=wt*(float(arr[i].profit)/arr[i].weight);
            totalWeight+=wt;
            totalprofit+=profit;
            cout<<"Selected Item: "<<arr[i].name<<" ";
            cout<<"Weight: "<<arr[i].weight<<" ";
            cout<<"profit: "<<arr[i].profit<<" ";
            cout<<"Total Weight: "<<totalWeight<<" ";
            cout<<"Total profit: "<<totalprofit;
            cout<<endl;
            break;
        }
    }
    cout<<endl;
    cout<<"Total Weight:"<<totalWeight<<" ";
    cout<<"Total Benefit:"<<totalprofit;
    cout<<endl;
}
