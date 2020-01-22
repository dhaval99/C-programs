#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;
printf("enter year\t");
scanf("%d",&a);
if ((a%400)==0)
{
printf("year is leap year");
}
else if((a%100)==0)
{
printf("year is not leap year");
}
else if ((a%4)==0)
{
printf("year is leap year");
}
else
{
printf("year is not leap year");
}
getch();
}