#include<stdio.h>
#define MAX 10
int choice();
void push();
void pop();
void top();
void display();
int stk[MAX];
int TOP=-1;
int main()
{
    while(choice()!=5)
    {
        choice();
    }
    return 0;
}
int choice()
{
    int ch;
    printf("\t\t1.push\n");
    printf("\t\t2.pop\n");
    printf("\t\t3.top element\n");
    printf("\t\t4.display\n");
    printf("\t\t5.exist\n");
    printf("\t\tenter the choice:   ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        top();
        break;
    case 4:
        display();
        break;
    case 5:
        break;
    default:
        printf("SORRY YOU ENTERED THE INVALID KEY!!!PLEASE TRY AGAIN \n");
    }
    return ch;
}
void push()
{
    int element;
    if(TOP==MAX-1)
        printf("STACK IS FULL \n");
    else
    {
        printf("THE ELEMENT IS:  ");
        scanf("%d",&element);
        stk[++TOP]=element;
    }
}
void pop()
{
    int data;
    if(TOP==-1)
        printf("STACK IS EMPTY \n");
    else
    {
        data=stk[TOP];
        printf("top element %d is deleted \n",data);
        TOP--;
    }
}
void top()
{
    if(TOP==-1)
        printf("top element is empty\n");
    else
        printf("top element is: %d\n",stk[TOP]);
}
void display()
{
    int i;
    printf("ELEMENT OF STACK: ");
    for(i=TOP;i>=0;i--)
        printf("%d ",stk[i]);
}
