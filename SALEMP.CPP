#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float a,b,c,d,e,f;
printf("\nenter employee number");
scanf("%f",&a);
printf("\nenter basic salary");
scanf("%f",&b);
c=(b*9)/100;
d=(b*11)/100;
e=(b*15)/100;
f=(b+c+d-e);
printf("\nhra is %f \nda is %f \npf is %f \ngrandtotal is %f",c,d,e,f);
getch();
}

