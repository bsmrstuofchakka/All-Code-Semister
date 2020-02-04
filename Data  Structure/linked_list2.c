#include<stdio.h>
#include<stdlib.h>
void inserting();
void display();
void search();
void delete();

struct node
{
    int data;
    struct node* next;
}*head=NULL;

int main()
{

    inserting();
    display();
    search();
    delete();

    return 0;
}
void inserting()
{
    char ch;
    do
    {
        struct node *temp,*ptr;

        temp=(struct node*)malloc(sizeof(struct node));
        printf("\nPLEASE ENTER THE DATA:   ");
        scanf("%d",&temp->data);
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            ptr=temp;
        }
        else
        {
            ptr->next=temp;
            ptr=temp;
        }
        printf("\nDO YOU WANT TO CRFEATE ANOTHER NODE YES/NO:   \n ");
        ch=getche();
    }
    while(ch!='n');
}
void display()
{
    struct node* current;
    if(current==NULL)
        printf("LIST IS EMPTY");
    else
    {
        printf("\nTHE LINKED LIST: \n");
        current=head;
        while(current!=NULL)
        {
            printf("%d---->",current->data);
            current=current->next;
        }
        printf("NULL\n");
    }
}
void search()
{
    int element;
    struct node* ptr;
    int i=1,count=0;
    printf("PLEASE ENTER THE SEARCHING ELEMENT  :");
    scanf("%d",&element);
    ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->data==element)
        {
            count=1;
            break;
        }
        else
        {
            ptr=ptr->next;
            i++;
        }
    }
    if(count==0)
        printf("ELEMENT IS NOT FOUND \n");
    else
        printf("ELEMENT`S POSITION IS:%d\n",i);
}

void delete()
{
    int element;
    struct node *ptr,*ptr1;
    printf("\nPLEASE! ENTER YOUR DELETED ELEMENT:   ");
    scanf("%d",&element);
    ptr=head;
    ptr1=head;
    while(ptr!=NULL)
    {
        if(ptr->data==element)
        {
              ptr1=ptr->next;
              ptr=ptr1->next;
              free(ptr);
        }
display();
break;
    }




}
