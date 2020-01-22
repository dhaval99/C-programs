#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,loc,a[5],num;
printf("\nHow many num");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("\na[%d]=",i);
scanf("%d",&a[i]);
}
printf("\nenter location");
scanf("%d",&loc);
for  (i=loc;i>n;i++)
{
a[i]=a[i+1];
}
a[loc]=a[loc+1];
n--;
for (i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
getch();
}


