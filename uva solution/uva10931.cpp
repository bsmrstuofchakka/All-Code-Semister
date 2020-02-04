#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long int n;
    while(cin>>n&&n!=0)
    {
        int arr[50];
        int i=-1,j=0;
        while(n>0)
        {
            int a=n%2;

            arr[++i]=a;
            if(a==1)
                ++j;
            n=n/2;

        }

        cout<<"The parity of ";
        for(int k=i; k>=0; k--)
            cout<<arr[k];
        cout<<" is "<<j<<" (mod 2)."<<endl;




    }



    return 0;
}
