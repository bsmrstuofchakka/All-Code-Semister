#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    for(int l=1; l<=t; l++)
    {
        long long m,n,p;
        cin>>m>>n;
        //long long prime[3000],isPrime=0;
        //bool mark[1000002];

        vector <int>prime;
        map<int,int>mark;
        vector <int>::iterator it;



        for(long long i=4; i<=n; i=i+2)
        {
            mark[i]=1;
        }

        if(m<=2)
            //prime[++isPrime]=2;
            prime.push_back(2);

        long long limit=sqrt(n)+2;
        for(long long i=3; i<=n; i=i+2)
        {
            if(mark[i]!=1)
            {
                if(i>=m)
                    //prime[++isPrime]=i;
                    prime.push_back(i);


                if(i<=limit)
                {
                    for(long long j=i*i; j<=n; j=j+i*2)
                    {
                        mark[j]=1;
                    }
                }
            }
        }

        for(it=prime.begin();it!=prime.end();it++)
            cout<<*it<<endl;
        cout<<endl;


    }



    return 0;
}
