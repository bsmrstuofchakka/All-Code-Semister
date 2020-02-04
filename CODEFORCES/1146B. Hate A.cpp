#include<bits/stdc++.h>
using namespace std;

int main()
{
    string t;
    while(cin>>t)
    {
        string s1="",s3=t;
        int count=0,k,p=0,q;
        for(int i=0; i<t.size(); i++)
        {
            if(t[i]=='a')
            {
                count++;
                p=0;
            }
            else
            {
                  p++;
            }
        }
        //    s.erase(std::remove(s.begin(), s.end(), c), s.end())
        t.erase(remove(t.begin(), t.end(), 'a'), t.end());

        //cout<<k<<endl;

        if((s3.size()-count)%2!=0||(s3.size()-p-count)>p)
        {
            cout<<":("<<endl;
            continue;
        }
        /*
        else if(k==s3.size()&&t.size()!=0)
        {
            cout<<":("<<endl;
            continue;
        }        */

        count=s3.size()-count;
        //cout<<count<<endl;
        int j=count/2,temp=0;
        for(int i=0; i<count/2; i++)
        {
            if(t[i]!=t[j])
            {
                temp=1;
                break;
            }
            ++j;
        }
        //cout<<s3<<" "<<s1<<endl;
        //cout << ss.substr(3, 5) << std::endl;
        if(temp==1)
            cout<<":("<<endl;
        else
            cout<<s3.substr(0,s3.size()-count/2)<<endl;
    }



    return 0;
}
