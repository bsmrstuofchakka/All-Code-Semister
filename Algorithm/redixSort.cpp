#include<iostream>
#include<math.h>
using namespace std;

int countSort(int arr2[],int arr1[],int n,int max,int p);
int divide(int arr[],int n,int p);


int main()
{

    int arr[500],n,max=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";

    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
        if(arr[i]>max)
            max=arr[i];
    }
    int k=0;
    while(max>0)
    {
        max=max/10;
        k++;
    }

    for(int i=0; i<k; i++)
    {
        int p=pow(10,i);
        divide(arr,n,p);
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";


    return 0;
}

int divide(int arr[],int n,int p)
{
    int arr1[500],arr2[500],max=0;
    for(int i=0; i<n; i++)
    {

        arr2[i]=arr[i]/p;
        arr1[i]=arr2[i]%10;
        if(arr1[i]>max)
            max=arr1[i];

    }

    countSort(arr,arr1,n,max,p);

}

int countSort(int arr[],int arr1[],int n,int max,int p)
{
    int count[100]= {0},arr3[500];

    for(int i=0; i<n; i++)
        count[arr1[i]]=count[arr1[i]]+1;
    int temp[100],m=0;
    for(int i=0; i<=max; i++)
    {

        int k=count[i],j=m;
        while(k>0)
        {
            while(j<n)
            {
                arr3[j]=arr[j]/p;

                if(arr3[j]%10==i)
                {
                    int a=arr[m];

                    arr[m]=arr[j];
                    arr[j]=a;
                    m++;
                    j++;

                    break;
                }
                j++;

            }
            k--;
             }


    }
   /* for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    */
}
