#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,s=0,avg,a[20],sum;
printf("\nHow many num\t");
scanf("%d",&n);
for (i=0;i<n;i++)
{
printf("\na[%d]=",i);
scanf("%d",&a[i]);
s=s+a[i];
}
avg=s/n;
for (i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
printf("\n sum=%d \n average=%d",s,avg);
getch();
}