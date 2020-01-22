#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,a[3][3];
printf("\nenter one matrix");
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
printf("\na[%d][%d]=",i,j);
scanf("%d",&a[i][j]);
}
}
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
printf("\t%d",a[i][j]);
}
printf("\n");
}
getch();
}
