#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,k=0;
    while(cin>>n&&n>0)
    {
        int arr[13],arr1[13];
        k++;
        for(int i=1; i<=12; i++)
            cin>>arr[i];

        for(int i=1; i<=12; i++)
            cin>>arr1[i];
        arr[0]=n;
        int j=0;
        cout<<"Case "<<k<<":"<<endl;
        for(int i=1; i<=12; i++)
        {
            if(arr[i]+arr[j]>=arr1[i])
                cout<<"No problem! :D"<<endl;
            else
                cout<<"No problem. :("<<endl;

            j++;
        }


    }
    return 0;
}
