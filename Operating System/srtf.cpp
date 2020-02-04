#include<bits/stdc++.h>
using namespace std;



struct process
{
    int no,bt,rt,wt,ct,at,tt,wt,ct;
};

int main()
{
    process p[20];
    int n;
    cout<<"Enter total number of process ";
    cin>>n;


    for(int i=1; i<=n; i++)
    {
        cin>>p[i].no;
        cin>>p[i].at;
        cin>>p[i].bt;
        p[i].rt=p[i].bt;

    }

    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(p[i].at>p[j].at)
            {
                swap(p[i].at,p[j].at);
                swap(p[i].no,p[j].no);
                swap(p[i].bt,p[j].bt);
            }
        }
    }
    int maxarrtime=p[n].at;
    int sum=0;

    int p[20].rt= {0};
    int m;
    int visited[20]= {0};
    int s=1;
    visited[1]=1;
    while(1)
    {
        int min=9999,i;
        s++;
        for(int j=1; j<=n; j++)
        {
            if(visited[j]==1&&min>p[j].rt)
            {
                i=j;

            }

        }
           if(sum>maxarrtime)
            p[i].wt=p[i].wt+sum-ct[i];
            sum=sum+p[i+1].at-p[i].at;
            p[i].ct=sum;
            p[i].rt=p[i].rt-p[i].ct;








    }



    return 0;
}
