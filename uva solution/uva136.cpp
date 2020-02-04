#include<bits/stdc++.h>
using namespace std;
int uglyNumber(int arr[])
{
    arr[1]=1;
    int index=1;
    long long n=2;
    while(index<300)
    {
        //if(index==300)
            //return arr[index];
        int j=2,check=0;
        int k=n;
        while(j<=k&&j>1)
        {
            if(k%j==0)
            {
                k=k/j;
                if(j!=2&&j!=3&&j!=5)
                    check=1;
            }
            else
                j++;
        }
        if(check==0)
            arr[++index]=n;

        n++;
    }
    for(int i=1;i<1500;i++)
    cout<<arr[i]<<" ";


}

int main()
{
    int arr[55000];
    int a=uglyNumber(arr);
    cout<<a<<endl;



    return 0;
}
