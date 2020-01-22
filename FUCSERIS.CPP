#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float series(float,float);
float a,b,x;
printf("\n1+x^1/1!+x^2/2!+...+x^n/n!");
printf("\nenter value of x\t");
scanf("%f",&a);
printf("\nenter value of n\t");
scanf("%f",&b);
x=series(a,b);
printf("\nsum=%f",x);
getch();
}
float series(float a,float b)
{
float f=1,s=1,i,r=1;
for (i=1;i<=b;i++)
{
r=r*a;
f=f*i;
s=s+r/f;
}
return s;
}