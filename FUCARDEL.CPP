#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
void desc(int[],int);
int n,a[5];
printf("\nHow many num");
scanf("%d",&n);
desc(a,n);
getch();
}
void desc(int a[],int n)
{
int i,loc,num;
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
}
