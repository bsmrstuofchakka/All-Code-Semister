#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n,j;
    while(cin>>n)
    {
        int arr1[1500]= {0};
        int arr2[1500]= {0};
        int sum[1500]= {0};
        arr1[0]=0;
        arr2[0]=1;
        int len=1;
        for(int k=0; k<n; k++)
        {

            int a=0;
            j=0;

            for(int i=0; i<len; i++)
            {
                a=a+arr2[i]+arr1[i];
                sum[i]=a%10;
                a=a/10;
                arr2[i]=arr1[i];
                arr1[i]=sum[i];
                ++j;
            }
            while(a>0)
            {

                arr1[len]=a%10;
                a=a/10;
                ++j;
            }
            len=j;

        }

        cout<<"The Fibonacci number for "<<n<<" is ";
        for(int i=len-1; i>=0; i--)
            cout<<arr1[i];
        cout<<endl;
    }

    return 0;
}
