#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    string a[110];
    string b[]= {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    for(int i=0; i<n; i++)
        cin>>a[i];



    int j=0,check=0;
    int m=16;





    for(int i=0; i<m; i++)
    {
        cout<<a[j]<<": "<<b[i]<<endl;

        if(check==0&&j==n-1)
        {
           j=-1;
        }
        if(check==1&&i==15)
        {
            i=-1;
            m=m-16;


        }




            j++;
    }


    return 0;
}
