#include<iostream>
#include<string.h>
using namespace std;

class Monitor
{
private:
    int inch;
    char company[10];
    char model[25];

public:
    Monitor(int i,char *c,char *m);
    void ShowInfo();


};

Monitor::Monitor(int i,char *c,char *m)
{
    int inch=i;
    strcpy(company,c);
    strcpy(model,m);
}


void Monitor::ShowInfo()
{
    cout<<"Monitor size :"<<inch<<endl;
    cout<<"Manufacturer :"<<company<<endl;
    cout<<"Model        :"<<model<<endl;

}


int main()
{
    Monitor my(17,"LG","FLATRON ");
    Monitor his(18,"WALTON","KAMLAl");


    cout<<"my monitor is: "<<endl;
    my.ShowInfo();

    cout<<"his monitor is: "<<endl;
    his.ShowInfo();

    return 0;
}
