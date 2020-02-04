#include<stdio.h>
struct mystructure
{
    int x;
    struct mystructure* next;
};
void print(struct mystructure *ptr)
{
    while(1)
    {
        if(ptr==NULL)
        {
            printf("NULL");
            break;
        }
        printf("%d\n",ptr->x);
        ptr=ptr->next;
    }
}
int main()
{
    struct mystructure a,b,c,d,e;
    a.x=5;
    a.next=&b;
    b.x=9;
    b.next=&c;
    c.x=13;
    c.next=&d;
    d.x=19;
    d.next=&e;
    e.x=32;
    e.next=NULL;
    print(&a);
    return 0;
}
