#include<iostream>
#include<string.h>
using namespace std;

class student
{
private:
    char Name[64];
    char Id[12];
public:
    student(char *name,char *id)
    {
        strcpy(student::Name,name);
        strcpy(student::Id,id);
    }

    void ShowStudentInfo()
    {
        cout<<"Name :"<<Name<<endl;
        cout<<"ID :"<<Id<<endl;
    }
};

int main()
{
    student Niton("M.Kamruzaman","9393873");
    Niton.ShowStudentInfo();
}
