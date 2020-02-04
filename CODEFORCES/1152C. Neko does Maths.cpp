#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long a,b;
    while(cin>>a>>b)
    {
        long long int na,nb,gcd,lcm,max,k=0;

        max=(a*b)/__gcd(a,b);

        for(long long i=1; i<=sqrt(abs(a-b)); i++)
        {

            if(abs(a-b)%i==0)
            {
                na=(a+i-a%i);
                nb=(b+i-b%i);
                lcm=(na*nb)/__gcd(na,nb);

                if(max>lcm)
                {
                    max=lcm;
                    k=na-a;
                    //cout<<lcm<<endl;
                }
                na=(a+abs(a-b)/i)-a%(abs(a-b)/i);
                nb=(b+abs(a-b)/i)-b%(abs(a-b)/i);
                lcm=(na*nb)/__gcd(na,nb);

                if(max>lcm)
                {
                    max=lcm;
                    k=na-a;
                    //cout<<lcm<<endl;
                }
            }

        }


        cout<<k<<endl;






    }



    return 0;
}
