#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,c=1,a;
printf("\nenter number of rows");
scanf("%d",&a);
for (i=1;i<=a;i++)
{
for (j=1;j<=i;j++)
{
printf("%d",c);
c=c+1;
}
printf("\n");
}
getch();
}