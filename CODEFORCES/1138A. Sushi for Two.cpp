#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int arr[100001];

        int count1,count2,one=0,two=0,t1=0,t2=0,max=-1;

        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }



        for(int i=1; i<=n; i++)
        {
            if(arr[i]==1)
            {
                one++;
                t1=one;
                count1=min(t1,t2);

                if(count1>max)
                {
                    max=count1;
                }
                //cout<<max<<" ";
                two=0;
            }
            else
            {
                two++;
                t2=two;
                count2=min(t2,t1);

                if(count2>max)
                {
                    max=count2;
                }

                //cout<<max<<" ";
                one=0;
            }

        }
        cout<<2*max<<endl;

    }
    return 0;
}
