#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,sub,sum,d;
char c;
printf("\nenter first number\t");
scanf("%d",&a);
printf("\nenter second number\t");
scanf("%d",&b);
printf("\nenter operator\t");
flushall();
scanf("%c",&c);
switch (c)
{
case '+':
d=a+b;
printf("result is %d",d);
break;
case '-':
d=a-b;
printf("result is %d",d);
break;
case '*':
d=a*b;
printf("result is %d",d);
break;
default:
d=a/b;
printf("result is %d",d);
}
getch();
}

