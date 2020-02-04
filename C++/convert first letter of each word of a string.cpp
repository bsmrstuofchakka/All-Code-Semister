#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[30];
    cout<<"Enter a string: ";
    gets(a);
    for(int i=0; a[i]!=' '; i++)
    {
        if(i==0)
        {
            if(islower(a[i]))
                a[i]=toupper(a[i]);
        }
        else
        {
            if(a[i]!=' ')
            {
                if(toupper(a[i]))
                    a[i]=tolower(a[i]);
                else
                {
                    i++;
                    if(islower(a[i]))
                        a[i]=toupper(a[i]);
                }


            }


        }
    }
    cout<<"New String is: "<<a;









    return 0;
}
