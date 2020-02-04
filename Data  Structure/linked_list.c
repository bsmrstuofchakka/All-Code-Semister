#include<stdio.h>
#include<stdlib.h>
void create();
void display();

struct node
{
    int data;
    struct node* next;
}*start=NULL;

int main()
{
    create();
    display();
    return 0;
}

void create()
{
    char ch;

    do
    {
        struct node *newnode,*current;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nENTER THE INSERTING DATA: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;


        if(start==NULL)
        {
            start=newnode;
            current=newnode;
        }
        else
        {
            current->next=newnode;
            current=newnode;
        }
        printf("Do you want to create  another node?y/n     \n");
        ch=getche();
    }
    while(ch!='n');
}
void display()
{
    struct node* newnode;
    printf("\nTHE LINKED LIST:   ");
    newnode=start;
    while(newnode!=NULL)
    {
        printf("%d----->",newnode->data);
        newnode=newnode->next;
    }
    printf("NULL \n");
}
