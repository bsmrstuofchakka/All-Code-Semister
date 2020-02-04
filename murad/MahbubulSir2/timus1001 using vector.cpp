#include<iostream>
#include<math.h>
#include<stdio.h>
#include<vector>
using namespace std;


int main()
{
    vector<double>arr;
    double n;

    while(cin>>n)
    {
        arr.push_back(n);
    }

    for(int i=arr.size()-1;i>=0;i--)
        printf("%.4lf\n",sqrt(arr[i]));



    return 0;
}
