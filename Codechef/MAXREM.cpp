#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    while(cin>>n)
    {
        set<int>S;

        set<int> ::iterator it;
        long long  p;
        for(int i=0; i<n; i++)
        {
            cin>>p;
            S.insert(p);
        }
       int si=S.size();
       int j=0;
        for(it=S.end();it!=S.begin();it--)
        {
               ++j;

               if(j==3)
               {
                      cout<<*it<<endl;
                      break;
               }

        }


    }


    return 0;
}
