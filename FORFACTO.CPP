#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,b=1,a;
printf("enter one number\t");
scanf("%d",&a);
for (i=1;i<=a;i++)
{
b=i*b;
}
printf("\n%d!=%d",a,b);
getch();
}