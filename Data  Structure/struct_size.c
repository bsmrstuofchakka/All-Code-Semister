#include<stdio.h>
struct student
{
    char name[24];
    long int ID_Name;
    char dept_name[5];
    float cgpa;
} murad,rakib,rock;
int main()
{
    struct student;
    printf("%d",sizeof(murad));
    return 0;
}
