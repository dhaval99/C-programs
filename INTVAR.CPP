#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float a,b;
printf("\nenter first number");
scanf("%f",&a);
printf("\nenter second number");
scanf("%f",&b);
a=a+b;
b=a-b;
a=a-b;
printf("\nfirst number is %f \nsecond number is %f",a,b);
getch();
}
