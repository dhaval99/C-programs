#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k,l,m,n,a;
printf("\nenter num of rows");
scanf("%d",&a);
for (i=1;i<=a;i++)
{
for (k=1;k<=a-i;k++)
{
printf(" ");
}
for (j=1;j<=i;j++)
{
printf(" *");
}
printf("\n");
}
for (l=a-1;l>=1;l--)
{
for (n=1;n<=a-l;n++)
{
printf(" ");
}
for (m=1;m<=l;m++)
{
printf(" *");
}
printf("\n");
}
getch();
}