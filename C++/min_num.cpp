#include<iostream>
using namespace std;
int main()
{
    int i,n,min;
    cout<<endl<<"PLEASE ENTER ELEMENT NUMBER: ";
    cin>>n;
    int arr[n];
    cout<<endl<<"PLEASE ENTER THE ELEMENTS: ";
    for(i=0;i<n;i++)
        cin>>arr[i];

    min=arr[0];
    i=1;
    while(i<n)
    {
        if(arr[i]<min)
            min=arr[i];
        i++;
    }
    cout<<endl<<"THE MINIMUM NUMBER IS: "<<min<<endl;


    return 0;
}
