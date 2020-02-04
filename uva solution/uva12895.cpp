#include<bits/stdc++.h>
using namespace std;


int powerQube(int n,int l)
{
    int a=1;
    for(int i=0;i<l;i++)
        a=a*n;
    return a;

}

int tolen(int n)
{
    int i=0;
    while(n>0)
    {
        n=n/10;
        i++;
    }
    return i;
}



int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        long int n;
        cin>>n;
        int l=tolen(n);

        int m=n,temp=0;
        for(int j=0;j<l;j++)
        {
            int a=m%10;
            temp=temp+powerQube(a,l);
            m=m/10;
        }

        if(n==temp)
            cout<<"Armstrong"<<endl;
       else
            cout<<"Not Armstrong"<<endl;


    }


    return 0;
}
