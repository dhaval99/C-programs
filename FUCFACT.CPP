#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int fac(int);
int a,x;
printf("\nenter a number");
scanf("%d",&a);
x=fac(a);
printf("\nfact=%d",x);
getch();
}
int  fac(int p)
{
int r=1,i;
for (i=1;i<=p;i++)
{
r=r*i;
}
return r;
}