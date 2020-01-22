#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[3][3],b[3][3],c[3][3],i,j,k,l;
printf("enter first matrix");
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
printf("\nenter second matrix");
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
printf("\nb[%d][%d]=",i,j);
scanf("%d",&b[i][j]);
}
}
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
printf("\t%d",b[i][j]);
}
printf("\n");
}
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
c[i][j]=0;
for (k=0;k<3;k++)
{
c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}
printf("\t%d",c[i][j]);
}
printf("\n");
}
getch();
}

