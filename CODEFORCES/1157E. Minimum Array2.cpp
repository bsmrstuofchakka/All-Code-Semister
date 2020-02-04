#include<bits/stdc++.h>
using namespace std;

int main()
{


    int n,input;
    while(cin>>n)
    {
        vector <int>v1,v2,v3;
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



        int k;
        for(int i=0; i<n; i++)
        {
            long int mi=999999999;
            for(int j=0; j<v2.size(); j++)

            {
                // delete element at index 2
                //array.erase(array.begin() + 2);
                if(mi>(v1[i]+v2[j])%n)
                {
                    mi=(v1[i]+v2[j])%n;
                    k=j;
                }

            }
            v3.push_back(mi);
            v2.erase(v2.begin()+k);

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
