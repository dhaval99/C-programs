#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,s=0,d;
printf("\nenter one num");
scanf("%d",&n);
while (n!=0)
{
d=n%10;
s=s+d;
n=n/10;
}
printf("\nsum=%d",s);
getch();
}
