#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    cin.ignore();
    string s;
    while(getline(cin,s))
    {


        int j=0,count=0,k=0,temp=0,sp=0;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' '&&sp==1)
            {
                ++j;
                sp=0;
                temp=0;

            }
            else if(s[i]!=' '&&temp==0)
            {
                for(int l=i+1; l<=j+i&&l<s.size(); l++)
                {
                    if(s[l]==' ')
                    {
                        count=1;
                        i=j+i;
                        break;
                    }
                }


                if(temp==0&&count==0)
                {
                    k=i+j;
                    cout<<s[k];
                    sp=1;
                    temp=1;

                }
                count=0;
            }





        }
        cout<<endl;




    }
    return 0;
}
