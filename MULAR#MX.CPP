#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[3][3],i,j,sr=0,sc=0;
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
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
printf("\t%d",a[i][j]);
sr=sr+a[i][j];
}
printf("\t%d",sr);
sr=0;
printf("\n");
}
for  (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
sc=sc+a[j][i];
}
printf("\t%d",sc);
sc=0;
}
getch();
}
