#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b;
    char ch='?';
    int arr1[6],arr2[6],arr3[8];

    int i=0,count=0;
    while(1)
    {

        i++;
        cin>>ch;
        if(i<5&&ch!='!')
        {
            cin>>a>>b;
            arr1[i]=a;
            arr2[i]=b;
        }
        else if(i==5&&ch=='!')
              break;
        else
        {
               cout<<"0"<<endl;
               return 0;
        }



    }



    for(int j=1; j<=6; j++)
        cin>>arr3[j];


    for(int j=1; j<=4; j++)
    {
        cout<<arr3[arr1[j]]*arr3[arr2[j]]<<endl;
    }




    return 0;
}



