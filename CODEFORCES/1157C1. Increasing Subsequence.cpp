#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    while(cin>>n)
    {
        vector<int>v;
        int m,p=-1;
        string s="";
        for(int i=0; i<n; i++)
        {
            cin>>m;
            v.push_back(m);
        }
        m=n;
        int i=0;
        while(m>1)
        {
            if(v[i]<v[v.size()-1]&&p<v[i])
            {
                s=s+"L";
                p=v[i];
                v.erase(v.begin()+i);

            }
            else
            {
                if(v[v.size()-1]>p)
                {
                    s=s+"R";
                    p=v[v.size()-1];
                    v.erase(v.begin()+(v.size()-1));
                }



            }
            --m;
        }
        if(v[0]==n)
            s=s+"L";
        cout<<s.size()<<endl;
        cout<<s<<endl;







    }



    return 0;
}
