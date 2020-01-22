#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,a[5],i,b=0;
printf("\nHow many num");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("\na[%d]=",i);
scanf("%d",&a[i]);
}
for (i=0;i<n;i++)
{
printf("\n%d",a[i]);
if (a[i]>b)
b=a[i];
}
printf("\ngrt num is %d",b);
getch();
}

