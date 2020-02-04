#include<iostream>
using namespace std;

void biSearch(int n,int arr[],int key)
{
    int high=n,low=1,mid,temp=0;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(key==arr[mid])
        {
            temp=1;
            break;
        }
        else if(key>arr[mid])
            low=mid+1;

        else if(key<arr[mid])
            high=mid-1;

    }
    if(temp==1)
        cout<<key<<" is found";
    else
        cout<<key<<" is not found"<<endl;

}

int main()
{
    int n,m;
    cout<<"Please, enter the  elements number: ";
    cin>>n;

    cout<<"Please, enter the elements: ";

    int arr[n];


    for(int i=1; i<=n; i++)
        cin>>arr[i];



    cout<<"Please enter the searching element: ";
    cin>>m;

    biSearch(n,arr,m);

    for(int i=1;i<=n;i++)
    {
        if(m==arr[i])
            cout<<" and position is: "<<i<<endl;
    }


    return 0;
}
