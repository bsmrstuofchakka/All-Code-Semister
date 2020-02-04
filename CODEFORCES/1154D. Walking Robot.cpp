#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n,b,a;
    cin>>n>>b>>a;
    //while()
    //{
    int arr;
    //for(int i=1; i<=n; i++)

    int c=b,d=a,sum=0,count=0;
    for(int i=1; i<=n; i++)
    {
        cin>>arr;

        if(c==0&&d==0)
        {
            cout<<sum<<endl;
            count=1;
            break;
        }


        if(arr==0)
        {
            if(d>0)
            {
                d--;
                sum++;
            }
            else
            {

                if(c>0)
                {
                    c--;
                    sum++;
                }
            }
        }
        else
        {
            if(a==d)
            {
                sum++;
                d--;
            }

            else
            {
                if(c==0)
                {
                    d--;
                    sum++;
                }
                else
                {
                    c--;
                    d++;
                    sum++;
                }
            }
        }



    }
    if(count==0)
        cout<<sum<<endl;
    //}


    return 0;
}
