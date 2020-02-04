#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int i,j,b,c,m,n,k=0,x,d,p,q;
    cin>>b>>c;
    n=b;
    m=c;

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            d=b*b-c;
            if(d>=0)
            {
                if(d==0)
                {
                    x=-b;
                    k++;
                }
                else
                {
                    p=-b+sqrt(d);
                    q=-b-sqrt(d);
                    if(x==p||x==q)
                        k--;
                    else
                        k=k+2;

                }
            }
        }
    }
    cout<<k<<endl;

    return 0;
}
