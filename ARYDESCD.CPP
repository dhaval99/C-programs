#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[5],n,i,bubshot,j;
printf("\nHow many num");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("\na[%d]=",i);
scanf("%d",&a[i]);
}
for (i=0;i<n-1;i++)
{
for (j=1;j<n-i;j++)
{
if (a[j-1]<a[j])
{
bubshot=a[j-1];
a[j-1]=a[j];
a[j]=bubshot;
}
}
}
for (i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
getch();
}

