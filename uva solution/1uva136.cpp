#include<bits/stdc++.h>
using namespace std;


int main()
{
    set<long long int >v;
    set<long long int > ::iterator it;
    v.insert(1);
    for(int i=1; i<1500; i++)
    {
        it=v.begin();

        v.insert(*it*2);
        v.insert(*it*3);
        v.insert(*it*5);
        v.erase(*it);

    }

        it=v.begin();
        cout<<"The 1500'th ugly number is "<<*it<<"."<<endl;


    return 0;
}
