#include<bits/stdc++.h>
using namespace std;

void primeFactor(int arr[],long long int  n)
{
    int i=2,index=0;
    long long int p=abs(n);

    while(p>1)
    {
        if(p%i==0)
        {
            p=p/i;
            arr[++index]=i;

        }
        else
            i++;

    }
    cout<<n<<" = ";

    if(n<0)
        cout<<"-1 x "<<arr[1];
     else
            cout<<arr[1];

    for(int i=2; i<=index; i++)
        cout<<" x "<<arr[i];
    cout<<endl;





}


int main()
{
    int n;
    while(scanf("%lld",&n)!=EOF&&n!=0)
    {
        int arr[100];
        primeFactor(arr,n);


    }

    return 0;
}
