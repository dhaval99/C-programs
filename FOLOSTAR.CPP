#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,a;
printf("\nenter num of rows\t");
scanf("%d",&a);
for (i=1;i<=a;i++)
{
for (j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
getch();
}