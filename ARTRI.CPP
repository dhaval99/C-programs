#include<stdio.h>
#include<conio.h>
void main ()
{
clrscr();
float a,b,c,area;
printf("enter the value of base");
scanf("%f",&a);
printf("enter the value of height");
scanf("%f",&b);
c=0.5;
area=a*b*c;
printf("area of triangle is %f",area);
getch();
}