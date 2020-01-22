#include<stdio.h>
#include<conio.h>
void main()
{
int itno,itrate,itqty,total,b,c,d;
clrscr();
printf("\nenter item number");
scanf("%d",&b);
printf("\nenter item rate");
scanf("%d",&c);
printf("\nenter item quantity");
scanf("%d",&d);
total=c*d;
printf("total is %d into %d is %d",c,d,total);
getch();
}

