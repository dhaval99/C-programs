#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,d,e,f,g;
char c;
printf("\nenter first number");
scanf("%d",&a);
printf("\nenter second number");
scanf("%d",&b);
printf("\nenter math operator");
flushall();
scanf("%c",&c);
if (c=='+')
{
d=a+b;
printf("\nresult is %d",d);
}
else if (c=='-')
{
e=a-b;
printf("\nresult is %d",e);
}
else if (c=='*')
{
f=a*b;
printf("\nresult is %d",f);
}
else if (c=='/')
{
g=a/b;
printf("\nresult is %d",g);
}
getch();
}