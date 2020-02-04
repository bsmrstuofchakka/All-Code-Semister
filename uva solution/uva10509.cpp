#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{

    int  n;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        int low=1,high=sqrt(n),mid,p;


        while(low<=high)
        {
            mid=(low+high)/2;
            p=mid*mid*mid;
            if(p==n)
            {
                cout<<mid<<endl;
                break;
            }
            else if(p>n)
                high=mid-1;

            else if(p<n)
                low=mid+1;
        }

    }



    return 0;
}
