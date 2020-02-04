#include<iostream>
using namespace std;
int max(int a, int b)
{
    return (a>b)?a:b;
}
int knapSack(int W,int wt[],int val[],int n)
{
    int i, w;
    int K[n+1][W+1];
    for(i=0; i<=n; i++)
    {
        for(w=0;w<=W;w++)
        {
            if(i==0||w==0)
                K[i][w] = 0;
            else if (wt[i-1]<= w)
                K[i][w]=max(val[i-1]+K[i-1][w-wt[i-1]],K[i-1][w]);
            else
                K[i][w]=K[i-1][w];
        }
    }
    return K[n][W];
}
int main()
{
    cout<<"Enter the number of items in a Knapsack:";
    int n,W,i;
    cin>>n;
    int val[n], wt[n];
    for(i=0; i<n; i++)
    {
        cout<<"Enter weight and value for item "<<i<< ":";
        cin>>wt[i];
        cin>>val[i];
    }
    cout<<"Enter the capacity of knapsack: ";
    cin>>W;
    cout<<knapSack(W,wt,val,n);
    return 0;
}
