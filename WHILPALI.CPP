#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,s=0,d,x;
printf("\nenter a number");
scanf("%d",&n);
x=n;
while (n!=0)
{
d=n%10;
s=s*10+d;
n=n/10;
}
if (x==s)
{
printf("\nnum is palindrome");
}
else
{
printf("\nnum is not palindrome");
}
getch();
}