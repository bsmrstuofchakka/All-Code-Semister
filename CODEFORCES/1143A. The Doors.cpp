#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int arr[200001];
        int count[3]= {0};
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            count[arr[i]]++;

        }

        int k=0,zero=0,one=0,temp1=0,temp2=0;
        for(int i=1; i<=n; i++)
        {
            if(arr[i]==0)
            {
                zero++;
                temp1=1;
            }
            if(arr[i]==1)
            {
                one++;
                temp2=1;
            }
            //if(temp1==1&&temp2==1)
            //{
                if(count[0]==zero||count[1]==one)
                {
                    cout<<i<<endl;
                    break;
                }
           // }
        }
    }



    return 0;
}
