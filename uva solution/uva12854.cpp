#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[6];
    while(scanf("%d",&arr[0])==1)
    {
        int arr2[6];
        int count=1;


        for(int i=1; i<5; i++)
            cin>>arr[i];

        for(int i=0; i<5; i++)
            cin>>arr2[i];

        for(int i=0; i<5; i++)
        {
            if(arr[i]==arr2[i])
            {
                count=0;
                break;
            }
        }

        if(count==1)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }

    return 0;
}
