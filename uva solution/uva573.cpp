#include<bits/stdc++.h>
using namespace std;

int main()
{
    int mh,h,d,p;
    while(cin>>mh&&mh>0)
    {
        cin>>h>>d>>p;
        float ih,dc,hfc,has,fhfc;
        ih=0;
        dc=h;
        hfc=dc;

        has=hfc-d;
        fhfc=has;

        int i=1;
        while(i>0)
        {
            ++i;
            ih=has;
            dc=dc-((dc*p)/100);
            hfc=ih+dc;
            has=hfc-d;
            if(hfc>=mh)
            {
                cout<<"success on day "<<i<<endl;
                break;
            }
            if(dc<fhfc)
            {
                cout<<"failure on day "<<i<<endl;
                break;
            }
        }



    }



    return 0;
}
