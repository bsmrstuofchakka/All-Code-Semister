#include<bits/stdc++.h>
using namespace std;


int main()
{
    long int n;
    while(cin>>n)
    {
        map<int,int> mp;

        n=n+1;
        int a,i=0;
        while(mp[n]<2)
        {

            while(n%10==0)
                n=n/10;
            cout<<n<<" "<<mp[n]<<"  "<<++i<<endl;
            mp[n]=mp[n]+1;
            n=n+1;
            //i++;
        }
        cout<<i+1<<endl;

    }

    return 0;
}

