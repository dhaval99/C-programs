#include<stdio.h>
#include<conio.h>
void main()
{
void insert(int[],int,int,int);
clrscr();
int n,a[5],i,loc,num;
printf("\nHow many num");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]);
}
printf("\nenter location");
scanf("%d",&loc);
printf("\nenter number");
scanf("%d",&num);
insert(a,n,loc,num);
getch();
}
void insert(int a[],int n,int loc,int num)
{
int i;
for (i=n;i>loc;i--)
{
a[i]=a[i-1];
}
a[loc]=num;
n++;
for (i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
}