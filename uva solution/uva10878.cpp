#include<bits/stdc++.h>
using namespace std;


int main()
{

    string s;
    int check=0;
    while(getline(cin,s))
    {
        if(check!=0)
        {
            int sum=0;
            for(int i=2; i<10; i++)
            {
                if(i==2&&s[i]=='o')
                    sum=sum+64;
                else if(i==3&&s[i]=='o')
                    sum=sum+32;
                else if(i==4&&s[i]=='o')
                    sum=sum+16;
                else if(i==5&&s[i]=='o')
                    sum=sum+8;
                else if(i==7&&s[i]=='o')
                    sum=sum+4;
                else if(i==8&&s[i]=='o')
                    sum=sum+2;
                else if(i==9&&s[i]=='o')
                    sum=sum+1;


            }
            char ch=sum;
            cout<<ch;




        }
        check=1;
    }

    return 0;
}
