#include<bits/stdc++.h>
using namespace std;

int main()
{

    int p;
    cout<<"Enter the total number of process: ";
    cin>>p;
    int arr[p];
    for(int i=1; i<=p; i++)
    {
        cout<<"Enter the "<<i<<" number burst time: ";
        cin>>arr[i];
    }

    int a=0,add=0,j=2;
    cout<<"1 number weighting time:"<<a<<endl;

    for(int i=1; i<p; i++)
    {
        a=a+arr[i];
        add=add+a;
        cout<<j<<" number weighting time:"<<a<<endl;
        j++;
    }
    cout<<endl;
    cout<<"Average weighting Time: "<<(add/p)<<endl;
    cout<<endl<<endl;
    int t_time=0,sum=0;
    for(int i=1; i<=p; i++)
    {

        t_time=t_time+arr[i];

        cout<<i<<" number turn around time:"<<t_time<<endl;
        sum=sum+t_time;


    }
    cout<<endl;
    cout<<"Average turn around Time: "<<(sum/p)<<endl;

    return 0;
}
