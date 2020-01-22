#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int c=1,a,b,s=1,i,r=1;
printf("1+x^1/1!-x^2/2!+...+x^n/n!");
printf("\nenter value of x\t");
scanf("%d",&a);
printf("\nenter value of n\t");
scanf("%d",&b);
for (i=1;i<=b;i++)
{
if (c%2!=0)
{
r=r*a;
c=c*i;
s=s+r/c;
}
else
{
r=r*a;
c=c*i;
s=s-r/c;
}
}
printf("\nsum=%d",s);
getch();
}