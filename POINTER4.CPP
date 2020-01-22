#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
void intvar(int,int);
int p,q;
printf("\nenter first number");
scanf("%d",&p);
printf("\nenter second number");
scanf("%d",&q);
printf("\nBefore function call first number is %d second number is %d",p,q);
intvar(p,q);
printf("\nAfter function call first number is %d second number is %d",p,q);
getch();
}
void intvar(int a,int b)
{
a=a+b;
b=a-b;
a=a-b;
printf("\nInside function first number is %d second number is %d",a,b);
}



