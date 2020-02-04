#include<stdio.h>
int main()
{
    char arr[100];
    int i=0;
    while(gets(arr)!=EOF)
    {
        i++;

        if(arr[0]=='H'&&arr[1]=='a'&&arr[2]=='j'&&arr[3]=='j')
            printf("Case %d: Hajj-e-Akbar\n",i);
        else if(arr[0]=='U'&&arr[1]=='m'&&arr[2]=='r'&&arr[3]=='a'&&arr[4]=='h')
            printf("Case %d: Hajj-e-Asghar\n",i);
        else
            break;

    }
    return 0;
}
