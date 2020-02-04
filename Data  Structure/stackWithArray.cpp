#include<bits/stdc++.h>
using namespace std;

int arr[11],i=0;

void push(int n)
{
    if(i<=10)
        arr[++i]=n;
    else
        cout<<"Waring!!!The Stack is Full."<<endl<<endl;
}

void pop()
{
    if(i<1)
        cout<<"Warning!!!The Stack is Empty."<<endl<<endl;
    else
        arr[--i];

}
void top()
{
    if(i>0)
        cout<<arr[i]<<endl<<endl;
    else
        cout<<"Warning!!!!The Stack is Empty."<<endl<<endl;
}

void display()
{
    if(i==0)
    {
        cout<<"Warning!!!The Stack is Empty."<<endl<<endl;
    }
    else
    {

        cout<<endl<<"Total Elements "<<endl;
        for(int j=i; j>0; j--)
        {
            cout<<arr[j]<<endl;
        }
        cout<<endl<<endl<<endl;
    }
}

void size()
{
    cout<<"Number of total Elements: "<<i<<endl<<endl;
}


void menu()
{
    while(1)
    {
        cout<<endl<<"Enter the any number between 1 to 6 :"<<endl;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Top"<<endl;
        cout<<"4.display"<<endl;
        cout<<"5.Size"<<endl;
        cout<<"6.exits"<<endl;

        int choice,n;
        cout<<endl;
        cin>>choice;

        switch(choice)
        {
        case 1:
        {
            cout<<endl<<"Enter the element number: ";
            cin>>n;
            push(n);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            top();
            break;
        }
        case 4:
        {
            display();
            break;
        }
        case 5:
        {
            size();
            break;
        }
        case 6:
            return;
        default:
        {
            cout<<"Wrong key!!!!, Please try again"<<endl<<endl;
            break;
        }
        }
    }
}

int main()
{
    menu();

    return 0;
}
