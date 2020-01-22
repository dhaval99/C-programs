#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,s=0,d;
printf("\nenter a num");
scanf("%d",&n);
while (n!=0)
{
d=n%10;
s=s*10+d;
n=n/10;
}
printf("\n rev=%d",s);
getch();
}