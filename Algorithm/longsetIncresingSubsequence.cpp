#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n;

    cout<<"Enter the number of total values: ";
    cin>>n;

    int val[n];

    cout<<"Enter the Values: ";
    for(int i=1; i<=n; i++)
        cin>>val[i];

    int val_len[n];
    for(int i=1; i<=n; i++)
        val_len[i]=1;
    int max=1;

    for(int i=2; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(val[i]>val[j])
            {
                if(val_len[j]+1>val_len[i])
                    val_len[i]=val_len[j]+1;


            }
        }
        if(val_len[i]>max)
            max=val_len[i];
            cout<<max<<" ";
    }
    cout<<"maximum length: ";
    cout<<max<<endl;

    return 0;
}
