#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int m=0; m<t; m++)
    {
        char ch1[200];
        char ch2[200];

        gets(ch1);
        gets(ch2);
        int arr[50]= {0};

        int len1=strlen(ch1);
        int len2=strlen(ch2);

        int index=1,p=1,value1,value2,to_len;

        for(int i=len1-1; i>=0; i--)
        {

            value1=ch1[i]-'0';

            int temp=0,b=0;

            for(int j=len2-1; j>=0; j--)
            {
                value2=ch2[j]-'0';

                temp=temp+value1*value2;
                b=arr[index]+temp%10;
                arr[index]=b+b%10;
                b=b/10;
                temp=temp/10;
                index++;
                if(j==0)
                    arr[index]=temp;
                 to_len=index;

            }
            p++;
            index=p;

        }
        for(int i=1;i<to_len;i++)
            cout<<arr[i];
        cout<<endl;




    }

    return 0;
}
