#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n;
printf("\nenter number of month\n");
scanf("%d",&n);
switch (n)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 9:
case 12:
printf("\ndays are 31");
break;
case 4:
case 6:
case 10:
case 11:
printf("\ndays are 30");
break;
default:
printf("\ndays are 28");
}
getch();
}
