#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
void mtr(int [3][3]);
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
mtr(a);
getch();
}
void mtr(int a[3][3])
{
int i,j;
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
if (i>=j)
printf("\t%d",a[i][j]);
else
printf("\t");
}
printf("\n");
}
}