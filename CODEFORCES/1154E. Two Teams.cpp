#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,k;
    while(cin>>n>>k)
    {
        vector <int>v1;
        //vector<int>::iterator it1,it2,it3;
        int v2[2*10^5+1];
        map<int,int>mp;
        long long int a,ma,p;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            v1.push_back(a);
            v2[i]=a;

        }

        // delete element at index 2
        //array.erase(array.begin() + 2);
        int cou=0;
        while(v1.size()!=0)
        {
            if(cou==0)
            {
                cou=1;


                //int maxElementIndex = std::max_element(v.begin(),v.end()) - v.begin();
                //int maxElement = *std::max_element(v.begin(), v.end());

                p=max_element(v1.begin(),v1.end())-v1.begin();


                //cout<<p<<" "<<p-k<<" "<<p+k<<endl;

                for(int i=p-k; i<=k+p; i++)
                    if(mp[v1[i]]==0)
                        mp[v1[i]]=1;
                int j,c=0,m;
                m=v1.size();
                for(int i=p-k; i<=k+p; i++)
                {
                    if(i>=0&&i<m)
                    {

                        if(c==0)
                        {
                            c=1;
                            j=i;
                            v1.erase(v1.begin()+j);
                        }
                        else
                            v1.erase(v1.begin()+j);
                    }
                }

                //for(it1=v1.begin(); it1!=v1.end(); it1++)
                    //cout<<*it1<<" ";
                //cout<<endl;





            }
            else
            {
                cou=0;

                p=max_element(v1.begin(),v1.end())-v1.begin();

               // cout<<p<<endl;
               // cout<<"x"<<endl;

                for(int i=p-k; i<=k+p; i++)
                {
                    if(mp[v1[i]]==0)
                        mp[v1[i]]=2;
                }
                int c=0,j;
                int m=v1.size();
                for(int i=p-k; i<=k+p; i++)
                {
                    if(i>=0&&i<m)
                    {
                        if(c==0)
                        {
                            c=1;
                            j=i;
                            v1.erase(v1.begin()+j);
                        }
                        else
                            v1.erase(v1.begin()+j);
                    }
                }


                //for(it1=v1.begin(); it1!=v1.end(); it1++)
                   // cout<<*it1<<" ";
                //cout<<endl;

            }


        }
        for(int i=0; i<n; i++)
        {
            cout<<mp[v2[i]];
        }
        cout<<endl;
        //cout<<"c"<<endl;





    }


    return 0;
}
