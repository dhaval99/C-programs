#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;
printf("enter your age\t");
scanf("%d",&a);
if (a>=18)
{
printf("person is adult");
}
else
{
printf("person is under age");
}
getch();
}