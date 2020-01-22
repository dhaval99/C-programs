#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float a,b,c,average,sum;
printf("\nenter first number");
scanf("%f",&a);
printf("\nenter second number");
scanf("%f",&b);
printf("\nenter third number");
scanf("%f",&c);
average=(a+b+c)/3;
sum=a+b+c;
printf("\nsum is %f and average is %f",sum,average);
getch();
}
