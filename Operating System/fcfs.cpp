#include<bits/stdc++.h>
using namespace std;
struct process
{
    int no,bt,tt,wt,ct,rt;
};
int main()
{
    int n;
    cout<<"Enter total number of process: ";
    process p[20];
    cin>>n;

    p[20].ct={0};
    cout<<"Enter    process no.   BT"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i].no;
        cin>>p[i].bt;
        p[i].rt=p[i].bt;

    }

    int sum=0;
    p[0].ct=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+p[i].rt;
        p[i].ct=sum;
        p[i].wt=p[i-1].ct;
        p[i].tt=p[i].wt+p[i].rt;
    }
    float a=0,b=0,c=0;
    cout<<"Process BT   WT  CT   TT"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"p"<<p[i].no<<"      "<<p[i].rt<<"    "<<p[i].wt<<"  "<<p[i].ct<<"   "<<p[i].tt<<endl;
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

