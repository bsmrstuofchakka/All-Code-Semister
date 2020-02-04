#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int stradd(char* ,char*);
int stradd(char* ,int);

int main()
{
    char str[80];

    strcpy(str,"hello");
    stradd(str,"there");

    cout<<str<<endl;

    stradd(str,100);
    cout<<str<<endl;


    return 0;
}

int stradd(char* s1,char* s2)
{
    strcat(s1,s2);
}

int stradd(char* s1,int i)
{
    char temp[100];

    sprintf(temp,"%d",i);
    strcat(s1,temp);
}

