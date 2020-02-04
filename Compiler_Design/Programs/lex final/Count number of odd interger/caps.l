%{
int count=0;
int others=0;
%}

%%
[1|3|5|7|9] {count ++;}
. {others++;}
%%

int yywrap()
{
return 1;
}
int main(){
printf("Enter the number:");
yylex();
printf("Total odd number: %d\n",count);
printf("Total others number: %d",others);
getch();
return 0;
}