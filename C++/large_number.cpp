#include<iostream>
using namespace std;
int main()
{
    int i,n,max;
    cout<<endl<<"PLEASE ENTER THE ELEMENT NUMBERS: ";
    cin>>n;
    int arr[n];
    cout<<endl<<"PLEASE ENTER THE ELEMENTS: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    max=arr[0];
    i=1;
    while(i<n)
    {
        if(max<arr[i])
            max=arr[i];
        i++;
    }
    cout<<endl<<"THE MAXIMUM NUMBER IS:  "<<max<<endl;
    return 0;
}
