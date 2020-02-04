#include<bits/stdc++.h>
using namespace std;
#define MAX 100
struct Job
{
    char id[10];
    int deadline;
    int profit;
};
void jobSequencingWithDeadline(Job jobs[], int n);
int minValue(int x, int y)
{
    if(x<y)
        return x;
    else
        return y;
}
int main(void)
{
    int i,j,n;
    cout<<"Enter the job scheduling number: ";
    cin>>n;
    Job jobs[n];
    cout<<"Enter the job deadline and profit"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>jobs[i].id>>jobs[i].deadline>>jobs[i].profit;
    }
    Job temp;
    for(i=1; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(jobs[j+1].profit > jobs[j].profit)
            {
                temp = jobs[j+1];
                jobs[j+1] = jobs[j];
                jobs[j] = temp;
            }
        }
    }
    cout<<"\tJob"<<"\tDead"<<"\tProfit"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<"\t"<<jobs[i].id<<"\t"<<jobs[i].deadline<<"\t"<<jobs[i].profit<<endl;
    }
    jobSequencingWithDeadline(jobs, n);
    return 0;
}
void jobSequencingWithDeadline(Job jobs[], int n)
{
    int i,j,k,maxprofit;
    int timeslot[MAX];
    int cnt=0;
    int dmax=0;
    for(i=0; i<n; i++)
    {
        if(jobs[i].deadline>dmax)
        {
            dmax=jobs[i].deadline;
        }
    }
    for(i=1; i<=dmax; i++)
    {
        timeslot[i]=-1;///-1 denote empty set
    }
    cout<<"d max: "<<dmax<<endl;
    for(i=1; i<=n; i++)
    {
        k=minValue(dmax,jobs[i-1].deadline);
        while(k>=1)
        {
            if(timeslot[k]==-1)
            {
                timeslot[k]=i-1;
                cnt++;
                break;
            }
            k--;
        }
        if(cnt==dmax)
        {
            break;
        }
    }
    cout<<"Required Jobs: ";
    for(i=1; i<=dmax; i++)
    {
        cout<<jobs[timeslot[i]].id;
        if(i<dmax)
        {
            printf("--> ");
        }
    }
    cout<<endl<<endl;
    maxprofit=0;
    for(i=1; i<=dmax; i++)
    {
        maxprofit+=jobs[timeslot[i]].profit;
    }
    cout<<"Max Profit: "<<maxprofit<<endl;
}
