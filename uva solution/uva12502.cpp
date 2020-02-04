#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int each_person_work=(a+b)/3;
        int A_extra_work=(a-each_person_work);
        int A_taka=(A_extra_work*c)/each_person_work;
        if(A_taka>0)
            cout<<A_taka<<endl;
        else
            cout<<"0"<<endl;


    }


    return 0;
}
