#include<iostream>
#include<cstring>
using namespace std;

class mystr
{
    char str[255];
public:
    void buildstr(char *s);
    void showstr();

};

void mystr::buildstr(char *s)
{

    if(!*s)
        *str='\0';
    else
        strcat(str,s);
}
void mystr::showstr()
{
    cout<<str<<endl;
}

int main()
{
    mystr s;
    s.buildstr("");
    s.buildstr("Hello");
    s.buildstr(" there");

    s.showstr();

    return 0;
}
