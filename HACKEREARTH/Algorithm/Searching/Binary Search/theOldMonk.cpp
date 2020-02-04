#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int arr1[n],arr2[n],max=0;
        for(int i=0; i<n; i++)
            cin>>arr1[i];
        for(int j=0; j<n; j++)
            cin>>arr2[j];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {

                if(j>=i&&arr2[j]>=arr1[i])
                {
                    if(max<j-i)
                        max=j-i;


                }
            }


        }
        cout<<max<<endl;


        t--;
    }
    return 0;
}
