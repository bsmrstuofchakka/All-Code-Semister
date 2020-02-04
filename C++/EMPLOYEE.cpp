#include<iostream>
#include<dos.h>
using namespace std;

class Employee
{
private:
    char* emp_name;
    int emp_join_year;
    float emp_salary;

public:
    Employee(char* _name,int _year,float _salary);

private:
    int worked_year(void);
    void print_info();

};

int Employee::worked_year(void)
{
    struct date current_date;
    int year_difference;
    getdate(&current_date);
    year_difference=current_date.da_year-emp_join_year;
    return(year_difference);

}

void Employee::print_info(void)
{
    cout<<"Name:    "<<emp_name<<endl;
    cout<<"Join date:  "<<emp_join_year<<endl;
    cout<<"Salary:   "<<emp_salary<<endl;
    cout<<"Worked:  "<<worked_year()<<"years "<<endl;

}
Employee::Employee(char _name,int _year,float _salary)
{
    emp_name=_name;
    emp_join_year=_year;
    emp_salary=_salary;
    print_info();


}



int main()
{
    Employee RAM("Ram",1997,12500);
    Employee SAM("Sam",1986,7500);
    Employee JAdU("Jadu",1981,8700);
    Employee MADHU("Madhu",1974,27500);


    return 0;
}
