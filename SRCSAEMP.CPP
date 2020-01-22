#include<stdio.h>
#include<conio.h>
void main()
{
struct employee
{
int a;
float b;
char name[10];
}x;
clrscr();
float c,d,e,f,b;
printf("\nenter employee number");
scanf("%d",&x.a);
printf("\nenter basic salary");
scanf("%f",&x.b);
printf("enter name");
scanf("%s",&x.name);
c=(x.b*9)/100;
d=(x.b*11)/100;
e=(x.b*15)/100;
f=(x.b+c+d-e);
printf("\nhra is %f \nda is %f \npf is %f \ngrandtotal is %f",c,d,e,f);
getch();
}
