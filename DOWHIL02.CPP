#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,i,j;
printf("\nenter num  of rows");
scanf("%d",&a);
i=1;
do
{
j=1;
do
{
printf("%d",j);
j++;
}
while (j<=i);
i++;
printf("\n");
}
while (i<=a);
getch();
}
