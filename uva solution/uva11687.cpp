#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    while(cin>>str)
    {
        if(str=="END")
            break;
        else if(str=="1")
            cout<<"1"<<endl;
        else
        {
            int n=str.length();
            int temp=n;


            int arr[100];
            arr[0]=temp;
            int i=0;
            while(i>=0)
            {
                int j=0;
                while(temp>0)
                {
                    temp=temp/10;
                    j++;
                }
                arr[++i]=j;
                temp=arr[i];

                if(arr[i]==arr[i-1])
                {


                    cout<<i+1<<endl;
                    break;
                }


            }
        }



    }



    return 0;
}
