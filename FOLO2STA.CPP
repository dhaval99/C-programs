#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,i,j;
printf("\nenter num of rows\t");
scanf("%d",&a);
for (i=a;i>=1;i--)
{
for (j=i;j>=1;j--)
{
printf("*");
}
printf("\n");
}
getch();
}