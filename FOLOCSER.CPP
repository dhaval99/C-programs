#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float f=1,a,b,s=1,i,r=1;
printf("\n1+x^1/1!+x^2/2!+...+x^n/n!");
printf("\nenter value of x\t");
scanf("%f",&a);
printf("\nenter value of n\t");
scanf("%f",&b);
for (i=1;i<=b;i++)
{
r=r*a;
f=f*i;
s=s+r/f;
}
printf("\nsum=%f",s);
getch();
}

