#include<bits/stdc++.h>
using namespace std;

int main()
{


    int n,input;
    while(cin>>n)
    {
        vector <int>v1,v2,v3,v4;
        vector <int>::iterator it;
        //int visited[2*10^6]= {0};
        //int v3[2*10^5];
        for(int i=0; i<n; i++)
        {
            cin>>input;
            v1.push_back(input);
        }

        for(int i=0; i<n; i++)
        {
            cin>>input;
            v2.push_back(input);
        }

        sort(v2.begin(),v2.end());




        for(int i=0; i<n; i++)
        {
            int t=0,mid,a,b,e,mi=9999999;
            a=0,b=v2.size()-1;
            while(a<=b)
            {
                mid=(a+b)/2;
                int c=(v1[i]+v2[mid]);
                int d=(v1[i]+v2[mid])%n;
                if(mi>d)
                {
                    mi=d;
                    e=mid;
                }
                //mi=min(mi,d);
                if(c==n||a==b)
                {

                    // delete element at index 2
                    //array.erase(array.begin() + 2);

                    //visited[mid]=1;
                    v3.push_back(mi);
                    it=(v2.begin()+e);
                    cout<<*it<<endl;

                    v2.erase(v2.begin()+e);

                    break;
                }
                else if(c>n)
                {
                    b=mid-1;

                }
                else if(c<n)
                    a=mid+1;


            }
            //for(int i=0;i<v2.size();i++)
            // cout<<v2[i]<<" ";
            //cout<<endl;
        }

        for(int i=0; i<n; i++)
        {
            if(i==n-1)
                cout<<v3[i]<<endl;
            else
                cout<<v3[i]<<" ";
        }



    }


    return 0;
}
