#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num,p,i,b=1;
printf("\nenter number\t");
scanf("%d",&num);
printf("\nenter its power\t");
scanf("%d",&p);
for (i=1;i<=p;i++)
{
b=b*num;
}
printf("\nresult is %d^%d=%d",num,p,b);
getch();
}