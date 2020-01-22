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
for (j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
getch();
}