#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        unsigned long long int s;
        cin>>s;
        unsigned long int n;
        n=(sqrt(8*s+1)-1)/2;

        cout<<n<<endl;
    }



    return 0;
}
