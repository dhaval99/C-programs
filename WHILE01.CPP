#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a=1;
printf("\nenter a number");
scanf("%d",&a);
while (a<=10)
{
printf("\n%d",a);
a++;
}
getch();
}