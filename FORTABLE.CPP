#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b=a,i;
printf("\nenter a number");
scanf("%d",&a);
for (i=1;i<=10;i++)
{
b=a*i;
printf("\n%d*%d=%d",a,i,b);
}
getch();
}