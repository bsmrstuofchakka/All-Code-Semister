#include<stdio.h>
struct node
{
    int a;
    struct node *next;
};
void gen_link(struct node pr)
{
    if(pr.a==0)
        return;
    printf("%d ",pr.a);
    gen_link(*pr.next);
}
int main()
{
    struct node var1,var2,var3,var4;
    //scanf("%d%d%d%d",&var1,&var2,&var3,&var4);
    var1.a=10;
    var1.next=&var2;
    var2.a=32;
    var2.next=&var3;
    var3.a=94;
    var3.next=&var4;
    var4.a=0;
    gen_link(var1);
    return 0;
}
