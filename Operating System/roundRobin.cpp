#include<bits/stdc++.h>
using namespace std;

struct process
{
    int no,bt,rt,wt,ct,at,tt;
};

int main()
{
    process p[20];

    int n;
    cout<<"Total process number: ";
    cin>>n;

    for(int i=0; i<20; i++)
    {
        p[i].wt= 0;
        p[i].ct= 0;
        p[i].rt= 0;
    }
    int tq;
    int max=0,sum=0,tt=0;
    cout<<"Enter process no.    BT: "<<endl;
    for(int i=1; i<=n; i++)
    {

        cin>>p[i].no;
        cin>>p[i].bt;
        p[i].rt=p[i].bt;
        if(p[i].bt>max)
            max=p[i].bt;
    }
    cout<<"Enter the time quantam: ";
    cin>>tq;
    while(max>0)
    {

        for(int i=1; i<=n; i++)
        {
            if(p[i].rt>=tq&&p[i].rt!=0)
            {
                p[i].wt=p[i].wt+sum-p[i].ct;
                sum=sum+tq;
                p[i].ct=sum;
            }
            else if(p[i].rt!=0)
            {
                p[i].wt=p[i].wt+sum-p[i].ct;
                sum=sum+p[i].rt;
                p[i].ct=sum;
            }

            p[i].rt=p[i].rt-tq;
            if(0>p[i].rt)
                p[i].rt=0;
        }
        max=max-tq;
    }
    float a=0,b=0,c=0;

    cout<<"Process BT   WT  CT   TT"<<endl;
    for(int i=1; i<=n; i++)
    {
        p[i].tt=p[i].bt+p[i].wt;
        cout<<"p"<<p[i].no<<"      "<<p[i].bt<<"    "<<p[i].wt<<"    "<<p[i].ct<<"   "<<p[i].tt<<endl;
        a=a+p[i].wt;
        b=b+p[i].ct;
        c=c+p[i].tt;
    }
    cout<<endl<<endl;
    cout<<"Average Weighting Time:   "<<a/n<<endl;
    cout<<"Average Compilation Time: "<<b/n<<endl;
    cout<<"Average Turn around Time: "<<c/n<<endl;

    return 0;
}
