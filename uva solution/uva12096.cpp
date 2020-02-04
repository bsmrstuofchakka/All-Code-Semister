#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int n;
        cin>>n;
        string s;
        cin.ignore();
        stack<int >st;

        for(int i=0; i<n; i++)
        {
            cin>>s;

            if(s=="PUSH")
            {
                st.push(0);
                cout<<st.top()<<endl;

            }
            else if(s=="DUP")
            {
                int p=st.top();
                st.push(p);
                cout<<st.top()<<endl;
            }
            else if(s=="ADD")
            {
                int p=st.top()+1;
                st.pop();
                st.pop();
                st.push(p);
                cout<<st.top()<<endl;

            }
            else if(s=="UNION")
            {
                int p=st.top();
                st.pop();
                int q=st.top();
                st.pop();
                if(p==q)
                    st.push(p);
                else
                {
                    if(q>p)
                        p=q;
                    st.push(p);
                }
                cout<<st.top()<<endl;
            }
            else if(s=="INTERSECT")
            {
                int p=st.top();
                st.pop();
                int q=st.top();
                st.pop();
                if(p==q)
                    st.push(p);
                else
                    st.push(0);
                cout<<st.top()<<endl;
            }

        }
        cout<<"***"<<endl;
    }



    return 0;
}
