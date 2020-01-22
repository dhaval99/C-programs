#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int reverse(int);
int n,x;
printf("\nenter a num");
scanf("%d",&n);
x=reverse(n);
printf("\n rev=%d",x);
getch();
}
int reverse(int n)
{
int s=0,d;
while (n!=0)
{
d=n%10;
s=s*10+d;
n=n/10;
}
return s;
}
