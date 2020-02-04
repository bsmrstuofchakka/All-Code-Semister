#include<iostream>
#include<cstdio>
using namespace std;

class date
{
private:
    int day;
    int month;
    int year;

public:
    date(char* );
    date(int m,int d,int y);
    void show_date();
};

date::date(char* d)
{
    sscanf(d,"%d%*c%d%*c%d",&month,&day,&year);
}

date::date(int m,int d,int y)
{
    day=d;
    month=m;
    year=y;
}

void date::show_date()
{
    cout<<month<<"/"<<day;
    cout<<"/"<<year<<endl;
}


int main()
{
    date ob1(12,4,2003),ob2("10/22/2003");

    ob1.show_date();
    ob2.show_date();

    return 0;
}
