#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[4000],index=0;
    arr[0]=1;


    for(int i=n; i>=2; i--)
    {
        int temp=0;
        for(int j=0; j<=index; j++)
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
    for(int i=index; i>=0; i--)
        cout<<arr[i];
    cout<<endl;
    return 0;
}
