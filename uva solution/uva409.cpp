#include<bits/stdc++.h>
using namespace std;


int check_comparision(string s2,string s1)
{

    transform(s2.begin(),s2.end(),s2.begin(), ::tolower);

    int n=s1.size();
    int k=0,j=0;
    for(int i=0; i<s2.size(); i++)
    {
        if(s2[i]==s1[j]&&s2[i])
        {
            ++j;
            if(j==n)
            {
                ++k;
                j=0;
            }
        }
        else
            j=0;
    }
    return k;

}

int main()
{

    int a,b,m=0;
    while(cin>>a>>b)
    {
        cin.ignore();
        ++m;

        string s1[25];
        string s2[25];
        int arr[2000];
        for(int i=0; i<a; i++)
            cin>>s1[i];
        cin.ignore();
        for(int i=0; i<b; i++)
            getline(cin,s2[i]);

        int max=0;
        for(int i=0; i<b; i++)
        {
            int k=0;
            for(int j=0; j<a; j++)
            {
                k=k+check_comparision(s2[i],s1[j]);

            }
            arr[i]=k;
            if(max<k)
                max=k;
        }
        cout<<"Excuse Set #"<<m<<endl;
        for(int i=0; i<b; i++)
        {
            if(max==arr[i])
                cout<<s2[i]<<endl;
        }
        cout<<endl;


    }


    return 0;
}
