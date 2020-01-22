#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,a[3][3],s=0,c=0;
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
s=s+a[i][i];
c=c+a[i][3-i-1];
}
printf("\nsum of major diagonal=%d\n",s);
printf("\nsum of minor diagonal=%d\n",c);
getch();
}
