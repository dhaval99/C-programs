#include<stdio.h>
#include<conio.h>
void main()
{
int a,j,i;
clrscr();
printf("\nenter num of rows\t");
scanf("%d",&a);
for (i=a;i>=1;i--)
{
for (j=i;j<=a;j++)
{
printf("%d",j);
}
printf ("\n");
}
getch();
}

