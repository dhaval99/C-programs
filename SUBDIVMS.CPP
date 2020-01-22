#include<stdio.h>
#include<conio.h>
void main ()
{
int b,c,sum,mul,sub;
float division;
clrscr();
printf("\nenter first number");
scanf("%d",&b);
printf("\nenter second number");
scanf("%d",&c);
sum=b+c;
printf("\nsum of %d and %d is %d",b,c,sum);
mul=b*c;
printf("\nmul of %d and %d is %d",b,c,mul);
sub=b-c;
printf("\nsub of %d and %d is %d",b,c,sub);
division=b/c;
printf("\ndivision of %d and %d is %f",b,c,division);
getch();
}
