#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the number of array:";
    cin>>N;
    int k=0,C[N],A[N],B[N];
    for(int i=1; i<=N; i++)
    {
        cin>>A[i];
    }
    for(int i=1; i<=N; i++)
    {
        k=max(k,A[i]);
    }
    for(int i=0; i<=k; i++)
    {
        B[i]=0;
    }
    for(int i=1; i<=N; i++)
    {
        B[A[i]]=B[A[i]]+1;
    }
    for(int i=0; i<=k; i++)
    {
        B[i]=B[i]+B[i+1];
    }
    for(int i=1; i<=N; i++)
    {
        C[B[A[i]]]=A[i];
        B[A[i]]=B[A[i]]-1;
    }
    for(int i=1; i<=N; i++)
    {
        cout<<C[i]<<" ";
    }
}

