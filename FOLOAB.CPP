
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,j;
clrscr();
printf("\nenter num of rows");
scanf("%d",&a);
for (i=1;i<=a;i++)
{
for (j=97;j<97+i;j++)
{
printf("%c",j);
}
printf("\n");
}
getch();
}

