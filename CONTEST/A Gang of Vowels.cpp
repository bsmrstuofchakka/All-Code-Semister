#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int n;
        cin>>n;
        char a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];




        int i=0,j=0,l;
        while(i<n)
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
            {
                j=j+1;
                l=i-1;
                if(i!=0)
                {
                    if(a[l]=='a'||a[l]=='e'||a[l]=='i'||a[l]=='o'||a[l]=='u')
                        j--;
                }
            }
            i++;
        }
        cout<<"Case "<<k<<": "<<j<<endl;

    }


    return 0;
}

