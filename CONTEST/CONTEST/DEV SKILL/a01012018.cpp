#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        char s[115];

        int j=0;

        scanf("%s",s);
        int len=strlen(s);


        for(int i=0; i<len; i++)
        {
            if(s[i]=='+')
                j++;
        }



        cout<<"Happy New Year-"<<2018+j<<endl;





    }



    return 0;
}

