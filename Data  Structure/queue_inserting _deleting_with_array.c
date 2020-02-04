#include<stdio.h>
#define MAX 10

int choice();
void inserting_queue();
void deleting_queue();
void displaying_queue();
int rear=0,front=0;
int queue[MAX];


int main()
{
    while(choice()!=4)
        choice();
    return 0;
}
int choice()
{
    int ch;
    printf("\t\t1.INSERTING IN QUEUE \n");
    printf("\t\t2.DELETING IN QUEUE \n");
    printf("\t\t3.DISPLAYING THE QUEUE \n");
    printf("\t\t4.EXIST \n");
    printf("\nPLEASE ENTER YOUR CHOICE:   ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        inserting_queue();
        break;
    case 2:
        deleting_queue();
        break;
    case 3:
        displaying_queue();
        break;
    case 4:
        break;
    }
    return(ch);
}

void inserting_queue()
{
    if(front==MAX)
        printf("QUEUE IS FULL");

    else
    {
        int element;
        printf("\nPLEASE, ENTER YOUR ELEMENT    ");
        scanf("%d",&element);
        queue[rear]=element;
        rear++;
    }
}

void deleting_queue()
{
    if(front==rear)
        printf("QUEUE IS EMPTY  \n");
    else
    {
        printf("THE DELETED QUEUE IS :%d",queue[front]);
        front=front+1;
        rear--;
    }
}
void displaying_queue()
{
    int i;
    if(front==rear)
        printf("QUEUE IS EMPTY \n");
    else
    {
        printf("\t\t\nDISPLAYING THE QUEUE:  \n");
        for(i=rear-1;i>=0;i--)
            printf("%d ",queue[i]);
    }
}


