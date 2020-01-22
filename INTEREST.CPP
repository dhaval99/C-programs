#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float a,b,c,interest;
printf("enter the pricipal amount");
scanf("%f",&a);
printf("enter the rate of interest");
scanf("%f",&b);
printf("enter the number of years");
scanf("%f",&c);
interest=a*b*c/100;
printf("interest is %f",interest);
getch();
}