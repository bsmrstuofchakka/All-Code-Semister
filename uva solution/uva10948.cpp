#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        int arr[100000];
        int l=3;
        arr[1]=2;
        arr[2]=3;
        arr[3]=5;

        for(int i=7; i<=n; i=i+2)
        {
            int k=0;
            for(int j=5; j<i; j=j+2)
            {
                if(i%2==0)
                {
                    k=1;
                    break;
                }
                else if(i%3==0)
                {
                    k=1;
                    break;
                }
                else if(i%j==0)
                {
                    k=1;
                    break;
                }
            }
            if(k==0)
            {
                l++;
                arr[l]=i;

            }

        }
        int g=0,h=0;
        for(int i=1; i<=l; i++)
        {
            for(int j=i; j<=l; j++)
            {
                if(arr[i]+arr[j]==n)
                {
                    g=arr[i];
                    h=arr[j];
                    break;
                }
            }

            if(g!=0&&h!=0)
            {
                cout<<n<<":"<<endl;
                cout<<g<<"+"<<h<<endl;
                break;
            }
        }
        if(g==0&&h==0)
        {
            cout<<n<<":"<<endl;
            cout<<"NO WAY!"<<endl;

        }
    }


    return 0;
}
