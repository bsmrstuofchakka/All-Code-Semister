#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int arr1[101],arr2[101],a,b,c,k;
        for(int i=1; i<=n; i++)
        {
            cin>>arr1[i]>>arr2[i];
        }
        cin>>k;



        for(int i=1; i<=n; i++)
        {
            if(k>=arr1[i]&&k<=arr2[i])
            {
                c=i-1;
                break;
            }
        }
        cout<<n-c<<endl;


    }



    return 0;
}
