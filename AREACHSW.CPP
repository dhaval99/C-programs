#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,a,b,c,d,e,area;
printf("\nArea Menu \n1.rectangle \n2.triangle \n3.square");
printf("\nenter choice");
scanf("%d",&n);
switch (n)
{
case 1:
printf("\nlength");
scanf("%d",&a);
printf("\nwidth");
scanf("%d",&b);
area=a*b;
printf("area is %d",area);
break;
case 2:
printf("\nbase");
scanf("%d",&c);
printf("\nheight");
scanf("%d",&d);
area=0.5*c*d;
printf("area is %d",area);
break;
case 3:
printf("enter side");
scanf("%d",&e);
area=e*e;
printf("area is %d",area);
}
getch();
}



