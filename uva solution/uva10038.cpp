#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {

        int arr[3001];

        for(int i=0; i<n; i++)
            cin>>arr[i];
        int count[3001]= {0};

        if(n==1)
        {
            cout<<"Jolly"<<endl;
            continue;
        }
        int p=0;
        for(int i=0; i<n-1; i++)
        {
            int a=abs(arr[i]-arr[i+1]);

            if(a>=n||a==0)
            {
                cout<<"Not jolly"<<endl;
                p=1;
                break;
            }

            count[a]++;

            if(count[a]==2)
            {
                cout<<"Not jolly"<<endl;
                p=1;
                break;
            }

        }
        if(p!=1)
            cout<<"Jolly"<<endl;






    }
    return 0;
}
