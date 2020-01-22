#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,x,s=0,d;
printf("\nenter a num");
scanf("%d",&n);
x=n;
while (n!=0)
{
d=n%10;
s=s+d*d*d;
n=n/10;
}
if (x==s)
{
printf("\nnum is armstrong num");
}
else
{
printf("\nnum is not armstrong num");
}
getch();
}

