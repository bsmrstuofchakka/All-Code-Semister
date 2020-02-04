#include<iostream>
#include<cstdio>
using namespace std;

int main()
{

    int n;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        int a=55,b=89;
        int arr[200]= {0},arr1[200]= {0},index=1;
        arr[0]=0;
        arr1[0]=1;

        for(int i=0; i<n; i++)
        {
            int sum=0;
            for(int j=0; j<=index; j++)
            {

                sum=sum+arr[j]+arr1[j];

                arr[j]=arr1[j];
                arr1[j]=sum%10;
                sum=sum/10;
            }

            while(sum>0)
            {
                index++;
                arr1[index]=sum%10;
                sum=sum/10;
            }


        }

        for(int i=index; i>=0; i--)
            cout<<arr1[i];
        cout<<endl;
    }
    return 0;
}
