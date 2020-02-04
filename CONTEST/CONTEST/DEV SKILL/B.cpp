#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s[9]={"never","be","so","happy","when","you","are","and","sad"};
    int count=0;
    string n;
    cin>>n;
    for(int i=0;i<9;i++)
    {
        if(s[i]==n)
        {
            count=1;
            break;
        }
    }
    if(count==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}

