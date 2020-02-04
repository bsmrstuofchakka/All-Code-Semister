#include<bits/stdc++.h>
using namespace std;


int p[1001][31]= {0};


int main()
{



    int t;
    cin>>t;

    for(int o=1; o<=t; o++)
    {
        int I,arr[1001],arr1[1001],arr2[101];
        cin>>I;
        for(int i=1; i<=I; i++)
            cin>>arr1[i]>>arr[i];

        int g;
        cin>>g;
        for(int i=1; i<=g; i++)
            cin>>arr2[i];
        int sum=0;

        for(int k=1; k<=g; k++)
        {

            for(int i=1; i<=I; i++)
            {
                for(int j=1; j<=arr2[k]; j++)
                {
                    if(j>=arr[i])
                    {
                        if(arr1[i]+p[i-1][j-arr[i]]>p[i-1][j])
                            p[i][j]=arr1[i]+p[i-1][j-arr[i]];
                        else
                            p[i][j]=p[i-1][j];
                    }
                    else
                        p[i][j]=p[i-1][j];

                }
            }

            sum=sum+p[I][arr2[k]];


        }
        cout<<sum<<endl;



    }





    return 0;
}
