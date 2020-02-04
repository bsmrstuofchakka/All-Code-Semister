#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int s=1; s<=t; s++)
    {
        int i,j,n,index,temp;
        int arr[200];
        arr[0]=1;
        index=0;

        cin>>n;
        for(i=n; i>=2; i--)
        {
            temp=0;
            for(j=0; j<=index; j++)
            {
                temp=arr[j]*i+temp;
                arr[j]=temp%10;
                temp=temp/10;
            }
            while(temp>0)
            {
                arr[++index]=temp%10;
                temp=temp/10;
            }
        }

        for(i=index; i>=0; i--)
            cout<<arr[i];
        cout<<endl;

    }


    return 0;
}
