#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,i,j,k;
printf("\nenter num of rows");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
for(k=1;k<=a-i;k++)
{
printf(" ");
}
for (j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
getch();
}
