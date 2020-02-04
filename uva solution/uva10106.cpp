#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    while(cin>>a>>b)
    {
    int c,d;
    c=a.size();
    d=b.size();

    int p=0,q=0,coun=0,coun1=0;

    while(p<c)
    {
        if(a[p]!='0')
            coun=1;
        p++;
    }
    while(q<d)
    {
        if(b[q]!='0')
            coun1=1;
        q++;
    }
    if(coun==0&&coun1==0)
        cout<<"0";
    else if(coun==0&&coun1==1)
        cout<<"0";
    else if(coun==1&&coun1==0)
        cout<<"0";








    long int arr[10000]= {0};

    int index=0,k=0,l;
    for(int i=d-1; i>=0; i--)
    {
        int temp=0;
        for(int j=c-1; j>=0; j--)
        {
            temp=temp+((b[i]-'0')*(a[j]-'0'))+arr[index];
            arr[index]=temp%10;
            temp=temp/10;
            ++index;
            l=index;
        }
        while(temp>0)
        {
            arr[index]=temp%10;
            temp=temp/10;
            ++index;
            l=index;

        }
        k++;
        index=k;
    }
    int count=0;
    for(int i=l-1; i>=0; i--)
    {
        if(arr[i]!=0)
            count=1;
        if(count==1)
            cout<<arr[i];
    }
    cout<<endl;


}
    return 0;
}
