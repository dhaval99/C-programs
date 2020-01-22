#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,loc,num,i,a[5];
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
getch();
}
