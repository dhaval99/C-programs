#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,i,j,l;
printf("\nenter first number\t");
scanf("%d",&a);
printf("\nenter second number\t");
scanf("%d",&b);
for (i=1;i<=10;i++)
{
for (j=a;j<=b;j++)
{
l=j*i;
printf("\t%d*%d=%d",j,i,l);
}
printf("\n");
}
getch();
}