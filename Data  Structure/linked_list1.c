#include<stdio.h>
#include<stdlib.h>
void inserting();
void deleting();
void displaying();
int choice();

struct node
{
    int data;
    struct node* next;
}*start=NULL;

int main()
{
    while(choice()!=4)
        choice();
    return 0;
}

int choice()
{
    int ch;
    printf("1.DATA INSERTION \n");
    printf("2.DATA DELETION \n");
    printf("3.DATA DISPLAYING \n");
    printf("4.EXIST \n");

    printf("PLEASE ENTER YOUR CHOICE   :");

    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        inserting();
        break;
    case 2:
        deleting();
        break;
    case 3:
        displaying();
        break;
    case 4:
        break;

    default:
        printf("YOU ENTERED THE WRONG KEY!!!!! PLEASE TRY AGAIN");
    }
    return(ch);




}




void inserting()
{
    char c;

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
        c=getche();
    }
    while(c!='n');
}
void displaying()
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

void deleting()
{
    struct node* temp;
    int element;
    printf("ENTER YOUR DELETED ELEMENT:   ");
    if(start==NULL)
        printf("DATA IS EMPTY \n");
    else if(start->data==element)
       start=start->next;
    else
    {
        *temp=start;






    }





    }

