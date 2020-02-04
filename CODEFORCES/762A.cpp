#include<iostream>
using namespace std;
int main()
{
    long int n;
    int k,m=0,i=1;
    cin>>n>>k;
    int arr[n];
    while(i<=n)
    {
        if(n%i==0)
        {
            m++;
            arr[m]=i;
        }
        i++;
    }
    if(m<k)
        cout<<-1<<endl;
    else
        cout<<arr[k]<<endl;
    return 0;
}
