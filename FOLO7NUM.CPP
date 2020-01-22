#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,i,j;
printf("\nenter num of rows");
scanf("%d",&a);
for (i=1;i<=a;i++)
{
for (j=a;j>=i;j--)
{
printf("%d",j);
}
printf("\n");
}
getch();
}