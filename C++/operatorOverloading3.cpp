#include<iostream>
#include<cstdio>
using namespace std;


class date
{
private:
    int day,month,year;

public:
    date(char *d);
    date(int d,int m,int y);
    void show_date();
};

date::date(char *d)
{
    sscanf(d, "%d%*c%d%*c%d",&day,&month,&year);
}

date::date(int d,int m,int y)
{
    day=d;
    month=m;
    year=y;
}
void date::show_date()
{
    cout<<day<<"/"<<month<<"/"<<year<<endl;
}

int main()
{
    date ob1(4,12,2003),ob2("22/10/2003");
    ob1.show_date();
    ob2.show_date();

    return 0;
}
