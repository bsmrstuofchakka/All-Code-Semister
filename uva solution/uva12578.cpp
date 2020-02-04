#include<bits/stdc++.h>
#define PI 2*acos(0)
using namespace std;


int main()
{

    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        int n;
        double l,w,TArea,CArea,r,RArea;

        cin>>n;
        l=n;

        w=(6*l)/10;

        TArea=(l*w);

        r=l/5;

        CArea = PI*r*r;
        RArea= TArea-CArea;

        printf("%.2lf %.2lf\n",CArea,RArea);





    }



    return 0;
}
